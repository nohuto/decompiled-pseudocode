/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x14089A340
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x14071DC38 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  TraceLoggingRegisterEx(&stru_140401B10, 0LL, 0LL);
  KeQueryPerformanceCounter(&RtlpPerformanceCounterFrequency);
  return 1LL;
}
