/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x1C0075AA0
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C0074588 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1C0051BB4 (StorpUninitializePerfTelemetry.c)
 */

void StorpUnRegisterTraceLogging()
{
  if ( g_StorpTraceLoggingInitialized == 1 )
  {
    KeCancelTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeCancelTimer(&g_StorpTraceLoggingDailyTimer);
    if ( g_StorpTraceLoggingPerformanceEnabled
      || g_StorpTraceLoggingErrorDataEnabled
      || g_StorpTraceLoggingDeviceHealthEnabled )
    {
      KeCancelTimer(&g_StorpTraceLoggingPerformanceTimer);
    }
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C0061058 = 0;
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingInitialized = 0;
  }
}
