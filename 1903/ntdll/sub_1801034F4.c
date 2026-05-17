/*
 * XREFs of sub_1801034F4 @ 0x1801034F4
 * Callers:
 *     RtlLockHeap @ 0x180019CB0 (RtlLockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_1801034F4()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
