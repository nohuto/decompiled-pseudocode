/*
 * XREFs of KeReadStateSemaphore @ 0x140005D60
 * Callers:
 *     PnpDeviceEventWorker @ 0x14058CBC0 (PnpDeviceEventWorker.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
