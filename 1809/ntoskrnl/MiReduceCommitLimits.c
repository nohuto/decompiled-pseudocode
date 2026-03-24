/*
 * XREFs of MiReduceCommitLimits @ 0x1402C0304
 * Callers:
 *     MiAttemptPageFileReductionApc @ 0x1402B7460 (MiAttemptPageFileReductionApc.c)
 *     MiInsertPartitionPages @ 0x1402D1BA4 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x14074BFB8 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x14084D54C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x140187F84 (MiComputeCommitThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
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
