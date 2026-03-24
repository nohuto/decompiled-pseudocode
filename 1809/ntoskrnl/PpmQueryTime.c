/*
 * XREFs of PpmQueryTime @ 0x14011F860
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x14074FD04 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x14086F268 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER PpmQueryTime()
{
  return KeQueryPerformanceCounter(0LL);
}
