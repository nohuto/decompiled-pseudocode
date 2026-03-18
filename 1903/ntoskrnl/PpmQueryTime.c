/*
 * XREFs of PpmQueryTime @ 0x14011F380
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x140774718 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408ABEAC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER PpmQueryTime()
{
  return KeQueryPerformanceCounter(0LL);
}
