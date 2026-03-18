/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x140126870
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x14007EC6C (CcApplyLowIoPriorityToThread.c)
 *     CcUpdateReadHistory @ 0x140091D1C (CcUpdateReadHistory.c)
 *     CcCopyReadEx @ 0x1400B5810 (CcCopyReadEx.c)
 *     CcPurgeAndClearCacheSection @ 0x1401263F4 (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401265B0 (CcBoostLowPriorityWorkerThread.c)
 *     CcUnmapVacb @ 0x140609340 (CcUnmapVacb.c)
 *     CcMdlRead @ 0x140646CB0 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x14064DCE0 (CcMapAndCopyFromCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(_QWORD *a1, int a2, char a3)
{
  __int64 Partition; // rax
  int *v7; // rbx
  int v8; // eax
  int v9; // eax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Partition = CcGetPartition(a1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v7 = (int *)(a1 + 19);
  v8 = *v7;
  if ( a3 )
    v9 = a2 | v8;
  else
    v9 = ~a2 & v8;
  *v7 = v9;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
