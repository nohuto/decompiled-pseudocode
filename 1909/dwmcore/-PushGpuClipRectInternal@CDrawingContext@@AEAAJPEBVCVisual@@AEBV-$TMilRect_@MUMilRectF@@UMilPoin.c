/*
 * XREFs of ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800910F0
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000D240 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18003FA3C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004FCC0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800611C0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x1800CDC24 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18017C3E4 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017CF98 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A7C04 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801AA4EC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x180014E90 (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014F74 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18001600C (-HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180050F9C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18005CF68 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005CFDC (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800F0187 (ceilf_0.c)
 */

__int64 __fastcall CDrawingContext::PushGpuClipRectInternal(__int64 a1, __int64 a2, float *a3, int a4, char a5)
{
  char v8; // r12
  float v9; // xmm6_4
  float v10; // xmm6_4
  int v11; // ebx
  int v12; // eax
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm11_4
  int v17; // eax
  float v18; // xmm0_4
  float v19; // xmm8_4
  float v20; // xmm0_4
  signed int v21; // eax
  __int64 v22; // rcx
  signed int v23; // ebx
  __int64 v24; // rcx
  signed int v26; // eax
  __int64 v27; // rcx
  signed int v28; // eax
  __int64 v29; // rcx
  __int128 v30; // [rsp+38h] [rbp-41h] BYREF

  v8 = 0;
  if ( a2 )
  {
    *((_QWORD *)&v30 + 1) = a2;
    LODWORD(v30) = 1;
    v26 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((unsigned int *)(a1 + 448), &v30);
    v23 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x1037u, 0LL);
      goto LABEL_21;
    }
    v8 = 1;
  }
  if ( !a5 && CScopedClipStack::HasGpuClipsInScope((CScopedClipStack *)(a1 + 1008)) )
  {
    if ( a4 == 1 )
      RoundWithHalvesDown(a3, (float *)&v30);
    else
      v30 = *(_OWORD *)a3;
    v28 = CBaseClipStack::Push((CBaseClipStack *)(a1 + 3232), (const struct MilRectF *)&v30);
    v23 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x11Au, 0LL);
      goto LABEL_19;
    }
LABEL_18:
    v24 = 10LL * (unsigned int)(*(_DWORD *)(a1 + 1032) - 1);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 1008) + 8 * v24);
    goto LABEL_19;
  }
  v9 = *a3;
  if ( a4 == 1 )
  {
    v10 = v9 - 0.5;
    v11 = 0x7FFFFFFF;
    if ( v10 < -2147483600.0 )
    {
      v12 = 0x80000000;
    }
    else if ( v10 >= 2147483600.0 )
    {
      v12 = 0x7FFFFFFF;
    }
    else
    {
      v12 = (int)ceilf_0(v10);
    }
    v13 = a3[1] - 0.5;
    v9 = (float)v12;
    if ( v13 < -2147483600.0 )
    {
      v14 = 0x80000000;
    }
    else if ( v13 >= 2147483600.0 )
    {
      v14 = 0x7FFFFFFF;
    }
    else
    {
      v14 = (int)ceilf_0(v13);
    }
    v15 = a3[2] - 0.5;
    v16 = (float)v14;
    if ( v15 < -2147483600.0 )
    {
      v17 = 0x80000000;
    }
    else if ( v15 >= 2147483600.0 )
    {
      v17 = 0x7FFFFFFF;
    }
    else
    {
      v17 = (int)ceilf_0(v15);
    }
    v18 = a3[3] - 0.5;
    v19 = (float)v17;
    if ( v18 < -2147483600.0 )
    {
      v11 = 0x80000000;
    }
    else if ( v18 < 2147483600.0 )
    {
      v11 = (int)ceilf_0(v18);
    }
    v20 = (float)v11;
  }
  else
  {
    v16 = a3[1];
    v19 = a3[2];
    v20 = a3[3];
  }
  *(_QWORD *)&v30 = __PAIR64__(LODWORD(v16), LODWORD(v9));
  *((_QWORD *)&v30 + 1) = __PAIR64__(LODWORD(v20), LODWORD(v19));
  v21 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
          (unsigned int *)(a1 + 3232),
          &v30);
  v23 = v21;
  if ( v21 >= 0 )
    goto LABEL_18;
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x116u, 0LL);
LABEL_19:
  if ( v23 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x103Eu, 0LL);
  else
    *(_BYTE *)(a1 + 6345) = 1;
LABEL_21:
  if ( v23 < 0 && v8 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)(a1 + 448), 0LL);
  return (unsigned int)v23;
}
