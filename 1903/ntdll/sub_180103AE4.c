/*
 * XREFs of sub_180103AE4 @ 0x180103AE4
 * Callers:
 *     RtlUnlockHeap @ 0x180019BF0 (RtlUnlockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_180103AE4()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
