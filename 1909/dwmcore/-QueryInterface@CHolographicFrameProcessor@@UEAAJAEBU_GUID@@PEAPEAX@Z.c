/*
 * XREFs of ?QueryInterface@CHolographicFrameProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E120
 * Callers:
 *     ?QueryInterface@CSectionBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0300 (-QueryInterface@CSectionBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAtlasImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0310 (-QueryInterface@CAtlasImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0320 (-QueryInterface@CSystemMemoryBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0330 (-QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0340 (-QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0350 (-QueryInterface@CSystemMemoryBitmap@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0A20 (-QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0A30 (-QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0A40 (-QueryInterface@CSecondaryD2DBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHolographicDisplay@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0B80 (-QueryInterface@CHolographicDisplay@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0B90 (-QueryInterface@CRenderTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDesktopRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0BA0 (-QueryInterface@CDesktopRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHolographicExclusiveMode@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0D80 (-QueryInterface@CHolographicExclusiveMode@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0EF0 (-QueryInterface@CRenderTargetBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSectionBitmapRealization@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0F00 (-QueryInterface@CSectionBitmapRealization@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1010 (-QueryInterface@CSecondaryD2DBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1080 (-QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleYUVBitmapRealization@@WBKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F15C0 (-QueryInterface@CDxHandleYUVBitmapRealization@@WBKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1700 (-QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHolographicFrameProcessor::QueryInterface(
        CHolographicFrameProcessor *this,
        const struct _GUID *a2,
        void **a3)
{
  return CMILCOMBase::InternalQueryInterface(this, a2, a3);
}
