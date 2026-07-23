/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x14089B5A0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x14071EED8 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  TraceLoggingRegisterEx(&stru_140402B10, 0LL, 0LL);
  KeQueryPerformanceCounter(&RtlpPerformanceCounterFrequency);
  return 1LL;
}
