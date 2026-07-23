/*
 * XREFs of GxpBitsToBytes @ 0x14016F754
 * Callers:
 *     BgpGxRectangleCreate @ 0x14095121C (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
