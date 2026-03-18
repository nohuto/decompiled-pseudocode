/*
 * XREFs of ?QueryInterface@CHolographicFrameProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020070
 * Callers:
 *     ?QueryInterface@CSectionBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC640 (-QueryInterface@CSectionBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAtlasImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC650 (-QueryInterface@CAtlasImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC660 (-QueryInterface@CSystemMemoryBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC670 (-QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC680 (-QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC690 (-QueryInterface@CSystemMemoryBitmap@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECD60 (-QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECD70 (-QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECD80 (-QueryInterface@CSecondaryD2DBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHolographicDisplay@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECEC0 (-QueryInterface@CHolographicDisplay@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECED0 (-QueryInterface@CRenderTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDesktopRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECEE0 (-QueryInterface@CDesktopRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHolographicExclusiveMode@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED0C0 (-QueryInterface@CHolographicExclusiveMode@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED230 (-QueryInterface@CRenderTargetBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSectionBitmapRealization@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED240 (-QueryInterface@CSectionBitmapRealization@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED350 (-QueryInterface@CSecondaryD2DBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED3C0 (-QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleYUVBitmapRealization@@WBKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED900 (-QueryInterface@CDxHandleYUVBitmapRealization@@WBKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EDA40 (-QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
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
