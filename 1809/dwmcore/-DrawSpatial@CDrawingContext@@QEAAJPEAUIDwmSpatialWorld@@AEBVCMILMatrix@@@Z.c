/*
 * XREFs of ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC
 * Callers:
 *     ?Draw@CSpatialVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DB030 (-Draw@CSpatialVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180008A60 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180014DB0 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x180022BFC (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800234C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18002B8C8 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x180030128 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180040650 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x180066AD0 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x18007E4F8 (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x180096374 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180099098 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x1800B18C8 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DAA24 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetSpatialCompositor@CSpatialResourceManager@@QEBAPEAUIDwmSpatialCompositor@@XZ @ 0x180156D40 (-GetSpatialCompositor@CSpatialResourceManager@@QEBAPEAUIDwmSpatialCompositor@@XZ.c)
 *     ?GetSpatialRenderTargetNoRef@CSpatialResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUIDwmSpatialRenderTarget@@@Z @ 0x180156D58 (-GetSpatialRenderTargetNoRef@CSpatialResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUIDwmSpatialRe.c)
 *     ?Create@CSpatialCallbackRenderer@@SAJPEAUIDwmSpatialRenderTarget@@PEAUIDwmSpatialWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMPEAPEAV1@@Z @ 0x1801839B4 (-Create@CSpatialCallbackRenderer@@SAJPEAUIDwmSpatialRenderTarget@@PEAUIDwmSpatialWorld@@AEBUD2D_.c)
 */

__int64 __fastcall CDrawingContext::DrawSpatial(
        CDrawingContext *this,
        struct IDwmSpatialWorld *a2,
        const struct CMILMatrix *a3)
{
  struct IDwmSpatialCompositor *SpatialCompositor; // r15
  const struct CMILMatrix *TopByReference; // rax
  __int128 *v7; // r8
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  float v12; // xmm2_4
  float v13; // xmm8_4
  __m128 v14; // xmm4
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  __m128 v18; // xmm3
  float v19; // xmm0_4
  struct D2D_VECTOR_3F *v20; // rax
  float v21; // xmm10_4
  float v22; // xmm0_4
  float v23; // xmm10_4
  int v24; // eax
  float v25; // xmm6_4
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // rax
  __int64 v30; // rcx
  CSpatialResourceManager *v31; // rbx
  struct CD3DSurface *v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  struct _D3DMATRIX *v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  CD2DContext *v40; // rdi
  struct CRenderTargetImageSource *v41; // rbx
  int v42; // eax
  __int64 v43; // rcx
  CMILRefCountBase *v44; // rcx
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm3_4
  float v48; // xmm6_4
  float v49; // xmm4_4
  __m128 v50; // xmm7
  __m128 v51; // xmm2
  float v52; // xmm6_4
  __int64 v53; // rbx
  __m128 v54; // xmm0
  int v55; // r9d
  __m128 v56; // xmm1
  int v57; // r8d
  int RenderTargetBitmap; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rax
  CSpatialResourceManager *v65; // rbx
  struct CD3DSurface *v66; // rax
  int SpatialRenderTargetNoRef; // eax
  __int64 v68; // rcx
  __int64 v69; // rbx
  __int64 v70; // rax
  void (__fastcall *v71)(__int64, struct D2D_RECT_F *); // rax
  struct _D3DMATRIX *D3DMatrix; // r8
  __int64 v73; // r9
  __int64 (__fastcall *v74)(__int64, struct IDwmSpatialWorld *, struct _D3DMATRIX *, __int64); // rax
  int v75; // eax
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rcx
  char v86; // [rsp+58h] [rbp-B0h]
  struct IDwmSpatialRenderTarget *v87; // [rsp+60h] [rbp-A8h] BYREF
  struct CRenderTargetImageSource *v88; // [rsp+68h] [rbp-A0h] BYREF
  struct IImageSource *v89[3]; // [rsp+70h] [rbp-98h] BYREF
  struct _D3DMATRIX v90; // [rsp+88h] [rbp-80h] BYREF
  int v91; // [rsp+C8h] [rbp-40h]
  __int64 v92; // [rsp+D8h] [rbp-30h] BYREF
  float v93; // [rsp+E0h] [rbp-28h]
  __int64 v94; // [rsp+E8h] [rbp-20h] BYREF
  float v95; // [rsp+F0h] [rbp-18h]
  __int128 v96; // [rsp+F8h] [rbp-10h] BYREF
  struct D2D_RECT_F v97; // [rsp+108h] [rbp+0h] BYREF
  struct D2D_VECTOR_3F v98; // [rsp+118h] [rbp+10h] BYREF
  struct D2D_VECTOR_3F v99; // [rsp+128h] [rbp+20h] BYREF
  struct D2D_RECT_F v100; // [rsp+138h] [rbp+30h] BYREF
  float v101; // [rsp+148h] [rbp+40h]
  float v102; // [rsp+14Ch] [rbp+44h]
  __m128 v103; // [rsp+150h] [rbp+48h] BYREF
  _D3DMATRIX v104; // [rsp+168h] [rbp+60h] BYREF

  SpatialCompositor = CSpatialResourceManager::GetSpatialCompositor(*(CSpatialResourceManager **)(*((_QWORD *)this + 4)
                                                                                                + 136LL));
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  v8 = *v7;
  v9 = v7[1];
  v91 = *((_DWORD *)v7 + 16);
  *(_OWORD *)&v90._11 = v8;
  v10 = v7[2];
  *(_OWORD *)&v90._21 = v9;
  v11 = v7[3];
  *(_OWORD *)&v90._31 = v10;
  *(_OWORD *)&v90._41 = v11;
  CMILMatrix::Multiply((CMILMatrix *)&v90, TopByReference);
  (*(void (__fastcall **)(struct IDwmSpatialWorld *, __int64 *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v92, &v94);
  *(float *)&v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v90._44) & _xmm);
  if ( *(float *)&v11 < 0.000081380211
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v90._44 - 1.0)) & _xmm), v12 < 0.000081380211) )
  {
    v13 = FLOAT_1_0;
  }
  else
  {
    v13 = 1.0 / v90._44;
  }
  v98.y = v90._42 * v13;
  v98.x = v90._41 * v13;
  v14 = _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                (__m128)_mm_cvtps_pd((__m128)(unsigned int)v94),
                                (__m128)(unsigned __int64)_xmm));
  v15 = v90._43 * v13;
  v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v92) & _xmm);
  v14.m128_f32[0] = fmaxf(v14.m128_f32[0], v16);
  v98.z = v90._43 * v13;
  v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v92 + 1)) & _xmm);
  v18 = _mm_cvtpd_ps((__m128d)_mm_and_ps((__m128)_mm_cvtps_pd((__m128)HIDWORD(v94)), (__m128)(unsigned __int64)_xmm));
  v18.m128_f32[0] = fmaxf(v18.m128_f32[0], v17);
  v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v93) & _xmm);
  *(_QWORD *)&v97.left = _mm_unpacklo_ps(v14, v18).m128_u64[0];
  v99.z = fmaxf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v95) & _xmm), v19);
  v97.right = v99.z;
  v20 = CMILMatrix::Transform3DVector((CMILMatrix *)&v90, &v99, (const struct D2D_VECTOR_3F *)&v97);
  v21 = sqrtf_0(
          (float)((float)((float)(v13 * v20->x) * (float)(v13 * v20->x))
                + (float)((float)(v13 * v20->y) * (float)(v13 * v20->y)))
        + (float)((float)(v13 * v20->z) * (float)(v13 * v20->z)))
      + 1.0;
  v22 = v21 + v21;
  v23 = v21 * 4.0;
  v98.z = v22 + v15;
  (*(void (__fastcall **)(struct IDwmSpatialCompositor *, struct IImageSource **))(*(_QWORD *)SpatialCompositor + 24LL))(
    SpatialCompositor,
    &v89[2]);
  if ( CCommonRegistryData::m_fSpatialDisableDrawToBackbuffer
    || v89[2] != *((struct IImageSource **)this + 49)
    || *((_DWORD *)this + 64) )
  {
    *(_QWORD *)&v100.left = v92;
    v101 = v93;
    *(_QWORD *)&v100.right = v94;
    v102 = v95;
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)&v90, (__int64)&v100, &v103);
    CScopedClipStack::GetClipBoundsWorld((CDrawingContext *)((char *)this + 1008), (__int64)&v96);
    v45 = *(float *)&v96;
    if ( v103.m128_f32[0] > *(float *)&v96 )
    {
      LODWORD(v96) = v103.m128_i32[0];
      v45 = v103.m128_f32[0];
    }
    v46 = *((float *)&v96 + 1);
    v47 = *((float *)&v96 + 1);
    if ( v103.m128_f32[1] > *((float *)&v96 + 1) )
    {
      DWORD1(v96) = v103.m128_i32[1];
      v46 = v103.m128_f32[1];
      v47 = v103.m128_f32[1];
    }
    v48 = *((float *)&v96 + 2);
    v49 = *((float *)&v96 + 2);
    if ( *((float *)&v96 + 2) > v103.m128_f32[2] )
    {
      DWORD2(v96) = v103.m128_i32[2];
      v48 = v103.m128_f32[2];
      v49 = v103.m128_f32[2];
    }
    v50 = (__m128)HIDWORD(v96);
    v51 = (__m128)v103.m128_u32[3];
    if ( *((float *)&v96 + 3) > v103.m128_f32[3] )
    {
      HIDWORD(v96) = v103.m128_i32[3];
      v50 = (__m128)v103.m128_u32[3];
    }
    if ( v49 <= v45 || v50.m128_f32[0] <= v47 )
    {
      v48 = 0.0;
      v46 = 0.0;
      v45 = 0.0;
      v96 = 0uLL;
      v50 = 0LL;
    }
    v103.m128_u64[0] = 0LL;
    v88 = 0LL;
    v52 = (float)(v48 - v45) + 0.0;
    *(_QWORD *)&v99.x = 0LL;
    v50.m128_f32[0] = (float)(v50.m128_f32[0] - v46) + 0.0;
    v103.m128_u64[1] = __PAIR64__(v50.m128_u32[0], LODWORD(v52));
    CD3DDeviceManager::GetExistingDevice(
      (CD3DDeviceManager *)&g_D3DDeviceManager,
      (struct _LUID)v89[2],
      (struct CD3DDeviceLevel1 **)&v99);
    *(_QWORD *)&v97.left = 0LL;
    v97.right = 0.0;
    LODWORD(v97.left) = CDisplay::GetDefaultSRGBFormat();
    *(_QWORD *)&v97.top = 1LL;
    v87 = 0LL;
    v53 = *(_QWORD *)&v99.x;
    v54 = v50;
    *(_QWORD *)&v100.left = "DWM CSpatialVisualContent";
    LODWORD(v100.right) = 25;
    v55 = (int)(float)(v50.m128_f32[0] - 0.0);
    v56.m128_f32[0] = v50.m128_f32[0] - 0.0;
    v54.m128_f32[0] = (float)v55;
    LODWORD(v89[1]) = _mm_cmplt_ss(v54, v56).m128_u32[0];
    v56.m128_f32[0] = v52 - 0.0;
    v57 = (int)(float)(v52 - 0.0);
    v51.m128_f32[0] = (float)v57;
    LODWORD(v89[0]) = _mm_cmplt_ss(v51, v56).m128_u32[0];
    RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                           (CRenderTargetBitmapCache *)(*(_QWORD *)&v99.x + 520LL),
                           (__int64)&v100,
                           v57 - LODWORD(v89[0]),
                           v55 - LODWORD(v89[1]),
                           DisplayId::None,
                           (struct PixelFormatInfo *)&v97,
                           0,
                           0,
                           1,
                           (void **)&v87);
    v28 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, RenderTargetBitmap, 0x7FDu);
    }
    else
    {
      if ( v89[2] == *((struct IImageSource **)this + 49) )
      {
        v88 = 0LL;
        v60 = CRenderTargetImageSource::Create(v87, 1, &v88);
        v28 = v60;
        if ( v60 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x801u);
          goto LABEL_67;
        }
LABEL_46:
        if ( v53 )
          CD3DSurface::Release((CD3DSurface *)(v53 + 496));
        CMILMatrix::Translate((CMILMatrix *)&v90, COERCE_FLOAT(v96 ^ _xmm), COERCE_FLOAT(DWORD1(v96) ^ _xmm));
        v64 = *((_QWORD *)this + 4);
        *(_QWORD *)&v99.x = 0LL;
        v98.x = v98.x - *(float *)&v96;
        v98.y = v98.y - *((float *)&v96 + 1);
        v65 = *(CSpatialResourceManager **)(v64 + 136);
        v66 = (struct CD3DSurface *)(*(__int64 (__fastcall **)(struct IDwmSpatialRenderTarget *))(*(_QWORD *)v87 + 104LL))(v87);
        SpatialRenderTargetNoRef = CSpatialResourceManager::GetSpatialRenderTargetNoRef(
                                     v65,
                                     v66,
                                     (struct IDwmSpatialRenderTarget **)&v99);
        v28 = SpatialRenderTargetNoRef;
        if ( SpatialRenderTargetNoRef < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, SpatialRenderTargetNoRef, 0x813u);
        }
        else
        {
          v69 = (*(__int64 (__fastcall **)(struct IDwmSpatialCompositor *))(*(_QWORD *)SpatialCompositor + 40LL))(SpatialCompositor);
          (**(void (__fastcall ***)(__int64))v69)(v69);
          (*(void (__fastcall **)(__int64, struct D2D_VECTOR_3F *))(*(_QWORD *)v69 + 8LL))(v69, &v98);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v69 + 16LL))(v69, *(_QWORD *)&v99.x);
          v70 = *(_QWORD *)v69;
          *(_QWORD *)&v97.left = 0LL;
          *(_QWORD *)&v97.right = __PAIR64__(v50.m128_u32[0], LODWORD(v52));
          v71 = *(void (__fastcall **)(__int64, struct D2D_RECT_F *))(v70 + 24);
          v100 = v97;
          v71(v69, &v100);
          D3DMatrix = CMILMatrix::GetD3DMatrix(&v90, &v104);
          v74 = *(__int64 (__fastcall **)(__int64, struct IDwmSpatialWorld *, struct _D3DMATRIX *, __int64))(v73 + 32);
          LOBYTE(v73) = 1;
          v75 = v74(v69, a2, D3DMatrix, v73);
          v28 = v75;
          if ( v75 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v75, 0x824u);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 40LL))(v69);
          }
          else
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 40LL))(v69);
            if ( g_LockAndReadSpatialOffscreenTexture )
              (*(void (__fastcall **)(struct IDwmSpatialRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v87 + 216LL))(
                v87,
                *((_QWORD *)this + 48),
                ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
            v77 = CDrawingContext::PushTransformInternal(
                    this,
                    0LL,
                    (const struct CMILMatrix *)&CMILMatrix::Identity,
                    0,
                    1);
            v28 = v77;
            if ( v77 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, v77, 0x82Eu);
            }
            else
            {
              v89[1] = 0LL;
              v79 = CDrawingContext::CDisableCPUClipScope::Enter((CDrawingContext::CDisableCPUClipScope *)&v89[1], this);
              v28 = v79;
              if ( v79 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v79, 0x834u);
              }
              else
              {
                v89[0] = 0LL;
                Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v89);
                v81 = CDrawingContext::ImageSourceToDrawListImageSource(this, v88, 0LL, v89);
                v28 = v81;
                if ( v81 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, v81, 0x838u);
                }
                else if ( v89[0] )
                {
                  v83 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
                          (__int64)this,
                          (__int64)v89[0],
                          (__int128 *)&v103,
                          &v96,
                          0,
                          *((_DWORD *)this + 64),
                          0);
                  v28 = v83;
                  if ( v83 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v84, 0LL, 0, v83, 0x841u);
                }
                Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v89);
              }
              CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v89[1]);
              CDrawingContext::PopTransformInternal(this, 1);
            }
          }
        }
        goto LABEL_69;
      }
      v88 = 0LL;
      v62 = CRenderTargetImageSource::Create(v87, 0, &v88);
      v28 = v62;
      if ( v62 >= 0 )
        goto LABEL_46;
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x805u);
    }
LABEL_67:
    if ( v53 )
      CD3DSurface::Release((CD3DSurface *)(v53 + 496));
LABEL_69:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v88);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v87);
    return v28;
  }
  v24 = *((_DWORD *)this + 816);
  if ( v24 )
    v25 = *(float *)(*((_QWORD *)this + 410) + 4LL * (unsigned int)(v24 - 1));
  else
    v25 = FLOAT_1_0;
  v86 = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    CScopedClipStack::GetClipBoundsWorld((CDrawingContext *)((char *)this + 1008), (__int64)&v100);
    v26 = CDrawingContext::PushD2DLayer(this, 0LL, &v100, 0LL, 0LL, v25, 0, 0);
    v28 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x7BEu);
      goto LABEL_22;
    }
    v86 = 1;
  }
  v29 = *((_QWORD *)this + 4);
  v30 = *((_QWORD *)this + 44);
  v87 = 0LL;
  v31 = *(CSpatialResourceManager **)(v29 + 136);
  v32 = (struct CD3DSurface *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 104LL))(v30);
  v33 = CSpatialResourceManager::GetSpatialRenderTargetNoRef(v31, v32, &v87);
  v28 = v33;
  if ( v33 >= 0 )
  {
    v88 = 0LL;
    v35 = CMILMatrix::GetD3DMatrix(&v90, &v104);
    v36 = CSpatialCallbackRenderer::Create(v87, a2, (const struct D2D_MATRIX_4X4_F *)v35, &v98, 0.1, v23, &v88);
    v28 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x7CFu);
    }
    else
    {
      v38 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v28 = v38;
      if ( v38 >= 0 )
      {
        v40 = (CD2DContext *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48));
        CD2DContext::FlushDrawList(v40);
        v41 = v88;
        v42 = CD2DContext::DrawCustomCallbackRendererInternal(v40, v88);
        v28 = v42;
        if ( v42 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x7D2u);
        if ( !v41 )
          goto LABEL_22;
        v44 = (struct CRenderTargetImageSource *)((char *)v41 + 8);
LABEL_28:
        CMILRefCountBase::Release(v44);
        goto LABEL_22;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x7D1u);
    }
    if ( !v88 )
      goto LABEL_22;
    v44 = (struct CRenderTargetImageSource *)((char *)v88 + 8);
    goto LABEL_28;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x7C5u);
LABEL_22:
  if ( v86 )
    CDrawingContext::PopLayer(this);
  return v28;
}
