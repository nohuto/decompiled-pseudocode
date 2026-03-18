/*
 * XREFs of KeReadStateSemaphore @ 0x140005D60
 * Callers:
 *     PnpDeviceEventWorker @ 0x14058BBC0 (PnpDeviceEventWorker.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
