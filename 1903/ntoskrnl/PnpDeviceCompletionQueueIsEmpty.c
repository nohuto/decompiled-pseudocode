/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x140145B84
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140702BFC (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_1404608A8);
  if ( (__int64 *)PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_140460878 == (_QWORD)&qword_140460878;
  KxReleaseSpinLock(&qword_1404608A8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v1);
  return v0;
}
