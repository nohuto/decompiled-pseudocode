/*
 * XREFs of RtlpHpAcquireReleaseLockExclusive @ 0x1401374F0
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x140137198 (RtlpHpHeapExtendContext.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpAcquireReleaseLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // al
  struct _KTHREAD *v5; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // r14
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  KIRQL v19; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  int v21; // [rsp+58h] [rbp+10h] BYREF
  int v22; // [rsp+60h] [rbp+18h]

  if ( (_DWORD)a2 )
  {
    v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v19;
    __writecr8(v19);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, a2);
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    v21 = 0;
    v5 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    else
      SessionId = -1;
    --v5->SpecialApcDisable;
    v7 = ++v5->AbAllocationRegionCount;
    v8 = ((char)v5->AbEntrySummary | (char)v5->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v10, v8);
      v22 = v10;
      if ( v9 )
        break;
      v11 = 1 << v10;
      v12 = v10;
      v13 = &v5->LockEntries[v12];
      v8 &= ~v11;
      if ( (v13->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v13->LockState.0 & 1) == 0
        && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v13->LockState.SessionId == SessionId )
      {
        v13->AcquiredByte &= ~1u;
        if ( v13->LockState.0 )
        {
          if ( v13 )
          {
            v13->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v13->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v5->LockEntries[v12].TreeNode);
            v14 = v13->BoostBitmap.AllFields & 0x1FFFF;
            v15 = v13->BoostBitmap.AllFields & 0xFFFE0000;
            v13->ThreadLocalFlags &= ~1u;
            v21 = v14;
            v13->BoostBitmap.AllFields = v15;
            v13->LockState.0 = 0LL;
            v16 = ((char *)v13 - (char *)v5 - 800) / 96;
            if ( v7 == 1 )
              v5->AbEntrySummary |= 1 << v16;
            else
              _InterlockedOr8((volatile signed __int8 *)&v5->AbOrphanedEntrySummary, 1 << v16);
            goto LABEL_17;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v5->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, BugCheckParameter2, SessionId, 0LL);
LABEL_17:
    --v5->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v5, BugCheckParameter2, &v21);
    v9 = v5->SpecialApcDisable++ == -1;
    if ( v9 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
      KiCheckForKernelApcDelivery(v17);
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
