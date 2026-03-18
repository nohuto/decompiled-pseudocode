/*
 * XREFs of _TlgKeywordOn @ 0x1C0048AE0
 * Callers:
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C00118E8 (AcpiDiagTraceTemperatureTelemetry.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0047DA8 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTraceRecordAmlEvaluationStatistics @ 0x1C0048568 (AcpiDiagTraceRecordAmlEvaluationStatistics.c)
 *     IrqTraceAffinityPolicy @ 0x1C00938A4 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (*((_QWORD *)hProvider + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)hProvider + 3) & 0x400000000000LL) == *((_QWORD *)hProvider + 3);
}
