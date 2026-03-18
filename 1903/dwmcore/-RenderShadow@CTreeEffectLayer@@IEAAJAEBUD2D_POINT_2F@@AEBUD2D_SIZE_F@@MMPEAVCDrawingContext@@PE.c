/*
 * XREFs of ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18017DAE4
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180011DF8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x18000AF94 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000DB2C (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x1800130B8 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18003B9EC (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180057308 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x18008895C (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016D0A8 (-DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x18016FCD8 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180170084 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?InitializeShadowEffect@CTreeEffectLayer@@IEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017D83C (-InitializeShadowEffect@CTreeEffectLayer@@IEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x18021C890 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
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
  signed int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // esi
  signed int v21; // eax
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
  __int64 (__fastcall *v34)(__int64 *, GUID *, __int64 *); // rbx
  __int64 v35; // rbx
  ID2D1Effect *v36; // rbx
  __int128 v37; // xmm0
  signed int v38; // eax
  __int64 v39; // rcx
  signed int v40; // eax
  __int64 v41; // rcx
  FLOAT v42; // eax
  CLayerVisual *v43; // rcx
  struct D2D_VECTOR_3F *v44; // rax
  __int64 v45; // xmm0_8
  float v46; // xmm2_4
  float x; // xmm12_4
  float v48; // xmm3_4
  float y; // xmm11_4
  CComposition *v50; // rcx
  float v51; // xmm13_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm0_4
  __int64 v55; // r9
  __int64 v56; // rcx
  float v57; // xmm4_4
  float v58; // xmm5_4
  __int64 TopByReference; // rax
  float v60; // xmm1_4
  struct ID2D1Effect *v61; // r8
  FLOAT v62; // xmm10_4
  __int64 v63; // rax
  __int64 (__fastcall *v64)(__int64 *, __int64, struct D2D_VECTOR_3F *); // rax
  __m128 v65; // xmm1
  __m128 v66; // xmm2
  __int64 (__fastcall *v67)(__int64 *, GUID *, __int64 *); // rdi
  __int64 v68; // rdi
  struct ID2D1Effect *v69; // rdi
  CTreeEffectLayer *v70; // rcx
  unsigned int v71; // [rsp+28h] [rbp-E0h]
  bool v72[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_3F v73; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v75; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v76; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Effect *v77; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Effect *v78; // [rsp+70h] [rbp-98h] BYREF
  ID2D1Effect *v79; // [rsp+78h] [rbp-90h] BYREF
  __int128 v80; // [rsp+88h] [rbp-80h] BYREF
  __int128 v81; // [rsp+98h] [rbp-70h]
  __int128 v82; // [rsp+A8h] [rbp-60h]
  __int128 v83; // [rsp+B8h] [rbp-50h]
  __int16 v84; // [rsp+C8h] [rbp-40h]
  _OWORD v85[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v86; // [rsp+118h] [rbp+10h]
  struct D2D_MATRIX_3X2_F v87; // [rsp+128h] [rbp+20h] BYREF
  float v88; // [rsp+140h] [rbp+38h] BYREF
  float v89; // [rsp+144h] [rbp+3Ch]
  float v90; // [rsp+148h] [rbp+40h]
  float v91; // [rsp+14Ch] [rbp+44h]
  struct D2D_MATRIX_3X2_F v92; // [rsp+150h] [rbp+48h] BYREF
  __int128 v93; // [rsp+168h] [rbp+60h] BYREF

  if ( !a8 )
    return 0LL;
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, _QWORD, unsigned __int64))(*(_QWORD *)a8 + 216LL))(
      a8,
      *((_QWORD *)a6 + 48),
      ((unsigned __int64)a6 + 8) & -(__int64)(a6 != 0LL));
  *(_OWORD *)&v92.m11 = _xmm;
  v74 = 0LL;
  v80 = _xmm;
  *(_QWORD *)&v92.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v81 = _xmm;
  v85[0] = _xmm;
  v10 = (float)*((int *)this + 5);
  v79 = 0LL;
  v78 = 0LL;
  v77 = 0LL;
  v84 = 32085;
  v85[1] = _xmm;
  v11 = *((float *)this + 55);
  v82 = _xmm;
  v85[2] = _xmm;
  v12 = *((float *)this + 56) - v10;
  v83 = _xmm;
  v13 = (float)*((int *)this + 4);
  v86 = 32085;
  v72[0] = 0;
  v93 = 0uLL;
  v89 = v12;
  v14 = v11 - v13;
  v85[3] = _xmm;
  v15 = (float)*((int *)this + 6);
  v75 = 0LL;
  v76 = 0LL;
  v88 = v14;
  v16 = (float)(v15 / *((float *)this + 68)) + v14;
  v17 = (float)*((int *)this + 7);
  v90 = v16;
  v91 = (float)(v17 / *((float *)this + 69)) + v12;
  v18 = CDrawingContext::PushGpuClipRectInternal((__int64)a6, 0LL, (float *)this + 64, 1, 0);
  v20 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3F3u, 0LL);
    goto LABEL_52;
  }
  v21 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *))(*(_QWORD *)a8 + 72LL))(a8, &v76);
  v20 = v21;
  if ( v21 < 0 )
  {
    v71 = 1014;
    goto LABEL_49;
  }
  v23 = (__int64 *)*((_QWORD *)a6 + 48);
  v24 = *((float *)a7 + 24);
  if ( !CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 31)) )
    CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
      (CTreeEffectLayer *)((char *)this + 120),
      (struct CMILMatrix *)&v80,
      (struct CMILMatrix *)v85,
      v72);
  v21 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*v23 + 256))(v23, &CLSID_D2D12DAffineTransform, &v74);
  v20 = v21;
  if ( v21 < 0 )
  {
    v71 = 1034;
    goto LABEL_49;
  }
  v25 = v74;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v74 + 104) + 8LL))(*(_QWORD *)(v74 + 104));
  v27 = *(float *)&v80;
  v28 = 0LL;
  v29 = *((float *)&v81 + 1);
  *(_QWORD *)&v87.m[0][1] = 0LL;
  v30 = *(struct ID2D1Effect **)(v25 + 104);
  v78 = v30;
  if ( *(float *)&v80 <= *((float *)&v81 + 1) )
  {
    v87.m11 = 1.0;
    v32 = 0LL;
    v31 = *(float *)&v80;
    v87.m22 = *(float *)&v80 / *((float *)&v81 + 1);
    v32.m128_f32[0] = 0.0 - (float)((float)(*(float *)&v80 / *((float *)&v81 + 1)) * 0.0);
    v28.m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, v32).m128_u64[0];
  }
  else
  {
    v87.m22 = 1.0;
    v31 = *((float *)&v81 + 1);
    v87.m11 = *((float *)&v81 + 1) / *(float *)&v80;
    v28.m128_f32[0] = 0.0 - (float)((float)(*((float *)&v81 + 1) / *(float *)&v80) * 0.0);
    v28.m128_u64[0] = _mm_unpacklo_ps(v28, (__m128)0LL).m128_u64[0];
  }
  v33 = v31 * v24;
  *(_OWORD *)&v92.m11 = *(_OWORD *)&v87.m11;
  *(_QWORD *)&v92.m[2][0] = v28.m128_u64[0];
  v21 = CTreeEffectLayer::InitializeShadowEffect(v26, v30, &v92);
  v20 = v21;
  if ( v21 < 0 )
  {
    v71 = 1051;
    goto LABEL_49;
  }
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v30 + 112LL))(v30, 0LL, v76, 1LL);
  v34 = *(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*v23 + 256);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v74);
  v21 = v34(v23, &CLSID_D2D1Shadow, &v74);
  v20 = v21;
  if ( v21 < 0 )
  {
    v71 = 1055;
    goto LABEL_49;
  }
  v35 = v74;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v74 + 104) + 8LL))(*(_QWORD *)(v74 + 104));
  v36 = *(ID2D1Effect **)(v35 + 104);
  v37 = *((_OWORD *)a7 + 5);
  v79 = v36;
  v93 = v37;
  v73.x = v33 / 3.0;
  v38 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct D2D_VECTOR_3F *, int))(*(_QWORD *)v36 + 72LL))(
          v36,
          0LL,
          0LL,
          &v73,
          4);
  v20 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x424u, 0LL);
  }
  else
  {
    v40 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v36 + 72LL))(
            v36,
            1LL,
            0LL,
            &v93,
            16);
    v20 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x425u, 0LL);
    }
    else
    {
      v73.x = 0.0;
      v21 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct D2D_VECTOR_3F *, int))(*(_QWORD *)v36 + 72LL))(
              v36,
              2LL,
              0LL,
              &v73,
              4);
      v20 = v21;
      if ( v21 < 0 )
      {
        v71 = 1062;
        goto LABEL_49;
      }
      v42 = *((float *)a7 + 28);
      v43 = (CLayerVisual *)*((_QWORD *)this + 31);
      *(_QWORD *)&v73.x = *((_QWORD *)a7 + 13);
      v73.z = v42;
      if ( !CLayerVisual::GetFlatteningToLocalSpace(v43) )
      {
        v44 = CMILMatrix::Transform3DVector(
                (CTreeEffectLayer *)((char *)this + 120),
                (struct D2D_VECTOR_3F *)&v87,
                &v73);
        v45 = *(_QWORD *)&v44->x;
        *(FLOAT *)&v44 = v44->z;
        *(_QWORD *)&v73.x = v45;
        LODWORD(v73.z) = (_DWORD)v44;
      }
      v46 = v90 + v33;
      x = v73.x;
      v48 = v91 + v33;
      y = v73.y;
      v50 = (CComposition *)*((_QWORD *)a6 + 4);
      v51 = (float)*((int *)this + 4);
      v90 = v90 + v33;
      v52 = (float)(v73.x + v88) - v33;
      v88 = v88 - v33;
      v91 = v91 + v33;
      v53 = (float)(v73.y + v89) - v33;
      v89 = v89 - v33;
      *(float *)&v75 = v52 + v51;
      v54 = (float)*((int *)this + 5);
      *((float *)&v75 + 1) = v53 + v54;
      if ( *((_DWORD *)v50 + 276) )
      {
        if ( !CComposition::IsOverdrawHeatMapEnabled(v50) )
          goto LABEL_50;
        if ( (*(_BYTE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v55) + 20) & 9) == 0 )
          goto LABEL_50;
        v87.m12 = (float)(v58 + y) + v54;
        v87.m22 = (float)(v48 - v58) + v87.m12;
        v87.m11 = (float)(v57 + x) + v51;
        v87.m21 = (float)(v46 - v57) + v87.m11;
        TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v56);
        v21 = CDrawingContext::DrawColorRectangleAsDrawList(a6, (__int128 *)(TopByReference + 4), (__int64)&v87);
        v20 = v21;
        if ( v21 >= 0 )
          goto LABEL_50;
        v71 = 1097;
        goto LABEL_49;
      }
      v60 = *((float *)this + 68);
      if ( v60 < 0.99999881 || *((float *)this + 69) < 0.99999881 )
      {
        *(_QWORD *)&v87.m[0][1] = 0LL;
        v62 = 1.0 / *((float *)this + 69);
        v63 = *v23;
        *(_QWORD *)&v73.x = 0LL;
        v64 = *(__int64 (__fastcall **)(__int64 *, __int64, struct D2D_VECTOR_3F *))(v63 + 224);
        v87.m22 = v62;
        v87.m11 = 1.0 / v60;
        *(_QWORD *)&v87.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        v21 = v64(v23, 7LL, &v73);
        v20 = v21;
        if ( v21 < 0 )
        {
          v71 = 1115;
          goto LABEL_49;
        }
        v21 = CTreeEffectLayer::InitializeShadowEffect(v22, *(struct ID2D1Effect **)&v73.x, &v87);
        v20 = v21;
        if ( v21 < 0 )
        {
          v71 = 1117;
          goto LABEL_49;
        }
        ID2D1Effect::SetInputEffect(*(ID2D1Effect **)&v73.x, 0, v30);
        v61 = *(struct ID2D1Effect **)&v73.x;
      }
      else
      {
        v61 = v30;
      }
      ID2D1Effect::SetInputEffect(v36, 0, v61);
      *(_QWORD *)&v87.m[0][1] = 0LL;
      v65 = 0LL;
      if ( v27 <= v29 )
      {
        v87.m11 = 1.0;
        v66 = 0LL;
        v87.m22 = v29 / v27;
        v66.m128_f32[0] = 0.0 - (float)((float)(v29 / v27) * 0.0);
        v65.m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, v66).m128_u64[0];
      }
      else
      {
        v87.m22 = 1.0;
        v87.m11 = v27 / v29;
        v65.m128_f32[0] = 0.0 - (float)((float)(v27 / v29) * 0.0);
        v65.m128_u64[0] = _mm_unpacklo_ps(v65, (__m128)0LL).m128_u64[0];
      }
      *(_QWORD *)&v92.m[2][0] = v65.m128_u64[0];
      *(_OWORD *)&v92.m11 = *(_OWORD *)&v87.m11;
      v67 = *(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*v23 + 256);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v74);
      v21 = v67(v23, &CLSID_D2D12DAffineTransform, &v74);
      v20 = v21;
      if ( v21 < 0 )
      {
        v71 = 1140;
        goto LABEL_49;
      }
      v68 = v74;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v74 + 104) + 8LL))(*(_QWORD *)(v74 + 104));
      v69 = *(struct ID2D1Effect **)(v68 + 104);
      v77 = v69;
      v21 = CTreeEffectLayer::InitializeShadowEffect(v70, v69, &v92);
      v20 = v21;
      if ( v21 < 0 )
      {
        v71 = 1143;
        goto LABEL_49;
      }
      ID2D1Effect::SetInputEffect(v69, 0, v36);
      v21 = CDrawingContext::FillEffect(a6, (__int64)v36, (__int64)&v88, (__int64)&v75, 0);
      v20 = v21;
      if ( v21 < 0 )
      {
        v71 = 1153;
LABEL_49:
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v22, 0LL, 0, v21, v71, 0LL);
      }
    }
  }
LABEL_50:
  CDrawingContext::PopGpuClipRectInternal(a6, 0);
LABEL_52:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v76);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v77);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v78);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v79);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v74);
  return v20;
}
