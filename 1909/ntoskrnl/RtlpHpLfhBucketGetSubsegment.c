/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x140120F04
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140038E80 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F7B0 (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1401214E4 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // r15
  unsigned __int64 v7; // rsi
  KIRQL v8; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v12; // r14
  unsigned int v13; // r8d
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+70h] [rbp+18h]

  v2 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v7 = a1 + 16;
  v8 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 16), a2);
  if ( (_QWORD *)*v2 == v2 )
    v5 = 0LL;
  else
    v5 = RtlpHpLfhOwnerMoveSubsegment(a1, *v2, 2LL);
  if ( a2 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v7);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v8);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    v21 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v12 = ++CurrentThread->AbAllocationRegionCount;
    v13 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v15, v13);
      v22 = v15;
      if ( v14 )
        break;
      v16 = 1 << v15;
      v17 = v15;
      v18 = &CurrentThread->LockEntries[v17];
      v13 &= ~v16;
      if ( (v18->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v18->LockState.0 & 1) == 0
        && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
        && v18->LockState.SessionId == SessionId )
      {
        v18->AcquiredByte &= ~1u;
        if ( v18->LockState.0 )
        {
          if ( v18 )
          {
            v18->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v18->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v17].TreeNode);
            v21 = v18->BoostBitmap.AllFields & 0x1FFFF;
            v18->BoostBitmap.AllFields &= 0xFFFE0000;
            v18->ThreadLocalFlags &= ~1u;
            v18->LockState.0 = 0LL;
            v19 = ((char *)v18 - (char *)CurrentThread - 800) / 96;
            if ( v12 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v19;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v19);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v7, SessionId, 0LL);
LABEL_30:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v7, &v21);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v20);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v5;
}
