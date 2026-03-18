/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x140141EE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmEventIsDeliveredPerfChangeEnabled @ 0x140141F04 (PpmEventIsDeliveredPerfChangeEnabled.c)
 */

char PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( (unsigned __int8)PpmEventIsDeliveredPerfChangeEnabled() )
    return PpmCheckSnapAllDeliveredPerformance();
  else
    return 1;
}
