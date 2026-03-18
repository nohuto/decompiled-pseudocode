/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x18001B8E0
 * Callers:
 *     ?Release@CTransformedGeometryHelper@@WBA@EAAKXZ @ 0x1800F0100 (-Release@CTransformedGeometryHelper@@WBA@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WEA@EAAKXZ @ 0x1800F0180 (-Release@CDesktopRenderTarget@@WEA@EAAKXZ.c)
 *     ?Release@CRenderTarget@@WEI@EAAKXZ @ 0x1800F0190 (-Release@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800F01A0 (-Release@CDesktopRenderTarget@@WKI@EAAKXZ.c)
 *     ?Release@CHolographicViewer@@WDI@EAAKXZ @ 0x1800F03F0 (-Release@CHolographicViewer@@WDI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x1800F04E0 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800F04F0 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x1800F0500 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@WDA@EAAKXZ @ 0x1800F0510 (-Release@CSystemMemoryBitmap@@WDA@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@WOA@EAAKXZ @ 0x1800F0520 (-Release@CSystemMemoryBitmap@@WOA@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WFI@EAAKXZ @ 0x1800F0670 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WFI@EAAKXZ.c)
 *     ?Release@CD2DBitmapCacheSourceRealization@@WJA@EAAKXZ @ 0x1800F0680 (-Release@CD2DBitmapCacheSourceRealization@@WJA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800F0840 (-Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800F0850 (-Release@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x1800F0860 (-Release@CSecondaryD2DBitmap@@WHA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800F0870 (-Release@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800F08B0 (-Release@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?Release@CSectionBitmapRealization@@WBKA@EAAKXZ @ 0x1800F13A0 (-Release@CSectionBitmapRealization@@WBKA@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ @ 0x1800F1480 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CGdiSpriteBitmap::Release(this);
}
