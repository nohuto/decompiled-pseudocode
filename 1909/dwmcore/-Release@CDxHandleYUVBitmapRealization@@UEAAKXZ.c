/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x18001D5D0
 * Callers:
 *     ?Release@CTransformedGeometryHelper@@WBA@EAAKXZ @ 0x1800F0370 (-Release@CTransformedGeometryHelper@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x1800F0380 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800F0390 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x1800F03A0 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@WDA@EAAKXZ @ 0x1800F03B0 (-Release@CSystemMemoryBitmap@@WDA@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@WOA@EAAKXZ @ 0x1800F03C0 (-Release@CSystemMemoryBitmap@@WOA@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WEA@EAAKXZ @ 0x1800F0BB0 (-Release@CDesktopRenderTarget@@WEA@EAAKXZ.c)
 *     ?Release@CRenderTarget@@WEI@EAAKXZ @ 0x1800F0BC0 (-Release@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800F0BD0 (-Release@CDesktopRenderTarget@@WKI@EAAKXZ.c)
 *     ?Release@CHolographicExclusiveMode@@WDI@EAAKXZ @ 0x1800F0DC0 (-Release@CHolographicExclusiveMode@@WDI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WFI@EAAKXZ @ 0x1800F0F40 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WFI@EAAKXZ.c)
 *     ?Release@CD2DBitmapCacheSourceRealization@@WJA@EAAKXZ @ 0x1800F0F50 (-Release@CD2DBitmapCacheSourceRealization@@WJA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800F1020 (-Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800F1030 (-Release@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x1800F1040 (-Release@CSecondaryD2DBitmap@@WHA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800F1050 (-Release@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800F1090 (-Release@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?Release@CSectionBitmapRealization@@WBKA@EAAKXZ @ 0x1800F15D0 (-Release@CSectionBitmapRealization@@WBKA@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ @ 0x1800F1710 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CGdiSpriteBitmap::Release(this);
}
