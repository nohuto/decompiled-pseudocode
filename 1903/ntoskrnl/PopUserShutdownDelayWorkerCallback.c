/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x1408A8BC0
 * Callers:
 *     <none>
 * Callees:
 *     PopUserShutdownCancelled @ 0x140729950 (PopUserShutdownCancelled.c)
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
