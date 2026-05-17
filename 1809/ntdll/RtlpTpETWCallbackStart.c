/*
 * XREFs of RtlpTpETWCallbackStart @ 0x180110BA0
 * Callers:
 *     TppExecuteWaitCallback @ 0x18002BDF8 (TppExecuteWaitCallback.c)
 *     TppSimplepExecuteCallback @ 0x18002E7B0 (TppSimplepExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x18002E890 (RtlpTpTimerCallback.c)
 *     TppTimerpExecuteCallback @ 0x18002E970 (TppTimerpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18002EA60 (TppIopExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x18002F9F0 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x180030240 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x180031DC0 (TppJobpExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x180069EA0 (TppAlpcpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x18006BEC0 (TppWorkpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1801113E0 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackStart()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
