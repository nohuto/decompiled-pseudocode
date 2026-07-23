/*
 * XREFs of RtlReportFatalFailure @ 0x1800FB4C0
 * Callers:
 *     RtlReportCriticalFailure @ 0x1800FB3FC (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x180104290 (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x1800A0880 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800DDD10 (RtlReportException.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
