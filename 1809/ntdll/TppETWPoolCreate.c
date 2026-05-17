/*
 * XREFs of TppETWPoolCreate @ 0x180110D54
 * Callers:
 *     TpAllocPoolInternal @ 0x180030848 (TpAllocPoolInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 TppETWPoolCreate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
