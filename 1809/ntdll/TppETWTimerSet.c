/*
 * XREFs of TppETWTimerSet @ 0x1801110E8
 * Callers:
 *     TppSetTimer @ 0x18002CFD4 (TppSetTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 TppETWTimerSet()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
