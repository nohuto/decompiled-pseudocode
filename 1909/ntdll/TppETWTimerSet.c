/*
 * XREFs of TppETWTimerSet @ 0x18010F8D8
 * Callers:
 *     TppSetTimer @ 0x1800326A0 (TppSetTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 TppETWTimerSet()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
