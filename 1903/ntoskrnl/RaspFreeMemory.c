/*
 * XREFs of RaspFreeMemory @ 0x140183714
 * Callers:
 *     RaspGetXExtent @ 0x14018331C (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x14018353C (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x140183550 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x14018364C (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x140183730 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x140183810 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x140184430 (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14034A778 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14034AA90 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x14034AE18 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140991698 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
