/*
 * XREFs of RaspFreeMemory @ 0x14017AC5C
 * Callers:
 *     BgpRasPrintGlyph @ 0x14017A2D4 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x14017A874 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x14017AA84 (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x14017AA98 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x14017AB94 (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x14017AC78 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x14017AD50 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x14017B96C (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1403290E0 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1403293F8 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x140329780 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140952630 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
