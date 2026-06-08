/*
 * XREFs of _TlgKeywordOn @ 0x1C00081B8
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0007D28 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C0008144 (ProcLibTraceUnexpectedTurboDisable.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C003A9AC (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (keyword & qword_1C0016048) != 0 && (keyword & qword_1C0016050) == qword_1C0016050;
}
