/*
 * XREFs of ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180051B48
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000CE08 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCRenderTargetImageSource@@MPEAPEAV5@@Z @ 0x1800101BC (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x180010530 (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180011164 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18005042C (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801AF5F4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180204BBC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIImageSource@@AEBUD2D_POINT_2F@@MPEAPEAVCRenderTargetImageSource@@@Z @ 0x180257360 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x1802576E4 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIImageSource@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x180257A10 (-GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D.c)
 * Callees:
 *     ??$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z @ 0x180028048 (--$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180038EDC (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x180051C74 (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECOffScreenRenderingLayer@@UEAAPEAXI@Z @ 0x1800CC5A0 (--_ECOffScreenRenderingLayer@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CDrawingContext::PushOffScreenRenderingLayer(
        struct IRenderTarget **this,
        const struct CResourceTag *a2,
        const struct D2D_SIZE_F *a3,
        bool a4,
        struct IRenderTargetBitmap **a5)
{
  __m128 v5; // xmm2
  float width; // xmm4_4
  int v8; // eax
  float height; // xmm3_4
  int v10; // eax
  __int64 *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  __m128 v18; // rt1
  _DWORD v19[4]; // [rsp+30h] [rbp-10h] BYREF
  __int128 v20; // [rsp+60h] [rbp+20h] BYREF

  width = a3->width;
  v19[0] = 0;
  v19[1] = 0;
  *(float *)&v20 = width;
  if ( (LODWORD(width) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)width - width;
    v5 = _mm_cmple_ss(v5, (__m128)LODWORD(FLOAT_N0_5));
    LODWORD(v20) = v5.m128_i32[0];
    v8 = (int)width - v5.m128_i32[0];
  }
  else
  {
    *(float *)&v20 = width + 6291456.25;
    v8 = (int)((_DWORD)v20 << 10) >> 11;
  }
  height = a3->height;
  v19[2] = v8;
  *(float *)&v20 = height;
  if ( (LODWORD(height) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)height - height;
    v18.m128_f32[0] = FLOAT_N0_5;
    v10 = (int)height - _mm_cmple_ss(v5, v18).m128_u32[0];
  }
  else
  {
    *(float *)&v20 = height + 6291456.25;
    v10 = (int)((_DWORD)v20 << 10) >> 11;
  }
  v11 = 0LL;
  v19[3] = v10;
  *(_QWORD *)&v20 = 0LL;
  if ( width <= 0.0 || height <= 0.0 )
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x7FFFFFFFu, 0LL, 0, -2147024809, 0x96Eu, 0LL);
  }
  else
  {
    v12 = COffScreenRenderingLayer::Create(
            a2,
            this[44],
            (const struct MilPointAndSizeL *)v19,
            a4,
            (struct COffScreenRenderingLayer **)&v20);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x96Au, 0LL);
      v11 = (__int64 *)v20;
    }
    else
    {
      v11 = (__int64 *)v20;
      v15 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, (struct CLayer *)v20, 1, 1);
      v14 = v15;
      if ( v15 >= 0 )
      {
        SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>(a5, v11[1]);
        return v14;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x972u, 0LL);
    }
  }
  if ( v11 )
    COffScreenRenderingLayer::`vector deleting destructor'((COffScreenRenderingLayer *)v11, 1u);
  return v14;
}
