/*
 * XREFs of GxpBitsToBytes @ 0x14016F654
 * Callers:
 *     BgpGxRectangleCreate @ 0x14095021C (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
