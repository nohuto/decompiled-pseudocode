/*
 * XREFs of PpmQueryTime @ 0x14011F8D0
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x140750EF4 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408704C8 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER PpmQueryTime()
{
  return KeQueryPerformanceCounter(0LL);
}
