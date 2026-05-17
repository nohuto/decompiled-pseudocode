/*
 * XREFs of TppETWCallbackDequeue @ 0x18010F258
 * Callers:
 *     TppTimerpExecuteCallback @ 0x180030680 (TppTimerpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180030770 (TppWorkpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180032D70 (TppSimplepExecuteCallback.c)
 *     TppExecuteWaitTimerCallback @ 0x1800826F0 (TppExecuteWaitTimerCallback.c)
 *     TppWorkUnposted @ 0x18010EDB0 (TppWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 TppETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
