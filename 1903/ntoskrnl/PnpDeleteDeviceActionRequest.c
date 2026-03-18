/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x14015DA84
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015D540 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x140177278 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14029FB7C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A2980 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14087798C (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
