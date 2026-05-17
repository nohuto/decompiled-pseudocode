/*
 * XREFs of TppETWCallbackDequeue @ 0x180110A68
 * Callers:
 *     TppSimplepExecuteCallback @ 0x18002E7B0 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x18002E970 (TppTimerpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x18006BEC0 (TppWorkpExecuteCallback.c)
 *     TppExecuteWaitTimerCallback @ 0x180086F80 (TppExecuteWaitTimerCallback.c)
 *     TppWorkUnposted @ 0x180110580 (TppWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 TppETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
