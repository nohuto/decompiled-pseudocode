/*
 * XREFs of ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003BF18
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180018740 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18001C9F0 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?Update@CSecondarySysmemBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18001CC60 (-Update@CSecondarySysmemBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEA.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180022B80 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003BEC8 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003EB40 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800B1818 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x1800B30F4 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x1800C9420 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180163180 (-CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801637A0 (-LockForRead@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1801AD0A0 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(_DWORD *a1)
{
  return a1[2] <= *a1 || a1[3] <= a1[1];
}
