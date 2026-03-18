/*
 * XREFs of RaspFreeMemory @ 0x140183CC4
 * Callers:
 *     RaspGetXExtent @ 0x1401838CC (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x140183AEC (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x140183B00 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x140183BFC (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x140183CE0 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x140183DC0 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x1401849E0 (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14034A1D8 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14034A4F0 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x14034A878 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140991698 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
