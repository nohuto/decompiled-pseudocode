/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x140108BD0
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x14007E034 (CcApplyLowIoPriorityToThread.c)
 *     CcCopyReadEx @ 0x1400AF430 (CcCopyReadEx.c)
 *     CcUpdateReadHistory @ 0x1400DFE50 (CcUpdateReadHistory.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E78F8 (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140107F50 (CcBoostLowPriorityWorkerThread.c)
 *     CcUnmapVacb @ 0x1405F284C (CcUnmapVacb.c)
 *     CcMapAndCopyFromCache @ 0x140638760 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140662B90 (CcMdlRead.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400AD030 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // di
  int v4; // esi
  __int64 Partition; // rax
  int *v7; // rbx
  int v8; // eax
  int v9; // eax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  v4 = a2;
  Partition = CcGetPartition(a1, a2, a3);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v7 = (int *)(a1 + 19);
  v8 = *v7;
  if ( v3 )
    v9 = v4 | v8;
  else
    v9 = ~v4 & v8;
  *v7 = v9;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
