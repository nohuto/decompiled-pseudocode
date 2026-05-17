/*
 * XREFs of TppETWPoolThreadMax @ 0x180110DD0
 * Callers:
 *     TpSetPoolMaxThreads @ 0x180031670 (TpSetPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMax()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
