/*
 * XREFs of PopDiscardRange @ 0x14056BA08
 * Callers:
 *     PopSetRange @ 0x14014494C (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x1406DF554 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x140076D80 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(struct _RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
