/*
 * XREFs of PpmEventIsDeliveredPerfChangeEnabled @ 0x14015C1E4
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14015C1C0 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 */

bool PpmEventIsDeliveredPerfChangeEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( PpmEtwRegistered )
    return EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE) != 0;
  return v0;
}
