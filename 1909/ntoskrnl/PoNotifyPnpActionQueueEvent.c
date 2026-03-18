/*
 * XREFs of PoNotifyPnpActionQueueEvent @ 0x1402FAF50
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PopDirectedDripsNotifyPnpActionQueueEvent @ 0x1401598B8 (PopDirectedDripsNotifyPnpActionQueueEvent.c)
 */

__int64 __fastcall PoNotifyPnpActionQueueEvent(int a1, unsigned int a2)
{
  return PopDirectedDripsNotifyPnpActionQueueEvent(a1, a2);
}
