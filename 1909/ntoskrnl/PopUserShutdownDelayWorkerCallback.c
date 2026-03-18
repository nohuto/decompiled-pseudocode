/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x1408A8420
 * Callers:
 *     <none>
 * Callees:
 *     PopUserShutdownCancelled @ 0x14072ACC0 (PopUserShutdownCancelled.c)
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
