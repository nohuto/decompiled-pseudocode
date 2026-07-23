/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x14015F97C
 * Callers:
 *     PnpRemoveDeviceActionRequests @ 0x14015EF64 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14015F400 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x140289B40 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x14059CD40 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14083DA48 (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
