/*
 * XREFs of PopDiscardRange @ 0x14059B3B8
 * Callers:
 *     PopSetRange @ 0x14015F9BC (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
