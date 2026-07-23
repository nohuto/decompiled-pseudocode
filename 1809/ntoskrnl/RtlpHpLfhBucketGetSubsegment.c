/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x14010E4C0
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14010E7A0 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v5; // rbp
  volatile LONG *v6; // rcx
  KIRQL v7; // r12
  __int64 v8; // r14
  struct _KTHREAD *v10; // rdi
  unsigned int SessionId; // r8d
  BOOL v12; // esi
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+70h] [rbp+18h]

  v2 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v5 = a1 + 16;
  v6 = (volatile LONG *)(a1 + 16);
  if ( a2 )
  {
    v7 = ExAcquireSpinLockExclusive(v6);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
    v7 = -1;
  }
  if ( (_QWORD *)*v2 == v2 )
    v8 = 0LL;
  else
    v8 = RtlpHpLfhOwnerMoveSubsegment(a1, *v2, 2LL);
  if ( a2 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    v23 = 0;
    v10 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    else
      SessionId = -1;
    --v10->SpecialApcDisable;
    v12 = ++v10->AbAllocationRegionCount == 1;
    LODWORD(v13) = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
    v14 = !_BitScanReverse((unsigned int *)&v15, v13);
    v24 = v15;
    if ( v14 )
      goto LABEL_33;
    while ( 1 )
    {
      v16 = 1 << v15;
      v17 = v15;
      v18 = &v10->LockEntries[v17];
      v13 = ~v16 & (unsigned int)v13;
      if ( (v18->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v18->LockState.0 & 1) == 0
        && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
        && v18->LockState.SessionId == SessionId )
      {
        v18->AcquiredByte &= ~1u;
        if ( v18->LockState.0 )
          break;
      }
      v14 = !_BitScanReverse((unsigned int *)&v15, v13);
      v24 = v15;
      if ( v14 )
        goto LABEL_33;
    }
    if ( !v18 )
    {
LABEL_33:
      if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v10, v5, SessionId, 0LL);
    }
    else
    {
      v18->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v18->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v10->LockEntries[v17].TreeNode, v13);
      v23 = 0;
      v23 = v18->BoostBitmap.AllFields & 0x1FFFF;
      v18->BoostBitmap.AllFields &= 0xFFFE0000;
      v18->ThreadLocalFlags &= ~1u;
      v18->LockState.0 = 0LL;
      v19 = ((char *)v18 - (char *)v10 - 800) / 96;
      if ( v12 )
        v10->AbEntrySummary |= 1 << v19;
      else
        _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v19);
    }
    --v10->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v10, v5, (__int64)&v23);
    v14 = v10->SpecialApcDisable++ == -1;
    if ( v14 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
      KiCheckForKernelApcDelivery(v20);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v8;
}
