/*
 * XREFs of RaspRectangleDestroy @ 0x140183AEC
 * Callers:
 *     BgpRasPrintGlyph @ 0x14018355C (BgpRasPrintGlyph.c)
 *     RaspScanConvert @ 0x140183DC0 (RaspScanConvert.c)
 *     RaspDestroyCachedBitmap @ 0x140991698 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x140183CC4 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, __int64 a2)
{
  return RaspFreeMemory(a1, a2);
}
