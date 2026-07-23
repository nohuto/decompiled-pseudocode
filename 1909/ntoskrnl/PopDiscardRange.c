/*
 * XREFs of PopDiscardRange @ 0x14059B398
 * Callers:
 *     PopSetRange @ 0x14016005C (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x1400076F0 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
