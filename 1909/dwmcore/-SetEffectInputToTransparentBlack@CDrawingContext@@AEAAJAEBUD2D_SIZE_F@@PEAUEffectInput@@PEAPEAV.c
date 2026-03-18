/*
 * XREFs of ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x18016FD14
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180011614 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x1800367E0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18016E5C0 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 */

__int64 __fastcall CDrawingContext::SetEffectInputToTransparentBlack(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3,
        struct IImageSource **a4)
{
  signed int StockTransparentImageNoRef; // eax
  unsigned int v8; // edi
  struct IImageSource *v9; // rbx
  struct IImageSource *v11; // [rsp+30h] [rbp-18h] BYREF

  StockTransparentImageNoRef = CDrawingContext::GetStockTransparentImageNoRef(this, &v11);
  v8 = StockTransparentImageNoRef;
  if ( StockTransparentImageNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, StockTransparentImageNoRef, 0xB61u, 0LL);
  }
  else
  {
    *(_OWORD *)((char *)a3 + 24) = 0LL;
    *((_BYTE *)a3 + 45) = 1;
    *((_QWORD *)a3 + 6) = 1065353216LL;
    *((_QWORD *)a3 + 8) = 1065353216LL;
    *((_DWORD *)a3 + 20) = 1065353216;
    *((_QWORD *)a3 + 7) = 0LL;
    *((_QWORD *)a3 + 9) = 0LL;
    *((float *)a3 + 12) = 1.0 / a2->width;
    *((float *)a3 + 16) = 1.0 / a2->height;
    *(_OWORD *)((char *)a3 + 84) = _xmm;
    v9 = v11;
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v11 + 8LL))(v11);
    *a4 = v9;
  }
  return v8;
}
