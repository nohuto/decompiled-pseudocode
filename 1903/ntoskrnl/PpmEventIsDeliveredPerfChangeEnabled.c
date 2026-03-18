/*
 * XREFs of PpmEventIsDeliveredPerfChangeEnabled @ 0x14015BB44
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14015BB20 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 */

bool PpmEventIsDeliveredPerfChangeEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( PpmEtwRegistered )
    return EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE) != 0;
  return v0;
}
