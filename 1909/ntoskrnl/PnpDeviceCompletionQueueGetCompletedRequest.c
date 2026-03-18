/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x1401982AC
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1407049DC (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  KeWaitForSingleObject(&byte_140460568, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140460588);
  v1 = qword_140460558;
  v2 = v0;
  v3 = *(_QWORD *)qword_140460558;
  if ( *(__int64 **)(qword_140460558 + 8) != &qword_140460558 || *(_QWORD *)(v3 + 8) != qword_140460558 )
    __fastfail(3u);
  qword_140460558 = *(_QWORD *)qword_140460558;
  *(_QWORD *)(v3 + 8) = &qword_140460558;
  KxReleaseSpinLock(&qword_140460588);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  return v1;
}
