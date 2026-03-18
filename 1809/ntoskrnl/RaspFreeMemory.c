/*
 * XREFs of RaspFreeMemory @ 0x14017AB3C
 * Callers:
 *     BgpRasPrintGlyph @ 0x14017A1B4 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x14017A754 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x14017A964 (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x14017A978 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x14017AA74 (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x14017AB58 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x14017AC30 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x14017B84C (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x140328DF0 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x140329108 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x140329490 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140951630 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016ECCC (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
