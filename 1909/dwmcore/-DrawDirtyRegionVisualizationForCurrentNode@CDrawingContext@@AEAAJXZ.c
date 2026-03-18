/*
 * XREFs of ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18016BAF0
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005D0C0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18002431C (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180028BD0 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18003D0E0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?front@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAAEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@2@XZ @ 0x1800EB6E8 (-front@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$c.c)
 *     ceilf_0 @ 0x1800F0187 (ceilf_0.c)
 *     floorf_0 @ 0x1800F019F (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18016A880 (--0-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??A?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAAEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@1@_K@Z @ 0x18016A9A4 (--A-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$com_p.c)
 *     ?DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016B9C4 (-DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@XZ @ 0x18016E3BC (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ?_Tidy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAXXZ @ 0x1801704BC (-_Tidy@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAXXZ.c)
 *     ?pop_front@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1801704F8 (-pop_front@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x180175B08 (-CurrentRedrawRegionColor@CComposition@@QEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801C0DE8 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
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
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  CComposition *v13; // rax
  CComposition *v14; // r9
  unsigned int v15; // esi
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 i; // rsi
  __int64 v19; // r9
  unsigned int v20; // r15d
  __int64 v21; // r10
  __int64 v22; // r10
  __int64 v23; // rax
  unsigned int v24; // r12d
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  signed int v27; // eax
  __int64 v28; // rcx
  _QWORD v30[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v31; // [rsp+48h] [rbp-C0h]
  int v32; // [rsp+4Ch] [rbp-BCh]
  _QWORD v33[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34[4]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v35[64]; // [rsp+88h] [rbp-80h] BYREF
  int v36; // [rsp+C8h] [rbp-40h]
  __int128 v37; // [rsp+D8h] [rbp-30h] BYREF
  float X; // [rsp+E8h] [rbp-20h] BYREF
  float v39; // [rsp+ECh] [rbp-1Ch]
  float v40; // [rsp+F0h] [rbp-18h]
  float v41; // [rsp+F4h] [rbp-14h]

  CComposition::CurrentRedrawRegionColor(this[4], (struct _D3DCOLORVALUE *)&v33[1]);
  v31 = 0;
  v32 = 0;
  LODWORD(v33[0]) = 0;
  *(_OWORD *)&v30[1] = 0LL;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
  CDrawingContext::CalcClippedNodeWorldSpaceBounds((__int64)this, (__int64)CurrentVisual, &v37);
  v36 = 0;
  CMILMatrix::SetToInverse((CMILMatrix *)v35, (const struct CMILMatrix *)(this + 758));
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v35, (__int64)&v37, &X);
  v3 = X;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(X) & _xmm);
  if ( v4 < 8388608.0 )
    v3 = (float)(int)floorf_0(X);
  X = v3;
  v5 = v39;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v39) & _xmm);
  if ( v6 < 8388608.0 )
    v5 = (float)(int)floorf_0(v39);
  v7 = v40;
  v39 = v5;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v40) & _xmm);
  if ( v8 < 8388608.0 )
    v7 = (float)(int)ceilf_0(v40);
  v9 = v41;
  v40 = v7;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v41) & _xmm) < 8388608.0 )
    v9 = (float)(int)ceilf_0(v41);
  v41 = v9;
  v10 = CDrawingContext::PushTransformInternal(
          (CDrawingContext *)this,
          0LL,
          (const struct CMILMatrix *)(this + 758),
          0LL,
          0);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x23FAu, 0LL);
    goto LABEL_40;
  }
  v13 = this[47];
  if ( !v13 )
    goto LABEL_37;
  if ( (*((_BYTE *)CurrentVisual + 93) & 0x10) != 0 )
    v14 = this[784];
  else
    v14 = 0LL;
  (*(void (__fastcall **)(CComposition *, float *, CComposition *, CComposition *, _QWORD *))(*(_QWORD *)v13 + 320LL))(
    v13,
    &X,
    this[757],
    v14,
    &v30[1]);
  if ( (*((_BYTE *)CurrentVisual + 93) & 0x10) == 0 )
  {
    v15 = 0;
    if ( LODWORD(v33[0]) )
    {
      while ( 1 )
      {
        v37 = *(_OWORD *)(v30[1] + 16LL * v15);
        v16 = CDrawingContext::DrawColorRectangleAsDrawList((CDrawingContext *)this, (__int128 *)&v33[1], (__int64)&v37);
        v12 = v16;
        if ( v16 < 0 )
          break;
        if ( ++v15 >= LODWORD(v33[0]) )
          goto LABEL_37;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2408u, 0LL);
    }
    goto LABEL_37;
  }
  if ( LODWORD(v33[0]) )
    CVisual::AppendDirtyRegionVisualizationRects(CurrentVisual, &v30[1]);
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
                   + 540LL) & 1) != 0 )
      break;
  }
  v20 = 0;
  if ( !v19 )
  {
LABEL_36:
    *((_BYTE *)this[4] + 1276) = 1;
    goto LABEL_37;
  }
  v21 = 0LL;
  while ( 1 )
  {
    *(__m128i *)&v33[1] = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::operator[](
                                                                          i,
                                                                          v21)
                                                                      + 24)
                                                          + 80LL));
    if ( _mm_shuffle_ps(*(__m128 *)&v33[1], *(__m128 *)&v33[1], 255).m128_f32[0] > 0.0 )
      break;
LABEL_35:
    v21 = ++v20;
    if ( (unsigned __int64)v20 >= *(_QWORD *)(i + 32) )
      goto LABEL_36;
  }
  v23 = std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::operator[](
          i,
          v22);
  std::vector<MilRectF>::vector<MilRectF>(v34, v23);
  v24 = 0;
  v25 = (v34[1] - v34[0]) >> 4;
  if ( !v25 )
  {
LABEL_34:
    std::vector<MilRectF>::_Tidy(v34);
    goto LABEL_35;
  }
  v26 = 0LL;
  while ( 1 )
  {
    v37 = *(_OWORD *)(v34[0] + 16 * v26);
    v27 = CDrawingContext::DrawColorRectangleAsDrawList((CDrawingContext *)this, (__int128 *)&v33[1], (__int64)&v37);
    v12 = v27;
    if ( v27 < 0 )
      break;
    v26 = ++v24;
    if ( v24 >= v25 )
      goto LABEL_34;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x242Cu, 0LL);
  std::vector<MilRectF>::_Tidy(v34);
LABEL_37:
  CDrawingContext::PopTransformInternal((CDrawingContext *)this, 0);
LABEL_40:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v30[1]);
  return v12;
}
