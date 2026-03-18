/*
 * XREFs of _TlgKeywordOn @ 0x1C001D730
 * Callers:
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C00080F0 (AcpiDiagTraceTemperatureTelemetry.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0049418 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTraceRecordAmlEvaluationStatistics @ 0x1C0049BF8 (AcpiDiagTraceRecordAmlEvaluationStatistics.c)
 *     IrqTraceAffinityPolicy @ 0x1C0097FC8 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (*((_QWORD *)hProvider + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)hProvider + 3) & 0x400000000000LL) == *((_QWORD *)hProvider + 3);
}
