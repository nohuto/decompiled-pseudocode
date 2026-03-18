/*
 * XREFs of ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18017BED0
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000EE68 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180008A60 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000EB24 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x18001028C (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180018ADC (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x180065CB0 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800E5B18 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180162818 (-DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x18016577C (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?InitializeShadowEffect@CTreeEffectLayer@@IEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017BC54 (-InitializeShadowEffect@CTreeEffectLayer@@IEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x1801E23B8 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderShadow(
        CTreeEffectLayer *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        float a5,
        struct CDrawingContext *a6,
        struct CDropShadow *a7,
        struct IRenderTargetBitmap *a8)
{
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // esi
  int v21; // eax
  CTreeEffectLayer *v22; // rcx
  __int64 *v23; // r12
  float v24; // xmm10_4
  __int64 v25; // rdi
  CTreeEffectLayer *v26; // rcx
  float v27; // xmm6_4
  __m128 v28; // xmm1
  float v29; // xmm7_4
  struct ID2D1Effect *v30; // rdi
  float v31; // xmm9_4
  __m128 v32; // xmm2
  float v33; // xmm9_4
  __int64 v34; // rbx
  ID2D1Effect *v35; // rbx
  __int128 v36; // xmm0
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  FLOAT v41; // eax
  CLayerVisual *v42; // rcx
  struct D2D_VECTOR_3F *v43; // rax
  __int64 v44; // xmm0_8
  float v45; // xmm2_4
  float x; // xmm12_4
  float v47; // xmm3_4
  float y; // xmm11_4
  CComposition *v49; // rcx
  float v50; // xmm13_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  __int64 v54; // r9
  __int64 v55; // rcx
  float v56; // xmm4_4
  float v57; // xmm5_4
  __int64 TopByReference; // rax
  float v59; // xmm1_4
  struct ID2D1Effect *v60; // r8
  FLOAT v61; // xmm10_4
  __int64 v62; // rax
  __int64 (__fastcall *v63)(__int64 *, __int64, struct D2D_VECTOR_3F *); // rax
  __m128 v64; // xmm1
  __m128 v65; // xmm2
  __int64 v66; // rdi
  struct ID2D1Effect *v67; // rdi
  CTreeEffectLayer *v68; // rcx
  unsigned int v69; // [rsp+28h] [rbp-E0h]
  bool v70[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_3F v71; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v74; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Effect *v75; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Effect *v76; // [rsp+70h] [rbp-98h] BYREF
  ID2D1Effect *v77; // [rsp+78h] [rbp-90h] BYREF
  __int128 v78; // [rsp+88h] [rbp-80h] BYREF
  __int128 v79; // [rsp+98h] [rbp-70h]
  __int128 v80; // [rsp+A8h] [rbp-60h]
  __int128 v81; // [rsp+B8h] [rbp-50h]
  __int16 v82; // [rsp+C8h] [rbp-40h]
  _OWORD v83[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v84; // [rsp+118h] [rbp+10h]
  struct D2D_MATRIX_3X2_F v85; // [rsp+128h] [rbp+20h] BYREF
  float v86; // [rsp+140h] [rbp+38h] BYREF
  float v87; // [rsp+144h] [rbp+3Ch]
  float v88; // [rsp+148h] [rbp+40h]
  float v89; // [rsp+14Ch] [rbp+44h]
  struct D2D_MATRIX_3X2_F v90; // [rsp+150h] [rbp+48h] BYREF
  __int128 v91; // [rsp+168h] [rbp+60h] BYREF

  if ( !a8 )
    return 0LL;
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, _QWORD, unsigned __int64))(*(_QWORD *)a8 + 216LL))(
      a8,
      *((_QWORD *)a6 + 48),
      ((unsigned __int64)a6 + 8) & -(__int64)(a6 != 0LL));
  *(_OWORD *)&v90.m11 = _xmm;
  v78 = _xmm;
  *(_QWORD *)&v90.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v79 = _xmm;
  v83[0] = _xmm;
  v10 = (float)*((int *)this + 5);
  v72 = 0LL;
  v77 = 0LL;
  v76 = 0LL;
  v75 = 0LL;
  v83[1] = _xmm;
  v11 = *((float *)this + 55);
  v80 = _xmm;
  v83[2] = _xmm;
  v12 = *((float *)this + 56) - v10;
  v81 = _xmm;
  v13 = (float)*((int *)this + 4);
  v82 = 32085;
  v84 = 32085;
  v70[0] = 0;
  v91 = 0uLL;
  v87 = v12;
  v14 = v11 - v13;
  v83[3] = _xmm;
  v15 = (float)*((int *)this + 6);
  v73 = 0LL;
  v74 = 0LL;
  v86 = v14;
  v16 = (float)(v15 / *((float *)this + 68)) + v14;
  v17 = (float)*((int *)this + 7);
  v88 = v16;
  v89 = (float)(v17 / *((float *)this + 69)) + v12;
  v18 = CDrawingContext::PushGpuClipRectInternal((__int64)a6, 0LL, (float *)this + 64, 1, 0);
  v20 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3F3u);
    goto LABEL_52;
  }
  v21 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *))(*(_QWORD *)a8 + 72LL))(a8, &v74);
  v20 = v21;
  if ( v21 < 0 )
  {
    v69 = 1014;
    goto LABEL_49;
  }
  v23 = (__int64 *)*((_QWORD *)a6 + 48);
  v24 = *((float *)a7 + 22);
  if ( !CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 31)) )
    CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
      (CTreeEffectLayer *)((char *)this + 120),
      (struct CMILMatrix *)&v78,
      (struct CMILMatrix *)v83,
      v70);
  v21 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*v23 + 256))(v23, &CLSID_D2D12DAffineTransform, &v72);
  v20 = v21;
  if ( v21 < 0 )
  {
    v69 = 1034;
    goto LABEL_49;
  }
  v25 = v72;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v72 + 104) + 8LL))(*(_QWORD *)(v72 + 104));
  v27 = *(float *)&v78;
  v28 = 0LL;
  v29 = *((float *)&v79 + 1);
  *(_QWORD *)&v85.m[0][1] = 0LL;
  v30 = *(struct ID2D1Effect **)(v25 + 104);
  v76 = v30;
  if ( *(float *)&v78 <= *((float *)&v79 + 1) )
  {
    v85.m11 = 1.0;
    v32 = 0LL;
    v31 = *(float *)&v78;
    v85.m22 = *(float *)&v78 / *((float *)&v79 + 1);
    v32.m128_f32[0] = 0.0 - (float)((float)(*(float *)&v78 / *((float *)&v79 + 1)) * 0.0);
    v28.m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, v32).m128_u64[0];
  }
  else
  {
    v85.m22 = 1.0;
    v31 = *((float *)&v79 + 1);
    v85.m11 = *((float *)&v79 + 1) / *(float *)&v78;
    v28.m128_f32[0] = 0.0 - (float)((float)(*((float *)&v79 + 1) / *(float *)&v78) * 0.0);
    v28.m128_u64[0] = _mm_unpacklo_ps(v28, (__m128)0LL).m128_u64[0];
  }
  v33 = v31 * v24;
  *(_OWORD *)&v90.m11 = *(_OWORD *)&v85.m11;
  *(_QWORD *)&v90.m[2][0] = v28.m128_u64[0];
  v21 = CTreeEffectLayer::InitializeShadowEffect(v26, v30, &v90);
  v20 = v21;
  if ( v21 < 0 )
  {
    v69 = 1051;
    goto LABEL_49;
  }
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v30 + 112LL))(v30, 0LL, v74, 1LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v72);
  v21 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*v23 + 256))(v23, &CLSID_D2D1Shadow, &v72);
  v20 = v21;
  if ( v21 < 0 )
  {
    v69 = 1055;
    goto LABEL_49;
  }
  v34 = v72;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v72 + 104) + 8LL))(*(_QWORD *)(v72 + 104));
  v35 = *(ID2D1Effect **)(v34 + 104);
  v36 = *(_OWORD *)((char *)a7 + 72);
  v77 = v35;
  v91 = v36;
  v71.x = v33 / 3.0;
  v37 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct D2D_VECTOR_3F *, int))(*(_QWORD *)v35 + 72LL))(
          v35,
          0LL,
          0LL,
          &v71,
          4);
  v20 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x424u);
  }
  else
  {
    v39 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v35 + 72LL))(
            v35,
            1LL,
            0LL,
            &v91,
            16);
    v20 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x425u);
    }
    else
    {
      v71.x = 0.0;
      v21 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct D2D_VECTOR_3F *, int))(*(_QWORD *)v35 + 72LL))(
              v35,
              2LL,
              0LL,
              &v71,
              4);
      v20 = v21;
      if ( v21 < 0 )
      {
        v69 = 1062;
        goto LABEL_49;
      }
      v41 = *((float *)a7 + 26);
      v42 = (CLayerVisual *)*((_QWORD *)this + 31);
      *(_QWORD *)&v71.x = *((_QWORD *)a7 + 12);
      v71.z = v41;
      if ( !CLayerVisual::GetFlatteningToLocalSpace(v42) )
      {
        v43 = CMILMatrix::Transform3DVector(
                (CTreeEffectLayer *)((char *)this + 120),
                (struct D2D_VECTOR_3F *)&v85,
                &v71);
        v44 = *(_QWORD *)&v43->x;
        *(FLOAT *)&v43 = v43->z;
        *(_QWORD *)&v71.x = v44;
        LODWORD(v71.z) = (_DWORD)v43;
      }
      v45 = v88 + v33;
      x = v71.x;
      v47 = v89 + v33;
      y = v71.y;
      v49 = (CComposition *)*((_QWORD *)a6 + 4);
      v50 = (float)*((int *)this + 4);
      v88 = v88 + v33;
      v51 = (float)(v71.x + v86) - v33;
      v86 = v86 - v33;
      v89 = v89 + v33;
      v52 = (float)(v71.y + v87) - v33;
      v87 = v87 - v33;
      *(float *)&v73 = v51 + v50;
      v53 = (float)*((int *)this + 5);
      *((float *)&v73 + 1) = v52 + v53;
      if ( *((_DWORD *)v49 + 272) )
      {
        if ( !CComposition::IsOverdrawHeatMapEnabled(v49) )
          goto LABEL_50;
        if ( (*(_BYTE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v54) + 20) & 9) == 0 )
          goto LABEL_50;
        v85.m12 = (float)(v57 + y) + v53;
        v85.m22 = (float)(v47 - v57) + v85.m12;
        v85.m11 = (float)(v56 + x) + v50;
        v85.m21 = (float)(v45 - v56) + v85.m11;
        TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v55);
        v21 = CDrawingContext::DrawColorRectangleAsDrawList(a6, (__int128 *)(TopByReference + 4), (__int64)&v85);
        v20 = v21;
        if ( v21 >= 0 )
          goto LABEL_50;
        v69 = 1097;
        goto LABEL_49;
      }
      v59 = *((float *)this + 68);
      if ( v59 < 0.99999881 || *((float *)this + 69) < 0.99999881 )
      {
        *(_QWORD *)&v85.m[0][1] = 0LL;
        v61 = 1.0 / *((float *)this + 69);
        v62 = *v23;
        *(_QWORD *)&v71.x = 0LL;
        v63 = *(__int64 (__fastcall **)(__int64 *, __int64, struct D2D_VECTOR_3F *))(v62 + 224);
        v85.m22 = v61;
        v85.m11 = 1.0 / v59;
        *(_QWORD *)&v85.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        v21 = v63(v23, 7LL, &v71);
        v20 = v21;
        if ( v21 < 0 )
        {
          v69 = 1115;
          goto LABEL_49;
        }
        v21 = CTreeEffectLayer::InitializeShadowEffect(v22, *(struct ID2D1Effect **)&v71.x, &v85);
        v20 = v21;
        if ( v21 < 0 )
        {
          v69 = 1117;
          goto LABEL_49;
        }
        ID2D1Effect::SetInputEffect(*(ID2D1Effect **)&v71.x, 0, v30);
        v60 = *(struct ID2D1Effect **)&v71.x;
      }
      else
      {
        v60 = v30;
      }
      ID2D1Effect::SetInputEffect(v35, 0, v60);
      *(_QWORD *)&v85.m[0][1] = 0LL;
      v64 = 0LL;
      if ( v27 <= v29 )
      {
        v85.m11 = 1.0;
        v65 = 0LL;
        v85.m22 = v29 / v27;
        v65.m128_f32[0] = 0.0 - (float)((float)(v29 / v27) * 0.0);
        v64.m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, v65).m128_u64[0];
      }
      else
      {
        v85.m22 = 1.0;
        v85.m11 = v27 / v29;
        v64.m128_f32[0] = 0.0 - (float)((float)(v27 / v29) * 0.0);
        v64.m128_u64[0] = _mm_unpacklo_ps(v64, (__m128)0LL).m128_u64[0];
      }
      *(_QWORD *)&v90.m[2][0] = v64.m128_u64[0];
      *(_OWORD *)&v90.m11 = *(_OWORD *)&v85.m11;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v72);
      v21 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*v23 + 256))(
              v23,
              &CLSID_D2D12DAffineTransform,
              &v72);
      v20 = v21;
      if ( v21 < 0 )
      {
        v69 = 1140;
        goto LABEL_49;
      }
      v66 = v72;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v72 + 104) + 8LL))(*(_QWORD *)(v72 + 104));
      v67 = *(struct ID2D1Effect **)(v66 + 104);
      v75 = v67;
      v21 = CTreeEffectLayer::InitializeShadowEffect(v68, v67, &v90);
      v20 = v21;
      if ( v21 < 0 )
      {
        v69 = 1143;
        goto LABEL_49;
      }
      ID2D1Effect::SetInputEffect(v67, 0, v35);
      v21 = CDrawingContext::FillEffect(a6, (__int64)v35, (__int64)&v86, (__int64)&v73, 0);
      v20 = v21;
      if ( v21 < 0 )
      {
        v69 = 1153;
LABEL_49:
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v22, 0LL, 0, v21, v69);
      }
    }
  }
LABEL_50:
  CDrawingContext::PopGpuClipRectInternal(a6, 0);
LABEL_52:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v74);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v75);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v76);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v77);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v72);
  return v20;
}
