/*
 * XREFs of GxpBitsToBytes @ 0x140179544
 * Callers:
 *     BgpGxRectangleCreate @ 0x14099026C (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
