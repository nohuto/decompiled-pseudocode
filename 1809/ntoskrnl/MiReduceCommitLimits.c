/*
 * XREFs of MiReduceCommitLimits @ 0x1402C04F4
 * Callers:
 *     MiAttemptPageFileReductionApc @ 0x1402B7650 (MiAttemptPageFileReductionApc.c)
 *     MiInsertPartitionPages @ 0x1402D1D94 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x1401880C4 (MiComputeCommitThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReduceCommitLimits(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 805, &LockHandle);
  if ( a3 )
    a1[801] -= a3;
  if ( a2 )
    a1[973] -= a2;
  MiComputeCommitThresholds(a1);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
