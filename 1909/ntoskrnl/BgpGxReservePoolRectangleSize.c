/*
 * XREFs of BgpGxReservePoolRectangleSize @ 0x14098E7CC
 * Callers:
 *     BgpTxtRegionSize @ 0x140178B24 (BgpTxtRegionSize.c)
 * Callees:
 *     BgpGxRectangleSize @ 0x140178B84 (BgpGxRectangleSize.c)
 */

__int64 __fastcall BgpGxReservePoolRectangleSize(int a1, int a2, int a3)
{
  return (((unsigned int)BgpGxRectangleSize(a1, a2, a3) + 15) & 0xFFFFFFF0) + 32;
}
