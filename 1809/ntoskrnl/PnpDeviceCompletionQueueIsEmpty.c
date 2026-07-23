/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x140159C3C
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1406E7D90 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140435C68);
  if ( (__int64 *)PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_140435C38 == (_QWORD)&qword_140435C38;
  KxReleaseSpinLock(&qword_140435C68);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v1);
  return v0;
}
