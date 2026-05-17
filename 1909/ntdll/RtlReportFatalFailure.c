/*
 * XREFs of RtlReportFatalFailure @ 0x1800F9130
 * Callers:
 *     RtlReportCriticalFailure @ 0x1800F906C (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x180101A2C (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x18009D410 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800DB9E0 (RtlReportException.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
