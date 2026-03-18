/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14015BB20
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035810 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmEventIsDeliveredPerfChangeEnabled @ 0x14015BB44 (PpmEventIsDeliveredPerfChangeEnabled.c)
 */

char PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( (unsigned __int8)PpmEventIsDeliveredPerfChangeEnabled() )
    return PpmCheckSnapAllDeliveredPerformance();
  else
    return 1;
}
