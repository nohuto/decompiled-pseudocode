/*
 * XREFs of ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@@Z @ 0x18017080C
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18004AC18 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18005AC60 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18007419C (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18016C1D0 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18016CB0C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@PEAPEAV1@@Z @ 0x18017D04C (-Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV-$TValueResource@U.c)
 */

__int64 __fastcall CDrawingContext::PushColorTransformLayer(
        CDrawingContext *this,
        struct CVisual *a2,
        __int64 a3,
        double a4)
{
  CColorTransformLayer *v5; // rdi
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF
  CColorTransformLayer *v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  v17 = 0LL;
  v8 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)v16, a3, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x13D5u, 0LL);
  }
  else
  {
    v11 = CColorTransformLayer::Create(*((_QWORD *)this + 44), v16, a3, &v17);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x13DAu, 0LL);
      v5 = v17;
    }
    else
    {
      v5 = v17;
      v13 = CDrawingContext::PushLayer(this, a2, v17, 1, 1);
      v10 = v13;
      if ( v13 >= 0 )
        return v10;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x13E2u, 0LL);
    }
  }
  if ( v5 )
    CColorTransformLayer::`vector deleting destructor'(v5, 1);
  return v10;
}
