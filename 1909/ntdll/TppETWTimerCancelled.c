/*
 * XREFs of TppETWTimerCancelled @ 0x18010F73C
 * Callers:
 *     TppCancelTimer @ 0x18003257C (TppCancelTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 TppETWTimerCancelled()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
