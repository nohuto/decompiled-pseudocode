/*
 * XREFs of TppETWTimerExpiration @ 0x180110FCC
 * Callers:
 *     TppSingleTimerExpiration @ 0x18002CE38 (TppSingleTimerExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 TppETWTimerExpiration()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
