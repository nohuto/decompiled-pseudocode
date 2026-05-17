/*
 * XREFs of sub_1800F9050 @ 0x1800F9050
 * Callers:
 *     sub_1800F8F8C @ 0x1800F8F8C (sub_1800F8F8C.c)
 *     sub_18010194C @ 0x18010194C (sub_18010194C.c)
 * Callees:
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 */

void __fastcall sub_1800F9050(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
