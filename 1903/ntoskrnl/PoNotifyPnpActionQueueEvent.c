/*
 * XREFs of PoNotifyPnpActionQueueEvent @ 0x1402FB4A0
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015D540 (PnpDeviceActionWorker.c)
 * Callees:
 *     PopDirectedDripsNotifyPnpActionQueueEvent @ 0x140159218 (PopDirectedDripsNotifyPnpActionQueueEvent.c)
 */

__int64 __fastcall PoNotifyPnpActionQueueEvent(int a1, unsigned int a2)
{
  return PopDirectedDripsNotifyPnpActionQueueEvent(a1, a2);
}
