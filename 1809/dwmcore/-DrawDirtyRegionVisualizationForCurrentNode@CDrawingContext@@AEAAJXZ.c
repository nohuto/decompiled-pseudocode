/*
 * XREFs of ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180162930
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180032BF0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18008DDA4 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800D95D4 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?front@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAAEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@2@XZ @ 0x1800EE4A0 (-front@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$c.c)
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 *     floorf_0 @ 0x1800F000F (floorf_0.c)
 *     ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x18014B328 (-CurrentRedrawRegionColor@CComposition@@QEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18015AE14 (-GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusio.c)
 *     ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801617A0 (--0-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??A?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAAEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@1@_K@Z @ 0x1801618C4 (--A-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$com_p.c)
 *     ?DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180162818 (-DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@XZ @ 0x180165610 (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ?_Tidy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAXXZ @ 0x1801676C4 (-_Tidy@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAXXZ.c)
 *     ?pop_front@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x180167700 (-pop_front@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801B60FC (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode(CComposition **this)
{
  struct CVisual *CurrentVisual; // rsi
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  CComposition *v14; // r9
  unsigned int v15; // r14d
  unsigned int v16; // esi
  float *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 i; // rsi
  __int64 v21; // r9
  unsigned int v22; // r15d
  __int64 v23; // r10
  __int64 v24; // r10
  __int64 v25; // rax
  unsigned int v26; // r12d
  unsigned __int64 v27; // r14
  __int64 v28; // rax
  float *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  _QWORD v33[3]; // [rsp+30h] [rbp-91h] BYREF
  int v34; // [rsp+48h] [rbp-79h]
  int v35; // [rsp+4Ch] [rbp-75h]
  unsigned int v36; // [rsp+50h] [rbp-71h]
  _D3DCOLORVALUE v37; // [rsp+58h] [rbp-69h] BYREF
  __m128 v38[4]; // [rsp+68h] [rbp-59h] BYREF
  int v39; // [rsp+A8h] [rbp-19h]
  float X; // [rsp+B8h] [rbp-9h] BYREF
  float v41; // [rsp+BCh] [rbp-5h]
  float v42; // [rsp+C0h] [rbp-1h]
  float v43; // [rsp+C4h] [rbp+3h]
  __m128 v44; // [rsp+C8h] [rbp+7h] BYREF

  CComposition::CurrentRedrawRegionColor(this[4], &v37);
  v34 = 0;
  v35 = 0;
  v36 = 0;
  *(_OWORD *)&v33[1] = 0LL;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
  CDrawingContext::CalcClippedNodeWorldSpaceBounds((__int64)this, (__int64)CurrentVisual, &v44);
  v39 = 0;
  CMILMatrix::SetToInverse(v38, (const struct CMILMatrix *)(this + 758));
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v38, (__int64)&v44, &X);
  v3 = X;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(X) & _xmm);
  if ( v4 < 8388608.0 )
    v3 = (float)(int)floorf_0(X);
  X = v3;
  v5 = v41;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v41) & _xmm);
  if ( v6 < 8388608.0 )
    v5 = (float)(int)floorf_0(v41);
  v7 = v42;
  v41 = v5;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v42) & _xmm);
  if ( v8 < 8388608.0 )
    v7 = (float)(int)ceilf_0(v42);
  v9 = v43;
  v42 = v7;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v43) & _xmm) < 8388608.0 )
    v9 = (float)(int)ceilf_0(v43);
  v43 = v9;
  v10 = CDrawingContext::PushTransformInternal(
          (CDrawingContext *)this,
          0LL,
          (const struct CMILMatrix *)(this + 758),
          0,
          0);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x25E4u);
    goto LABEL_40;
  }
  v13 = (__int64)this[47];
  if ( !v13 )
    goto LABEL_37;
  if ( (*((_BYTE *)CurrentVisual + 93) & 0x10) != 0 )
    v14 = this[784];
  else
    LODWORD(v14) = 0;
  CHwndRenderTarget::GetIntersectingRedrawRects(v13, (int)&X, (int)this[757], (int)v14, (__int64)&v33[1]);
  if ( (*((_BYTE *)CurrentVisual + 93) & 0x10) == 0 )
  {
    v15 = v36;
    v16 = 0;
    if ( v36 )
    {
      while ( 1 )
      {
        v17 = (float *)(v33[1] + 16LL * v16);
        X = *v17;
        v41 = v17[1];
        v42 = v17[2];
        v43 = v17[3];
        v18 = CDrawingContext::DrawColorRectangleAsDrawList((CDrawingContext *)this, (__int128 *)&v37, (__int64)&X);
        v12 = v18;
        if ( v18 < 0 )
          break;
        if ( ++v16 >= v15 )
          goto LABEL_37;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x25F2u);
    }
    goto LABEL_37;
  }
  if ( v36 )
    CVisual::AppendDirtyRegionVisualizationRects(CurrentVisual, &v33[1]);
  if ( (**((_DWORD **)CurrentVisual + 28) & 0x40000) == 0 )
    goto LABEL_37;
  for ( i = CVisual::GetDirtyRegionVisualizationData(CurrentVisual);
        ;
        std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::pop_front(i) )
  {
    if ( !*(_QWORD *)(i + 32) )
      goto LABEL_37;
    if ( (*(_BYTE *)(*(_QWORD *)(std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::front((__int64 **)i)
                               + 32)
                   + 524LL) & 1) != 0 )
      break;
  }
  v22 = 0;
  if ( !v21 )
  {
LABEL_36:
    *((_BYTE *)this[4] + 1259) = 1;
    goto LABEL_37;
  }
  v23 = 0LL;
  while ( 1 )
  {
    *(_D3DCOLORVALUE *)&v37.r = (_D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::operator[](
                                                                                                i,
                                                                                                v23)
                                                                                            + 24)
                                                                                + 72LL));
    if ( _mm_shuffle_ps(*(__m128 *)&v37.r, *(__m128 *)&v37.r, 255).m128_f32[0] > 0.0 )
      break;
LABEL_35:
    v23 = ++v22;
    if ( (unsigned __int64)v22 >= *(_QWORD *)(i + 32) )
      goto LABEL_36;
  }
  v25 = std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::operator[](
          i,
          v24);
  std::vector<MilRectF>::vector<MilRectF>((__int64 *)&v44, v25);
  v26 = 0;
  v27 = (__int64)(v44.m128_u64[1] - v44.m128_u64[0]) >> 4;
  if ( !v27 )
  {
LABEL_34:
    std::vector<MilRectF>::_Tidy(&v44);
    goto LABEL_35;
  }
  v28 = 0LL;
  while ( 1 )
  {
    v29 = (float *)(v44.m128_u64[0] + 16 * v28);
    X = *v29;
    v41 = v29[1];
    v42 = v29[2];
    v43 = v29[3];
    v30 = CDrawingContext::DrawColorRectangleAsDrawList((CDrawingContext *)this, (__int128 *)&v37, (__int64)&X);
    v12 = v30;
    if ( v30 < 0 )
      break;
    v28 = ++v26;
    if ( v26 >= v27 )
      goto LABEL_34;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x2616u);
  std::vector<MilRectF>::_Tidy(&v44);
LABEL_37:
  CDrawingContext::PopTransformInternal((CDrawingContext *)this, 0);
LABEL_40:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v33[1]);
  return v12;
}
