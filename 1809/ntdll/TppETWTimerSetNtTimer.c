/*
 * XREFs of TppETWTimerSetNtTimer @ 0x18011119C
 * Callers:
 *     TppTimerQueueExpiration @ 0x18002CAB0 (TppTimerQueueExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x18002D104 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 TppETWTimerSetNtTimer()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
