/*
 * XREFs of ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180010DB8
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003B380 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180011038 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x180011404 (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800115C4 (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 *     ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011674 (-RoundOffLayerSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x180016590 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18002EC08 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180036B2C (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect_ea_180036B2C.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x1801619D0 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x18017C830 (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDrawingContext::PushEffectLayer(
        struct IRenderTarget **this,
        struct CVisual *a2,
        __int64 a3,
        double a4,
        __int64 a5,
        struct CFilterEffect *a6,
        char *a7)
{
  __m128 v7; // xmm2
  CFilterEffectLayer *v10; // r15
  struct CLayer *v11; // r14
  char v12; // r13
  _OWORD *v13; // rax
  float *v14; // r10
  float v15; // xmm6_4
  float v16; // xmm4_4
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ecx
  __m128i v23; // xmm0
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ebx
  __m128 v28; // rt1
  __m128 v29; // rt1
  int v30; // eax
  int v31; // r9d
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // [rsp+28h] [rbp-81h]
  float v41; // [rsp+48h] [rbp-61h]
  float v42; // [rsp+48h] [rbp-61h]
  struct CLayer *v43; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v44[4]; // [rsp+58h] [rbp-51h] BYREF
  CFilterEffectLayer *v45[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v46; // [rsp+78h] [rbp-31h]
  char *v47; // [rsp+80h] [rbp-29h]
  float v48[2]; // [rsp+88h] [rbp-21h] BYREF
  struct CVisual *v49; // [rsp+90h] [rbp-19h]

  v46 = a5;
  v10 = 0LL;
  v11 = 0LL;
  v47 = a7;
  v45[0] = 0LL;
  v43 = 0LL;
  v12 = 0;
  v13 = (_OWORD *)CTreeEffectLayer::RoundOffLayerSize(v48, a3);
  v15 = *v14;
  v16 = v14[1];
  v17.m128_f32[0] = v14[2] - *v14;
  *(_OWORD *)v44 = *v13;
  v18 = *(__m128 *)v44;
  LODWORD(v13) = (int)v17.m128_f32[0];
  v18.m128_f32[0] = (float)(int)v17.m128_f32[0];
  v18.m128_i32[0] = _mm_cmplt_ss(v18, v17).m128_u32[0];
  v17.m128_f32[0] = v14[3] - v16;
  v19 = (__m128)COERCE_UNSIGNED_INT((float)((int)v13 - v18.m128_i32[0]));
  LODWORD(v49) = v19.m128_i32[0];
  v19.m128_f32[0] = (float)(int)v17.m128_f32[0];
  *((float *)&v49 + 1) = (float)(int)((int)v17.m128_f32[0] - _mm_cmplt_ss(v19, v17).m128_u32[0]);
  if ( (LODWORD(v15) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)v15 - v15;
    v28.m128_f32[0] = FLOAT_N0_5;
    v20 = (int)v15 - _mm_cmple_ss(v7, v28).m128_u32[0];
  }
  else
  {
    v41 = v15 + 6291456.25;
    v20 = (int)(LODWORD(v41) << 10) >> 11;
  }
  v48[0] = (float)v20;
  if ( (LODWORD(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a4 = (float)(int)v16 - v16;
    v29.m128_f32[0] = FLOAT_N0_5;
    v21 = (int)v16 - _mm_cmple_ss(*(__m128 *)&a4, v29).m128_u32[0];
  }
  else
  {
    v42 = v16 + 6291456.25;
    v21 = (int)(LODWORD(v42) << 10) >> 11;
  }
  v48[1] = (float)v21;
  if ( (int)v44[2] <= 0 || (int)v44[3] <= 0 )
  {
    LODWORD(v48[0]) = 6;
    v49 = a2;
    v12 = 1;
    v38 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
            this + 56,
            v48);
    v26 = v38;
    if ( v38 >= 0 )
      goto LABEL_14;
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x14BBu);
    goto LABEL_38;
  }
  if ( !a6 )
    goto LABEL_10;
  if ( (*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 48LL))(a6, 54LL) )
  {
    if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, v44[2], v44[3]) )
    {
      LODWORD(v48[0]) = 6;
      v49 = a2;
      v30 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
              this + 56,
              v48);
      v26 = v30;
      if ( v30 >= 0 )
        goto LABEL_14;
      v40 = 5316;
      goto LABEL_23;
    }
    v32 = CFilterEffectLayer::Create(
            this[44],
            (const struct MilPointAndSizeL *)v44,
            a6,
            a2,
            (const struct MilPointAndSizeF *)v48,
            v45);
    v26 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x14CFu);
      v10 = v45[0];
    }
    else
    {
      v10 = v45[0];
      v34 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v45[0], 1, 1);
      v26 = v34;
      if ( v34 >= 0 )
        goto LABEL_14;
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x14D5u);
    }
LABEL_38:
    if ( !v10 )
      return v26;
    CFilterEffectLayer::`vector deleting destructor'(v10, 1u);
    goto LABEL_15;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 48LL))(a6, 50LL) )
  {
    v26 = -2147024809;
    v40 = 5383;
    v31 = -2147024809;
    goto LABEL_25;
  }
LABEL_10:
  v23 = _mm_srli_si128(*(__m128i *)CTreeEffectLayer::GetLayerPointAndSize(v45, a6, v44, v48), 8);
  if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, _mm_cvtsi128_si32(v23), v23.m128i_u32[1]) )
  {
    LODWORD(v48[0]) = 6;
    v49 = a2;
    v30 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
            this + 56,
            v48);
    v26 = v30;
    if ( v30 >= 0 )
      goto LABEL_14;
    v40 = 5349;
LABEL_23:
    v31 = v30;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v31, v40);
    return v26;
  }
  if ( (int)CTreeEffectLayer::Create(this[44], v44, a6, a2, v48, v46, &v43) < 0 )
  {
    LODWORD(v48[0]) = 6;
    v49 = a2;
    v36 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
            this + 56,
            v48);
    v26 = v36;
    if ( v36 >= 0 )
    {
      v11 = v43;
      v26 = 0;
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x14F4u);
    v11 = v43;
  }
  else
  {
    v11 = v43;
    v24 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v43, 1, 1);
    v26 = v24;
    if ( v24 >= 0 )
    {
      v11 = 0LL;
LABEL_14:
      *v47 = v12;
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x14FDu);
  }
LABEL_15:
  if ( v11 )
    CTreeEffectLayer::`vector deleting destructor'(v11, 1u);
  return v26;
}
