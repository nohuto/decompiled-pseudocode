/*
 * XREFs of RaspFreeMemory @ 0x14017AB5C
 * Callers:
 *     BgpRasPrintGlyph @ 0x14017A1D4 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x14017A774 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x14017A984 (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x14017A998 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x14017AA94 (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x14017AB78 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x14017AC50 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x14017B86C (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x140328EF0 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x140329208 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x140329590 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140951630 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016ECEC (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
