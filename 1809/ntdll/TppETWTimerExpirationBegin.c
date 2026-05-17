/*
 * XREFs of TppETWTimerExpirationBegin @ 0x18011106C
 * Callers:
 *     TppTimerQueueExpiration @ 0x18002CAB0 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 TppETWTimerExpirationBegin()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
