/*
 * XREFs of sub_18010F2FC @ 0x18010F2FC
 * Callers:
 *     sub_18002EA00 @ 0x18002EA00 (sub_18002EA00.c)
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     sub_180030488 @ 0x180030488 (sub_180030488.c)
 *     sub_1800305A0 @ 0x1800305A0 (sub_1800305A0.c)
 *     sub_180030680 @ 0x180030680 (sub_180030680.c)
 *     sub_180030770 @ 0x180030770 (sub_180030770.c)
 *     sub_180032D70 @ 0x180032D70 (sub_180032D70.c)
 *     sub_1800332A0 @ 0x1800332A0 (sub_1800332A0.c)
 *     sub_180033520 @ 0x180033520 (sub_180033520.c)
 *     sub_18007FC20 @ 0x18007FC20 (sub_18007FC20.c)
 *     sub_18010FB10 @ 0x18010FB10 (sub_18010FB10.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010F2FC()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
