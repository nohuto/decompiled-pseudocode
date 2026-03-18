/*
 * XREFs of ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000F2A4 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x1800320F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003B380 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005F950 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18015B2EC (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180177458 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18017BED0 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017CA1C (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x180014FE4 (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800150C8 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180016508 (-HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180032734 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180036B2C (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect_ea_180036B2C.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A728 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 */

__int64 __fastcall CDrawingContext::PushGpuClipRectInternal(__int64 a1, __int64 a2, float *a3, int a4, char a5)
{
  char v5; // r12
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
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // r8
  int v24; // ebx
  __int64 v25; // rcx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  __int128 v31; // [rsp+38h] [rbp-41h] BYREF

  v5 = 0;
  if ( a2 )
  {
    *((_QWORD *)&v31 + 1) = a2;
    LODWORD(v31) = 1;
    v27 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
            (unsigned int *)(a1 + 448),
            &v31);
    v24 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x10E1u);
      goto LABEL_21;
    }
    v5 = 1;
  }
  if ( !a5 && CScopedClipStack::HasGpuClipsInScope((CScopedClipStack *)(a1 + 1008)) )
  {
    if ( a4 == 1 )
      RoundWithHalvesDown(a3, (float *)&v31);
    else
      v31 = *(_OWORD *)a3;
    v29 = CBaseClipStack::Push((CBaseClipStack *)(a1 + 3232), (const struct MilRectF *)&v31);
    v24 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x11Au);
      goto LABEL_19;
    }
LABEL_18:
    v25 = 10LL * (unsigned int)(*(_DWORD *)(a1 + 1032) - 1);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 1008) + 8 * v25);
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
  *(_QWORD *)&v31 = __PAIR64__(LODWORD(v16), LODWORD(v9));
  *((_QWORD *)&v31 + 1) = __PAIR64__(LODWORD(v20), LODWORD(v19));
  v21 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
          (unsigned int *)(a1 + 3232),
          &v31);
  v24 = v21;
  if ( v21 >= 0 )
    goto LABEL_18;
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x116u);
LABEL_19:
  if ( v24 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x10E8u);
  else
    *(_BYTE *)(a1 + 6345) = 1;
LABEL_21:
  if ( v24 < 0 && v5 )
    CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
      a1 + 448,
      0LL,
      v23);
  return (unsigned int)v24;
}
