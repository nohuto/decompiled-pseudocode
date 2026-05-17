/*
 * XREFs of TppETWCallbackCancel @ 0x1801109C0
 * Callers:
 *     TppWorkWait @ 0x18002D368 (TppWorkWait.c)
 *     TpWaitForIoCompletion @ 0x180032880 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180088520 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180110210 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
