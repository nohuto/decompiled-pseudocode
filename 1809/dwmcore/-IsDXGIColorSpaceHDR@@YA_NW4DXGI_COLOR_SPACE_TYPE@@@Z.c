/*
 * XREFs of ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008C59C
 * Callers:
 *     ?IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18001B1B0 (-IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18004CC60 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x18008C44C (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 *     ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z @ 0x18008C4F4 (-GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18016A7E4 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180177EC4 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ @ 0x180180E84 (-IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008C5C4 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

char __fastcall IsDXGIColorSpaceHDR(enum DXGI_COLOR_SPACE_TYPE a1)
{
  bool v1; // al
  char v2; // cl

  if ( a1 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    return 1;
  v1 = IsDXGIColorSpaceRec2020(a1);
  v2 = 0;
  if ( v1 )
    return 1;
  return v2;
}
