/*
 * XREFs of RaspRectangleDestroy @ 0x14018353C
 * Callers:
 *     BgpRasPrintGlyph @ 0x140182FAC (BgpRasPrintGlyph.c)
 *     RaspScanConvert @ 0x140183810 (RaspScanConvert.c)
 *     RaspDestroyCachedBitmap @ 0x140991698 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x140183714 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, __int64 a2)
{
  return RaspFreeMemory(a1, a2);
}
