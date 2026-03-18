/*
 * XREFs of ?AddRef@CPathEmitterShape@EmitterShapes@@UEAAKXZ @ 0x18001FA30
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18001A700 (-Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800975F8 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?AddRef@CSubRectBitmapRealizationImageSource@@WBA@EAAKXZ @ 0x1800F00E0 (-AddRef@CSubRectBitmapRealizationImageSource@@WBA@EAAKXZ.c)
 *     ?AddRef@CHolographicViewer@@WEA@EAAKXZ @ 0x1800F0120 (-AddRef@CHolographicViewer@@WEA@EAAKXZ.c)
 *     ?AddRef@CRenderTarget@@WEI@EAAKXZ @ 0x1800F0130 (-AddRef@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?AddRef@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800F0140 (-AddRef@CDesktopRenderTarget@@WKI@EAAKXZ.c)
 *     ?AddRef@CHolographicViewer@@WDI@EAAKXZ @ 0x1800F02F0 (-AddRef@CHolographicViewer@@WDI@EAAKXZ.c)
 *     ?AddRef@CAtlasImageSource@@WBI@EAAKXZ @ 0x1800F0400 (-AddRef@CAtlasImageSource@@WBI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800F0410 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ @ 0x1800F0420 (-AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x1800F0430 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WOA@EAAKXZ @ 0x1800F0440 (-AddRef@CSystemMemoryBitmap@@WOA@EAAKXZ.c)
 *     ?AddRef@CDxHandleYUVBitmapRealization@@WFI@EAAKXZ @ 0x1800F05B0 (-AddRef@CDxHandleYUVBitmapRealization@@WFI@EAAKXZ.c)
 *     ?AddRef@CSectionBitmapRealization@@WJA@EAAKXZ @ 0x1800F05C0 (-AddRef@CSectionBitmapRealization@@WJA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800F0710 (-AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800F0720 (-AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x1800F0730 (-AddRef@CSecondaryD2DBitmap@@WHA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800F0740 (-AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800F0880 (-AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?AddRef@CSectionBitmapRealization@@WBKA@EAAKXZ @ 0x1800F1340 (-AddRef@CSectionBitmapRealization@@WBKA@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ @ 0x1800F1460 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180214398 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall EmitterShapes::CPathEmitterShape::AddRef(EmitterShapes::CPathEmitterShape *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
