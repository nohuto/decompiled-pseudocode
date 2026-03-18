/*
 * XREFs of MiReduceCommitLimits @ 0x1402D99A0
 * Callers:
 *     MiAttemptPageFileReductionApc @ 0x1402CD610 (MiAttemptPageFileReductionApc.c)
 *     MiInsertPartitionPages @ 0x1402EA698 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x140888720 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x14019339C (MiComputeCommitThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReduceCommitLimits(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 901, &LockHandle);
  if ( a3 )
    a1[897] -= a3;
  if ( a2 )
    a1[1069] -= a2;
  MiComputeCommitThresholds(a1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
