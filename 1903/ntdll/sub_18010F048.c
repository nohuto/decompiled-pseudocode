/*
 * XREFs of sub_18010F048 @ 0x18010F048
 * Callers:
 *     TpCheckTerminateWorker @ 0x18006D560 (TpCheckTerminateWorker.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 * Callees:
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 */

__int64 __fastcall sub_18010F048(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
