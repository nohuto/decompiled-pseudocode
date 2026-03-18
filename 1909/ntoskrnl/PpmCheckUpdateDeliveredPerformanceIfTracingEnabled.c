/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14015C1C0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035C00 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmEventIsDeliveredPerfChangeEnabled @ 0x14015C1E4 (PpmEventIsDeliveredPerfChangeEnabled.c)
 */

char PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( (unsigned __int8)PpmEventIsDeliveredPerfChangeEnabled() )
    return PpmCheckSnapAllDeliveredPerformance();
  else
    return 1;
}
