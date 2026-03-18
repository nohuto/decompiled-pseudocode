/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x14018D948
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1406E6B10 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  KeWaitForSingleObject(&byte_140434BA8, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140434BC8);
  v1 = qword_140434B98;
  v2 = v0;
  v3 = *(_QWORD *)qword_140434B98;
  if ( *(__int64 **)(qword_140434B98 + 8) != &qword_140434B98 || *(_QWORD *)(v3 + 8) != qword_140434B98 )
    __fastfail(3u);
  qword_140434B98 = *(_QWORD *)qword_140434B98;
  *(_QWORD *)(v3 + 8) = &qword_140434B98;
  KxReleaseSpinLock(&qword_140434BC8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  return v1;
}
