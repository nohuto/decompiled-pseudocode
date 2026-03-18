/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x140197C4C
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140702BFC (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  KeWaitForSingleObject(&byte_140460888, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1404608A8);
  v1 = qword_140460878;
  v2 = v0;
  v3 = *(_QWORD *)qword_140460878;
  if ( *(__int64 **)(qword_140460878 + 8) != &qword_140460878 || *(_QWORD *)(v3 + 8) != qword_140460878 )
    __fastfail(3u);
  qword_140460878 = *(_QWORD *)qword_140460878;
  *(_QWORD *)(v3 + 8) = &qword_140460878;
  KxReleaseSpinLock(&qword_1404608A8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  return v1;
}
