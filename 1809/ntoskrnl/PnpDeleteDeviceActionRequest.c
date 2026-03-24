/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x14015F87C
 * Callers:
 *     PnpRemoveDeviceActionRequests @ 0x14015EE64 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14015F300 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x140289950 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x14059BD40 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14083C7E8 (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
