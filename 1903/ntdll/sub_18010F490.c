/*
 * XREFs of sub_18010F490 @ 0x18010F490
 * Callers:
 *     TpSetPoolMaxThreads @ 0x180062E20 (TpSetPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010F490()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
