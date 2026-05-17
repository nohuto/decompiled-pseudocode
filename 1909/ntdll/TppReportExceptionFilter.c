/*
 * XREFs of TppReportExceptionFilter @ 0x18010F178
 * Callers:
 *     TpCheckTerminateWorker @ 0x18006D7B0 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x1800DB9E0 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 *a1)
{
  RtlReportException(*a1, a1[1], 3u);
  return 0LL;
}
