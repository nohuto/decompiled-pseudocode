/*
 * XREFs of ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64
 * Callers:
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180204200 (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800097C0 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCCompositionLight@@$0A@@@QEAAJPEFBQEAVCCompositionLight@@I@Z @ 0x1800140C4 (-AddMultipleAndSet@-$DynArray@PEAVCCompositionLight@@$0A@@@QEAAJPEFBQEAVCCompositionLight@@I@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x180027FCC (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180028BD0 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029BA0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180036740 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180038D08 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18003D0E0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180049DF4 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180053C94 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180057918 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x180057A14 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180064938 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x180069C68 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x18006A1DC (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008E940 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800910F0 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800AC6E4 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x1800BEF5C (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x1800CDC24 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x1800CE2E0 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800EAF54 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18015D404 (-terminate@details@gsl@@YAXXZ.c)
 *     std::vector_ISpectreLightNode___std::allocator_ISpectreLightNode_____::_Resize__lambda_2fdf39d790a9406f49f0ad6a00d9e097___ @ 0x18016A760 (std--vector_ISpectreLightNode___std--allocator_ISpectreLightNode_____--_Resize__lambda_2fdf39d79.c)
 *     _lambda_5b9bd6bfe6515b530b44cdd44b946dc6_::operator() @ 0x18016AA24 (_lambda_5b9bd6bfe6515b530b44cdd44b946dc6_--operator().c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18016E9A4 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?GetSpectreRenderTargetNoRef@CSceneResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUISpectreRenderTarget@@@Z @ 0x18017A9E0 (-GetSpectreRenderTargetNoRef@CSceneResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUISpectreRenderT.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x18017AB54 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreRenderTarget@@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1801B05C4 (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreRenderTarget@@PEAUISpectreWorld@@AEBUD2D_MATRIX.c)
 *     ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x1801C6380 (-UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawScene3D(
        CDrawingContext *this,
        struct ISpectreWorld *a2,
        struct CCompositionEnvironmentLight *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v5; // edi
  struct CVisual *CurrentVisual; // rax
  const struct CMILMatrix *TopByReference; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int i; // ebx
  struct ISpectreRenderer *SpectreRenderer; // r14
  signed int v17; // eax
  __int64 v18; // rcx
  float _44; // xmm3_4
  float v20; // xmm7_4
  float v21; // xmm8_4
  __m128 v22; // xmm4
  float v23; // xmm6_4
  float v24; // xmm0_4
  __m128 v25; // xmm3
  float v26; // xmm0_4
  __m128 v27; // xmm2
  struct D2D_VECTOR_3F *v28; // rax
  float v29; // xmm10_4
  void (__fastcall *v30)(struct ISpectreRenderer *, struct CRenderTargetImageSource **); // rax
  float v31; // xmm0_4
  float v32; // xmm10_4
  int v33; // eax
  float v34; // xmm6_4
  signed int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  CSceneResourceManager *v39; // rbx
  struct CD3DSurface *v40; // rax
  signed int SpectreRenderTargetNoRef; // eax
  __int64 v42; // rcx
  unsigned int D3DMatrix; // eax
  signed int v44; // eax
  __int64 v45; // rcx
  signed int v46; // eax
  __int64 v47; // rcx
  CD2DContext *v48; // rdi
  __int64 v49; // rbx
  signed int v50; // eax
  __int64 v51; // rcx
  CDirtyRegion *v52; // rcx
  float v53; // xmm6_4
  __m128 v54; // xmm7
  FLOAT v55; // eax
  struct CRenderTargetImageSource *v56; // rbx
  __m128 v57; // xmm0
  int v58; // r9d
  __m128 v59; // xmm1
  int v60; // r8d
  signed int RenderTargetBitmap; // eax
  __int64 v62; // rcx
  signed int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rax
  signed int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rax
  CSceneResourceManager *v69; // rbx
  struct CD3DSurface *v70; // rax
  signed int v71; // eax
  __int64 v72; // rcx
  __int64 *v73; // rax
  __int64 *v74; // r15
  char v75; // bl
  unsigned int v76; // r9d
  unsigned __int64 v77; // r14
  __int64 j; // rdx
  __int64 v79; // rdi
  void (__fastcall *v80)(__int64, __int64); // rbx
  __int64 v81; // rax
  __int64 v82; // rax
  void (__fastcall *v83)(void (__fastcall ***)(_QWORD), __m128 *); // rax
  struct _D3DMATRIX *v84; // rax
  __int64 v85; // r9
  __int64 (__fastcall *v86)(void (__fastcall ***)(_QWORD), struct ISpectreWorld *, struct _D3DMATRIX *, __int64, int); // r10
  signed int v87; // eax
  __int64 v88; // rcx
  signed int v89; // eax
  __int64 v90; // rcx
  signed int v91; // eax
  __int64 v92; // rcx
  struct CRenderTargetImageSource *v93; // rbx
  signed int v94; // eax
  __int64 v95; // rcx
  signed int v96; // eax
  __int64 v97; // rcx
  int v99; // [rsp+28h] [rbp-E0h]
  char v100; // [rsp+58h] [rbp-B0h]
  struct ISpectreRenderTarget *v101; // [rsp+60h] [rbp-A8h] BYREF
  struct CRenderTargetImageSource *v102[4]; // [rsp+68h] [rbp-A0h] BYREF
  struct _D3DMATRIX v103; // [rsp+88h] [rbp-80h] BYREF
  int v104; // [rsp+C8h] [rbp-40h]
  __int64 v105; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v106; // [rsp+E0h] [rbp-28h]
  __int64 v107; // [rsp+E8h] [rbp-20h] BYREF
  float v108; // [rsp+F0h] [rbp-18h]
  struct D2D_VECTOR_3F v109; // [rsp+F8h] [rbp-10h] BYREF
  float v110; // [rsp+108h] [rbp+0h] BYREF
  float v111; // [rsp+10Ch] [rbp+4h]
  float v112; // [rsp+110h] [rbp+8h]
  struct D2D_RECT_F v113; // [rsp+118h] [rbp+10h] BYREF
  __m128 v114; // [rsp+128h] [rbp+20h] BYREF
  __int128 v115; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int64 v116; // [rsp+148h] [rbp+40h]
  __int128 v117; // [rsp+150h] [rbp+48h] BYREF
  _QWORD v118[2]; // [rsp+160h] [rbp+58h] BYREF
  int v119; // [rsp+170h] [rbp+68h]
  gsl::details *v120; // [rsp+174h] [rbp+6Ch]
  _BYTE v121[24]; // [rsp+180h] [rbp+78h] BYREF
  struct D2D_RECT_F v122; // [rsp+198h] [rbp+90h] BYREF
  __m128 v123; // [rsp+1A8h] [rbp+A0h] BYREF
  char v124; // [rsp+1B8h] [rbp+B0h]
  _D3DMATRIX v125; // [rsp+1C8h] [rbp+C0h] BYREF
  int v126; // [rsp+208h] [rbp+100h]

  v5 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  if ( *((_QWORD *)CurrentVisual + 71) > *(_QWORD *)(*((_QWORD *)CurrentVisual + 2) + 136LL) )
  {
    dword_180339864 |= 4u;
    *(_BYTE *)(**(_QWORD **)(*((_QWORD *)this + 4) + 376LL) + 1061LL) = 1;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    v11 = *(_OWORD *)a4;
    v12 = *((_OWORD *)a4 + 1);
    v104 = *((_DWORD *)a4 + 16);
    *(_OWORD *)&v103._11 = v11;
    v13 = *((_OWORD *)a4 + 2);
    *(_OWORD *)&v103._21 = v12;
    v14 = *((_OWORD *)a4 + 3);
    *(_OWORD *)&v103._31 = v13;
    *(_OWORD *)&v103._41 = v14;
    CMILMatrix::Multiply((CMILMatrix *)&v103, TopByReference);
    v102[2] = a3;
    v118[0] = v121;
    v118[1] = v121;
    v119 = 3;
    v120 = (gsl::details *)3;
    DynArray<CCompositionLight *,0>::AddMultipleAndSet((__int64)v118, &v102[2]);
    for ( i = 0; i < HIDWORD(v120); ++i )
      CCompositionLight::UpdateSceneLightInfo(*(CCompositionLight **)(v118[0] + 8LL * i), this);
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(*(CSceneResourceManager **)(*((_QWORD *)this + 4) + 128LL));
    if ( !SpectreRenderer )
      goto LABEL_79;
    (*(void (__fastcall **)(struct ISpectreWorld *, __int64 *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v107, &v105);
    *(_QWORD *)&v115 = v107;
    v116 = __PAIR64__(v106, LODWORD(v108));
    *((_QWORD *)&v115 + 1) = v105;
    CMILMatrix::Transform3DBoundsHelper<1>((__int64)&v103, (float *)&v115, &v123);
    v17 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, v123.m128_f32, 1, 0);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x7B1u, 0LL);
      goto LABEL_79;
    }
    _44 = v103._44;
    if ( IsCloseRealZero(v103._44, 0.000081380211) || IsCloseRealOne(_44, 0.000081380211) )
    {
      v20 = *(float *)&FLOAT_1_0;
      v21 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v20 = *(float *)&FLOAT_1_0;
      v21 = 1.0 / _44;
    }
    v111 = v103._42 * v21;
    v110 = v103._41 * v21;
    v22 = _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                  (__m128)_mm_cvtps_pd((__m128)(unsigned int)v105),
                                  (__m128)(unsigned __int64)_xmm));
    v23 = v103._43 * v21;
    v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v107) & _xmm);
    v22.m128_f32[0] = fmaxf(v22.m128_f32[0], v24);
    v25 = _mm_cvtpd_ps((__m128d)_mm_and_ps((__m128)_mm_cvtps_pd((__m128)HIDWORD(v105)), (__m128)(unsigned __int64)_xmm));
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v107 + 1)) & _xmm);
    v25.m128_f32[0] = fmaxf(v25.m128_f32[0], v26);
    v27 = _mm_cvtpd_ps((__m128d)_mm_and_ps((__m128)_mm_cvtps_pd((__m128)v106), (__m128)(unsigned __int64)_xmm));
    *(_QWORD *)&v113.left = _mm_unpacklo_ps(v22, v25).m128_u64[0];
    v109.z = fmaxf(v27.m128_f32[0], COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v108) & _xmm));
    v113.right = v109.z;
    v28 = CMILMatrix::Transform3DVector((CMILMatrix *)&v103, &v109, (const struct D2D_VECTOR_3F *)&v113);
    v29 = sqrtf_0(
            (float)((float)((float)(v21 * v28->x) * (float)(v21 * v28->x))
                  + (float)((float)(v21 * v28->y) * (float)(v21 * v28->y)))
          + (float)((float)(v21 * v28->z) * (float)(v21 * v28->z)))
        + v20;
    v30 = *(void (__fastcall **)(struct ISpectreRenderer *, struct CRenderTargetImageSource **))(*(_QWORD *)SpectreRenderer
                                                                                               + 24LL);
    v31 = v29 + v29;
    v32 = v29 * 4.0;
    v112 = v31 + v23;
    v30(SpectreRenderer, &v102[2]);
    if ( CCommonRegistryData::m_fSceneEnableDrawToBackbuffer
      && v102[2] == *((struct CRenderTargetImageSource **)this + 49)
      && !*((_DWORD *)this + 64) )
    {
      v33 = *((_DWORD *)this + 816);
      if ( v33 )
        v34 = *(float *)(*((_QWORD *)this + 410) + 4LL * (unsigned int)(v33 - 1));
      else
        v34 = v20;
      v100 = 0;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v34 - v20)) & _xmm) >= 0.0000011920929 )
      {
        CScopedClipStack::GetClipBoundsWorld((__int64)this + 1008, (__int64)&v114);
        v35 = CDrawingContext::PushD2DLayer(this, 0LL, (struct D2D_RECT_F *)&v114, 0LL, 0LL, v34, 0, 0);
        v5 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x7E5u, 0LL);
          goto LABEL_29;
        }
        v100 = 1;
      }
      v37 = *((_QWORD *)this + 4);
      v38 = *((_QWORD *)this + 44);
      v101 = 0LL;
      v39 = *(CSceneResourceManager **)(v37 + 128);
      v40 = (struct CD3DSurface *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 104LL))(v38);
      SpectreRenderTargetNoRef = CSceneResourceManager::GetSpectreRenderTargetNoRef(v39, v40, &v101);
      v5 = SpectreRenderTargetNoRef;
      if ( SpectreRenderTargetNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, SpectreRenderTargetNoRef, 0x7ECu, 0LL);
      }
      else
      {
        *(_QWORD *)&v122.left = HIDWORD(v120);
        *(_QWORD *)&v122.right = v118[0];
        if ( !v118[0] && HIDWORD(v120) )
        {
          gsl::details::terminate((gsl::details *)HIDWORD(v120));
          JUMPOUT(0x18016D7E4LL);
        }
        v114 = (__m128)v122;
        *(_QWORD *)&v109.x = 0LL;
        D3DMatrix = (unsigned int)CMILMatrix::GetD3DMatrix(&v103, &v125);
        v44 = CSpectreCallbackRenderer::Create(
                (_DWORD)v101,
                (_DWORD)a2,
                D3DMatrix,
                (unsigned int)&v110,
                LODWORD(FLOAT_0_1),
                LODWORD(v32),
                (__int64)&v114,
                (__int64)&v109);
        v5 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x7F7u, 0LL);
        }
        else
        {
          v46 = CDrawingContext::ApplyRenderStateInternal(this, 0);
          v5 = v46;
          if ( v46 >= 0 )
          {
            v48 = (CD2DContext *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48));
            CD2DContext::FlushDrawList(v48);
            v49 = *(_QWORD *)&v109.x;
            v50 = CD2DContext::DrawCustomCallbackRendererInternal(
                    v48,
                    *(struct ID2D1PrivateCompositorRenderer **)&v109.x);
            v5 = v50;
            if ( v50 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x7FAu, 0LL);
            if ( !v49 )
              goto LABEL_29;
            v52 = (CDirtyRegion *)(v49 + 8);
            goto LABEL_28;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x7F9u, 0LL);
        }
        if ( *(_QWORD *)&v109.x )
        {
          v52 = (CDirtyRegion *)(*(_QWORD *)&v109.x + 8LL);
LABEL_28:
          CDirtyRegion::Release(v52);
        }
      }
LABEL_29:
      if ( v100 )
        CDrawingContext::PopLayer(this);
      goto LABEL_69;
    }
    CScopedClipStack::GetClipBoundsWorld((__int64)this + 1008, (__int64)&v117);
    v54 = (__m128)HIDWORD(v117);
    *(_QWORD *)&v122.left = 0LL;
    v53 = (float)(*((float *)&v117 + 2) - *(float *)&v117) + 0.0;
    v54.m128_f32[0] = (float)(*((float *)&v117 + 3) - *((float *)&v117 + 1)) + 0.0;
    v102[0] = 0LL;
    v122.right = v53;
    v122.bottom = v54.m128_f32[0];
    CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, (struct _LUID)v102[2], v102);
    LODWORD(v55) = CDisplay::GetDefaultSRGBFormat();
    v56 = v102[0];
    v113.left = v55;
    *(_QWORD *)&v113.top = 1LL;
    v101 = 0LL;
    v57 = v54;
    v114.m128_i32[2] = 12;
    v114.m128_u64[0] = (unsigned __int64)"DWM DwmScene";
    v58 = (int)(float)(v54.m128_f32[0] - 0.0);
    v59.m128_f32[0] = v54.m128_f32[0] - 0.0;
    v57.m128_f32[0] = (float)v58;
    LODWORD(v102[1]) = _mm_cmplt_ss(v57, v59).m128_u32[0];
    v59.m128_f32[0] = v53 - 0.0;
    v60 = (int)(float)(v53 - 0.0);
    v27.m128_f32[0] = (float)v60;
    LODWORD(v102[0]) = _mm_cmplt_ss(v27, v59).m128_u32[0];
    RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                           (struct CRenderTargetImageSource *)((char *)v56 + 520),
                           (__int64)&v114,
                           v60 - LODWORD(v102[0]),
                           v58 - LODWORD(v102[1]),
                           (unsigned int)DisplayId::None,
                           (struct PixelFormatInfo *)&v113,
                           0,
                           0,
                           1,
                           (void **)&v101);
    v5 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, RenderTargetBitmap, 0x818u, 0LL);
      if ( v56 )
        CMILPoolResource::Release((struct CRenderTargetImageSource *)((char *)v56 + 496));
      goto LABEL_68;
    }
    if ( v102[2] == *((struct CRenderTargetImageSource **)this + 49) )
    {
      v102[0] = 0LL;
      v63 = CRenderTargetImageSource::Create(v101, 1, 0LL, v102);
      v5 = v63;
      if ( v63 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x81Cu, 0LL);
        goto LABEL_41;
      }
    }
    else
    {
      v102[0] = 0LL;
      v66 = CRenderTargetImageSource::Create(v101, 0, 0LL, v102);
      v5 = v66;
      if ( v66 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x820u, 0LL);
LABEL_41:
        if ( v56 )
          CMILPoolResource::Release((struct CRenderTargetImageSource *)((char *)v56 + 496));
        goto LABEL_43;
      }
    }
    if ( v56 )
      CMILPoolResource::Release((struct CRenderTargetImageSource *)((char *)v56 + 496));
    CMILMatrix::Translate((CMILMatrix *)&v103, COERCE_FLOAT(v117 ^ _xmm), COERCE_FLOAT(DWORD1(v117) ^ _xmm));
    v68 = *((_QWORD *)this + 4);
    v102[1] = 0LL;
    v110 = v110 - *(float *)&v117;
    v111 = v111 - *((float *)&v117 + 1);
    v69 = *(CSceneResourceManager **)(v68 + 128);
    v70 = (struct CD3DSurface *)(*(__int64 (__fastcall **)(struct ISpectreRenderTarget *))(*(_QWORD *)v101 + 104LL))(v101);
    v71 = CSceneResourceManager::GetSpectreRenderTargetNoRef(v69, v70, &v102[1]);
    v5 = v71;
    if ( v71 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x82Eu, 0LL);
    }
    else
    {
      v73 = (__int64 *)(*(__int64 (__fastcall **)(struct ISpectreRenderer *))(*(_QWORD *)SpectreRenderer + 40LL))(SpectreRenderer);
      v116 = 0LL;
      v74 = v73;
      v115 = 0LL;
      (*(void (__fastcall **)(__int64 *))*v73)(v73);
      v114.m128_u64[1] = (unsigned __int64)&v115;
      v75 = 1;
      v114.m128_u64[0] = (unsigned __int64)v74;
      v124 = 1;
      v123 = v114;
      if ( HIDWORD(v120) )
      {
        v126 = 0;
        if ( CMILMatrix::SetToInverse((CMILMatrix *)&v125, (const struct CMILMatrix *)&v103) )
        {
          std::vector_ISpectreLightNode___std::allocator_ISpectreLightNode_____::_Resize__lambda_2fdf39d790a9406f49f0ad6a00d9e097___(
            (__int64)&v115,
            v76);
          v77 = 0LL;
          for ( j = v115; v77 < (__int64)(*((_QWORD *)&v115 + 1) - v115) >> 3; j = v115 )
          {
            if ( (*(int (__fastcall **)(_QWORD, _D3DMATRIX *, unsigned __int64))(**(_QWORD **)(v118[0]
                                                                                             + 8LL * (unsigned int)v77)
                                                                               + 280LL))(
                   *(_QWORD *)(v118[0] + 8LL * (unsigned int)v77),
                   &v125,
                   j + 8 * v77) >= 0 )
            {
              v79 = *(_QWORD *)(v115 + 8 * v77);
              v80 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v79 + 24LL);
              v81 = (*(__int64 (__fastcall **)(struct ISpectreWorld *))(*(_QWORD *)a2 + 32LL))(a2);
              v80(v79, v81);
            }
            ++v77;
          }
          v75 = 0;
        }
      }
      (*(void (__fastcall **)(__int64 *, float *))(*v74 + 8))(v74, &v110);
      (*(void (__fastcall **)(__int64 *, struct CRenderTargetImageSource *))(*v74 + 16))(v74, v102[1]);
      v82 = *v74;
      *(_QWORD *)&v113.left = 0LL;
      *(_QWORD *)&v113.right = __PAIR64__(v54.m128_u32[0], LODWORD(v53));
      v83 = *(void (__fastcall **)(void (__fastcall ***)(_QWORD), __m128 *))(v82 + 24);
      v114 = (__m128)v113;
      v83((void (__fastcall ***)(_QWORD))v74, &v114);
      v84 = CMILMatrix::GetD3DMatrix(&v103, &v125);
      LOBYTE(v99) = v75;
      LOBYTE(v85) = 1;
      v87 = v86((void (__fastcall ***)(_QWORD))v74, a2, v84, v85, v99);
      v5 = v87;
      if ( v87 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v88, 0LL, 0, v87, 0x85Fu, 0LL);
        lambda_5b9bd6bfe6515b530b44cdd44b946dc6_::operator()(&v123);
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)&v115);
      }
      else
      {
        lambda_5b9bd6bfe6515b530b44cdd44b946dc6_::operator()(&v123);
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)&v115);
        if ( g_LockAndReadSceneOffscreenTexture )
          (*(void (__fastcall **)(struct ISpectreRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v101 + 216LL))(
            v101,
            *((_QWORD *)this + 48),
            ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
        v89 = CDrawingContext::PushTransformInternal(
                this,
                0LL,
                (const struct CMILMatrix *)&CMILMatrix::Identity,
                0LL,
                1);
        v5 = v89;
        if ( v89 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v90, 0LL, 0, v89, 0x869u, 0LL);
        }
        else
        {
          v102[1] = 0LL;
          v91 = CDrawingContext::CDisableCPUClipScope::Enter((CDrawingContext::CDisableCPUClipScope *)&v102[1], this);
          v5 = v91;
          if ( v91 >= 0 )
          {
            *(_QWORD *)&v109.x = 0LL;
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v109);
            v93 = v102[0];
            v94 = CDrawingContext::ImageSourceToDrawListImageSource(this, v102[0], 0LL, (struct IImageSource **)&v109);
            v5 = v94;
            if ( v94 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v94, 0x873u, 0LL);
            }
            else if ( *(_QWORD *)&v109.x )
            {
              v96 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
                      (__int64)this,
                      *(__int64 *)&v109.x,
                      &v122,
                      &v117,
                      0,
                      *((_DWORD *)this + 64),
                      0);
              v5 = v96;
              if ( v96 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v97, 0LL, 0, v96, 0x87Cu, 0LL);
            }
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v109);
            CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v102[1]);
            CDrawingContext::PopTransformInternal(this, 1);
            if ( !v93 )
              goto LABEL_68;
            v65 = *(_QWORD *)v93;
            goto LABEL_67;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0, v91, 0x86Fu, 0LL);
          CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v102[1]);
          CDrawingContext::PopTransformInternal(this, 1);
        }
      }
    }
LABEL_43:
    if ( !v102[0] )
    {
LABEL_68:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v101);
LABEL_69:
      CDrawingContext::PopGpuClipRectInternal(this, 0);
LABEL_79:
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v118);
      return v5;
    }
    v65 = *(_QWORD *)v102[0];
LABEL_67:
    (*(void (**)(void))(v65 + 16))();
    goto LABEL_68;
  }
  return v5;
}
