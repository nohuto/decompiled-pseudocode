/*
 * XREFs of KeReadStateSemaphore @ 0x14009AF50
 * Callers:
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
