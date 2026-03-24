/*
 * XREFs of KeReadStateSemaphore @ 0x140005D60
 * Callers:
 *     PnpDeviceEventWorker @ 0x14058BBC0 (PnpDeviceEventWorker.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF790 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
