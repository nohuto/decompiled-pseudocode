/*
 * XREFs of PpmQueryTime @ 0x14011F840
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x14074FD24 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x14086F288 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER PpmQueryTime()
{
  return KeQueryPerformanceCounter(0LL);
}
