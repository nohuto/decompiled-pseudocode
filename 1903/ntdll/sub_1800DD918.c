/*
 * XREFs of sub_1800DD918 @ 0x1800DD918
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007C830 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180083560 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_1800DD918()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
