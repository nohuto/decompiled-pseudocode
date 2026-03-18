/*
 * XREFs of ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801B084C
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180073D6C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180259FD4 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180052140 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18016FCA0 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 */

__int64 __fastcall CDrawListBitmap::SetTransparent(struct IImageSource **this, struct CDrawingContext *a2)
{
  signed int StockTransparentImageNoRef; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  struct IImageSource *v10; // [rsp+50h] [rbp+18h] BYREF

  StockTransparentImageNoRef = CDrawingContext::GetStockTransparentImageNoRef(a2, &v10);
  v6 = StockTransparentImageNoRef;
  if ( StockTransparentImageNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, StockTransparentImageNoRef, 0x3Cu, 0LL);
  }
  else
  {
    v7 = CDrawListBitmap::FromImageSource(this, v10, a2, 0);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3Du, 0LL);
  }
  return v6;
}
