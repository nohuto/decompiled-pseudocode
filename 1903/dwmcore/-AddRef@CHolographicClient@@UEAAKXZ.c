/*
 * XREFs of ?AddRef@CHolographicClient@@UEAAKXZ @ 0x1800214C0
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18003D430 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?AddRef@CSubRectBitmapRealizationImageSource@@WBA@EAAKXZ @ 0x1800EC5A0 (-AddRef@CSubRectBitmapRealizationImageSource@@WBA@EAAKXZ.c)
 *     ?AddRef@CAtlasImageSource@@WBI@EAAKXZ @ 0x1800EC5B0 (-AddRef@CAtlasImageSource@@WBI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800EC5C0 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ @ 0x1800EC5D0 (-AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x1800EC5E0 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WOA@EAAKXZ @ 0x1800EC5F0 (-AddRef@CSystemMemoryBitmap@@WOA@EAAKXZ.c)
 *     ?AddRef@CHolographicViewer@@WEA@EAAKXZ @ 0x1800ECE90 (-AddRef@CHolographicViewer@@WEA@EAAKXZ.c)
 *     ?AddRef@CRenderTarget@@WEI@EAAKXZ @ 0x1800ECEA0 (-AddRef@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?AddRef@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800ECEB0 (-AddRef@CDesktopRenderTarget@@WKI@EAAKXZ.c)
 *     ?AddRef@CHolographicViewer@@WDI@EAAKXZ @ 0x1800ED010 (-AddRef@CHolographicViewer@@WDI@EAAKXZ.c)
 *     ?AddRef@CDxHandleYUVBitmapRealization@@WFI@EAAKXZ @ 0x1800ED1C0 (-AddRef@CDxHandleYUVBitmapRealization@@WFI@EAAKXZ.c)
 *     ?AddRef@CSectionBitmapRealization@@WJA@EAAKXZ @ 0x1800ED1D0 (-AddRef@CSectionBitmapRealization@@WJA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800ED2E0 (-AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800ED2F0 (-AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x1800ED300 (-AddRef@CSecondaryD2DBitmap@@WHA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800ED310 (-AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800ED3A0 (-AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?AddRef@CSectionBitmapRealization@@WBKA@EAAKXZ @ 0x1800ED8B0 (-AddRef@CSectionBitmapRealization@@WBKA@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ @ 0x1800EDA30 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180223238 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CHolographicClient::AddRef(CHolographicClient *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
