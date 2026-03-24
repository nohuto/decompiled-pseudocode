/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x14086C260
 * Callers:
 *     <none>
 * Callees:
 *     PopUserShutdownCancelled @ 0x1406E2270 (PopUserShutdownCancelled.c)
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
