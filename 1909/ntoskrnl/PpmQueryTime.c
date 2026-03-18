/*
 * XREFs of PpmQueryTime @ 0x1401200D0
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x140777CF8 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408AB70C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER PpmQueryTime()
{
  return KeQueryPerformanceCounter(0LL);
}
