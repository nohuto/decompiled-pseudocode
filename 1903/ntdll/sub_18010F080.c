/*
 * XREFs of sub_18010F080 @ 0x18010F080
 * Callers:
 *     sub_180031C98 @ 0x180031C98 (sub_180031C98.c)
 *     TpWaitForIoCompletion @ 0x180062640 (TpWaitForIoCompletion.c)
 *     sub_180084810 @ 0x180084810 (sub_180084810.c)
 *     sub_18010E7E0 @ 0x18010E7E0 (sub_18010E7E0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010F080()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
