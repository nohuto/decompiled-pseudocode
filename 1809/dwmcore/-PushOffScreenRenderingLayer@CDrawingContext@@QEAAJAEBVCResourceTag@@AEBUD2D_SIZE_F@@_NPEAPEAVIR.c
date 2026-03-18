/*
 * XREFs of ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC
 * Callers:
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180002F58 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCRenderTargetImageSource@@MPEAPEAV5@@Z @ 0x18000E870 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x18000EC1C (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000EE68 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800AA850 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180182BCC (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AD134 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z.c)
 *     ?GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801AD478 (-GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801AEC0C (-GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@@Z @ 0x1801C9140 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEA.c)
 *     ?GenerateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C949C (-GenerateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C9DD4 (-GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801D4D6C (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DA3E0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18002EC08 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x18002F92C (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@.c)
 *     ??_ECOffScreenRenderingLayer@@UEAAPEAXI@Z @ 0x180068460 (--_ECOffScreenRenderingLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
  COffScreenRenderingLayer *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  struct IRenderTargetBitmap *v17; // rcx
  __m128 v19; // rt1
  _DWORD v20[4]; // [rsp+30h] [rbp-10h] BYREF
  __int128 v21; // [rsp+60h] [rbp+20h] BYREF

  width = a3->width;
  v20[0] = 0;
  v20[1] = 0;
  *(float *)&v21 = width;
  if ( (LODWORD(width) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)width - width;
    v5 = _mm_cmple_ss(v5, (__m128)LODWORD(FLOAT_N0_5));
    LODWORD(v21) = v5.m128_i32[0];
    v8 = (int)width - v5.m128_i32[0];
  }
  else
  {
    *(float *)&v21 = width + 6291456.25;
    v8 = (int)((_DWORD)v21 << 10) >> 11;
  }
  height = a3->height;
  v20[2] = v8;
  *(float *)&v21 = height;
  if ( (LODWORD(height) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)height - height;
    v19.m128_f32[0] = FLOAT_N0_5;
    v10 = (int)height - _mm_cmple_ss(v5, v19).m128_u32[0];
  }
  else
  {
    *(float *)&v21 = height + 6291456.25;
    v10 = (int)((_DWORD)v21 << 10) >> 11;
  }
  v11 = 0LL;
  v20[3] = v10;
  *(_QWORD *)&v21 = 0LL;
  if ( width <= 0.0 || height <= 0.0 )
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x7FFFFFFFu, 0LL, 0, -2147024809, 0x931u);
  }
  else
  {
    v12 = COffScreenRenderingLayer::Create(
            a2,
            this[44],
            (const struct MilPointAndSizeL *)v20,
            a4,
            (struct COffScreenRenderingLayer **)&v21);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x92Du);
      v11 = (COffScreenRenderingLayer *)v21;
    }
    else
    {
      v11 = (COffScreenRenderingLayer *)v21;
      v15 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, (struct CLayer *)v21, 1, 1);
      v14 = v15;
      if ( v15 >= 0 )
      {
        v17 = (struct IRenderTargetBitmap *)*((_QWORD *)v11 + 1);
        *a5 = v17;
        if ( v17 )
          (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v17 + 8LL))(v17);
        return v14;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x935u);
    }
  }
  if ( v11 )
    COffScreenRenderingLayer::`vector deleting destructor'(v11, 1u);
  return v14;
}
