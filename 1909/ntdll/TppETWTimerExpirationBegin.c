/*
 * XREFs of TppETWTimerExpirationBegin @ 0x18010F85C
 * Callers:
 *     TppTimerQueueExpiration @ 0x180035FA0 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 TppETWTimerExpirationBegin()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
