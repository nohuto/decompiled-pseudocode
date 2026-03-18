/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x1408D8790
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x140747E64 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  TraceLoggingRegisterEx(&stru_140427EF0, 0LL, 0LL);
  KeQueryPerformanceCounter(&RtlpPerformanceCounterFrequency);
  return 1LL;
}
