/*
 * XREFs of TppETWTimerCancelNtTimer @ 0x18010F6C0
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x1800327D4 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 TppETWTimerCancelNtTimer()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
