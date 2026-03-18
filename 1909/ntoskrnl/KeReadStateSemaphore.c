/*
 * XREFs of KeReadStateSemaphore @ 0x1400EEF60
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
