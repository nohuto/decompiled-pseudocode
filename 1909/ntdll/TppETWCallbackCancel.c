/*
 * XREFs of TppETWCallbackCancel @ 0x18010F1B0
 * Callers:
 *     TppWorkWait @ 0x180031C98 (TppWorkWait.c)
 *     TpWaitForIoCompletion @ 0x1800626E0 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180084EB0 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x18010E910 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
