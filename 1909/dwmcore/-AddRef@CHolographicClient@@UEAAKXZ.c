/*
 * XREFs of ?AddRef@CHolographicClient@@UEAAKXZ @ 0x18001F570
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180051954 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?AddRef@CSubRectBitmapRealizationImageSource@@WBA@EAAKXZ @ 0x1800F0260 (-AddRef@CSubRectBitmapRealizationImageSource@@WBA@EAAKXZ.c)
 *     ?AddRef@CAtlasImageSource@@WBI@EAAKXZ @ 0x1800F0270 (-AddRef@CAtlasImageSource@@WBI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800F0280 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ @ 0x1800F0290 (-AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x1800F02A0 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WOA@EAAKXZ @ 0x1800F02B0 (-AddRef@CSystemMemoryBitmap@@WOA@EAAKXZ.c)
 *     ?AddRef@CHolographicViewer@@WEA@EAAKXZ @ 0x1800F0B50 (-AddRef@CHolographicViewer@@WEA@EAAKXZ.c)
 *     ?AddRef@CRenderTarget@@WEI@EAAKXZ @ 0x1800F0B60 (-AddRef@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?AddRef@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800F0B70 (-AddRef@CDesktopRenderTarget@@WKI@EAAKXZ.c)
 *     ?AddRef@CHolographicViewer@@WDI@EAAKXZ @ 0x1800F0CD0 (-AddRef@CHolographicViewer@@WDI@EAAKXZ.c)
 *     ?AddRef@CDxHandleYUVBitmapRealization@@WFI@EAAKXZ @ 0x1800F0E80 (-AddRef@CDxHandleYUVBitmapRealization@@WFI@EAAKXZ.c)
 *     ?AddRef@CSectionBitmapRealization@@WJA@EAAKXZ @ 0x1800F0E90 (-AddRef@CSectionBitmapRealization@@WJA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800F0FA0 (-AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800F0FB0 (-AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x1800F0FC0 (-AddRef@CSecondaryD2DBitmap@@WHA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800F0FD0 (-AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800F1060 (-AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?AddRef@CSectionBitmapRealization@@WBKA@EAAKXZ @ 0x1800F1570 (-AddRef@CSectionBitmapRealization@@WBKA@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ @ 0x1800F16F0 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180221B28 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CHolographicClient::AddRef(CHolographicClient *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
