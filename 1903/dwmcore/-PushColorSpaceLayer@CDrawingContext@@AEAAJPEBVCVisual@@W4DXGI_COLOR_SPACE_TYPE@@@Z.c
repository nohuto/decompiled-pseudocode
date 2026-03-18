/*
 * XREFs of ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180170720
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18005AC60 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18007419C (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x18016C180 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18016CB0C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18017CD3C (-Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@P.c)
 */

__int64 __fastcall CDrawingContext::PushColorSpaceLayer(
        struct IRenderTarget **this,
        const struct CVisual *a2,
        __int64 a3,
        double a4)
{
  CColorSpaceLayer *v5; // rdi
  enum DXGI_COLOR_SPACE_TYPE v6; // ebp
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF
  CColorSpaceLayer *v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  v17 = 0LL;
  v6 = (int)a3;
  v8 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(
         (CDrawingContext *)this,
         (struct MilPointAndSizeL *)v16,
         a3,
         a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x13A9u, 0LL);
  }
  else
  {
    v11 = CColorSpaceLayer::Create(this[44], (const struct MilPointAndSizeL *)v16, v6, &v17);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x13AEu, 0LL);
      v5 = v17;
    }
    else
    {
      v5 = v17;
      v13 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v17, 1, 1);
      v10 = v13;
      if ( v13 >= 0 )
        return v10;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x13B6u, 0LL);
    }
  }
  if ( v5 )
    CColorSpaceLayer::`vector deleting destructor'(v5, 1);
  return v10;
}
