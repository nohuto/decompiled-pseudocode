/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x180111220
 * Callers:
 *     TppWorkerFindTask @ 0x180015BF4 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 TppETWWorkerNodeSwitch()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
