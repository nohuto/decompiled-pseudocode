/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x14086D4C0
 * Callers:
 *     <none>
 * Callees:
 *     PopUserShutdownCancelled @ 0x1406E3510 (PopUserShutdownCancelled.c)
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
