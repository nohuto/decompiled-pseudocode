/*
 * XREFs of RtlpTpETWCallbackStart @ 0x18010F390
 * Callers:
 *     RtlpTpWaitCallback @ 0x18002EA00 (RtlpTpWaitCallback.c)
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     TppExecuteWaitCallback @ 0x180030488 (TppExecuteWaitCallback.c)
 *     RtlpTpTimerCallback @ 0x1800305A0 (RtlpTpTimerCallback.c)
 *     TppTimerpExecuteCallback @ 0x180030680 (TppTimerpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180030770 (TppWorkpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180032D70 (TppSimplepExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x1800332A0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180033520 (TppIopExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x1800802C0 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x18010FC40 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackStart()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
