/*
 * XREFs of PopDiscardRange @ 0x14056CA08
 * Callers:
 *     PopSetRange @ 0x140144A6C (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
