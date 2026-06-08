/*
 * XREFs of _TlgKeywordOn @ 0x1C000823C
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0004238 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C00081C8 (ProcLibTraceUnexpectedTurboDisable.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C00376A0 (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (keyword & qword_1C0015040) != 0 && (keyword & qword_1C0015048) == qword_1C0015048;
}
