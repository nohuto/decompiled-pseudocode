/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x18001F420
 * Callers:
 *     ?Release@CTransformedGeometryHelper@@WBA@EAAKXZ @ 0x1800EC6B0 (-Release@CTransformedGeometryHelper@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x1800EC6C0 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800EC6D0 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x1800EC6E0 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@WDA@EAAKXZ @ 0x1800EC6F0 (-Release@CSystemMemoryBitmap@@WDA@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@WOA@EAAKXZ @ 0x1800EC700 (-Release@CSystemMemoryBitmap@@WOA@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WEA@EAAKXZ @ 0x1800ECEF0 (-Release@CDesktopRenderTarget@@WEA@EAAKXZ.c)
 *     ?Release@CRenderTarget@@WEI@EAAKXZ @ 0x1800ECF00 (-Release@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800ECF10 (-Release@CDesktopRenderTarget@@WKI@EAAKXZ.c)
 *     ?Release@CHolographicExclusiveMode@@WDI@EAAKXZ @ 0x1800ED100 (-Release@CHolographicExclusiveMode@@WDI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WFI@EAAKXZ @ 0x1800ED280 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WFI@EAAKXZ.c)
 *     ?Release@CD2DBitmapCacheSourceRealization@@WJA@EAAKXZ @ 0x1800ED290 (-Release@CD2DBitmapCacheSourceRealization@@WJA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800ED360 (-Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800ED370 (-Release@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x1800ED380 (-Release@CSecondaryD2DBitmap@@WHA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800ED390 (-Release@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800ED3D0 (-Release@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?Release@CSectionBitmapRealization@@WBKA@EAAKXZ @ 0x1800ED910 (-Release@CSectionBitmapRealization@@WBKA@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ @ 0x1800EDA50 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CGdiSpriteBitmap::Release(this);
}
