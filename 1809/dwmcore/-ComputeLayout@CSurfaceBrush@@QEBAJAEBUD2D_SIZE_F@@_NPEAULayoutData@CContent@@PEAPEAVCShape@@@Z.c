/*
 * XREFs of ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800457F0
 * Callers:
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18001A2B0 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005DE70 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18005E8B0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18006E0D0 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800AE220 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801AA600 (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801B4420 (-GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CConten.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180047930 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800580A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18008CFC0 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801B41F0 (-GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18021D7E0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::ComputeLayout(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        bool a3,
        struct CContent::LayoutData *a4,
        struct CShape **a5)
{
  CSurfaceBrush *v8; // rbx
  int v9; // r15d
  float left; // xmm9_4
  float top; // xmm8_4
  float right; // xmm12_4
  float bottom; // xmm11_4
  float width; // xmm4_4
  float height; // xmm5_4
  unsigned __int64 v16; // xmm0_8
  int v17; // ecx
  float v18; // xmm0_4
  float v19; // xmm1_4
  __m128 v20; // xmm2
  __int64 v21; // rcx
  __m128 v22; // xmm2
  float v23; // xmm3_4
  __m128 v24; // xmm14
  __m128 v25; // xmm7
  __m128 v26; // xmm7
  __m128 v27; // xmm7
  __m128 v28; // xmm7
  __m128 v29; // xmm13
  __m128 height_low; // xmm10
  unsigned __int64 v31; // xmm15_8
  __m128 v32; // xmm5
  __m128 v33; // xmm1
  __m128 v34; // xmm7
  __m128 v35; // xmm7
  __m128 v36; // xmm7
  __m128 v37; // xmm7
  float v38; // xmm0_4
  const struct D2D1::Matrix3x2F *v39; // r8
  float v40; // xmm10_4
  float v41; // xmm13_4
  float v42; // xmm10_4
  float v43; // xmm13_4
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 (__fastcall ***v48)(_QWORD, __int64); // rdx
  unsigned int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rcx
  struct D2D_RECT_F v52; // xmm0
  struct CShape *v53; // rax
  __int64 (__fastcall ***v54)(_QWORD, __int64); // rdx
  __int64 v55; // rcx
  float v57; // xmm3_4
  float v58; // xmm1_4
  float v59; // xmm7_4
  __m128 width_low; // xmm2
  float v61; // xmm0_4
  float v62; // xmm3_4
  __m128 v63; // xmm2
  int SwapChainSize; // eax
  unsigned int v65; // ecx
  __int64 v66; // rax
  CCachedVisualImage *v67; // rcx
  int v68; // eax
  unsigned int v69[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v70; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v71; // [rsp+58h] [rbp-B0h]
  unsigned int v72[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_RECT_F v74; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v75[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v76; // [rsp+90h] [rbp-78h]
  unsigned __int32 v77; // [rsp+98h] [rbp-70h]
  unsigned __int32 v78; // [rsp+9Ch] [rbp-6Ch]
  __int64 v79; // [rsp+A0h] [rbp-68h]
  __int128 v80; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v81; // [rsp+B8h] [rbp-50h]
  int v82; // [rsp+C0h] [rbp-48h]
  __int64 v83; // [rsp+C4h] [rbp-44h]
  struct D2D_SIZE_F v84[2]; // [rsp+D8h] [rbp-30h] BYREF
  __m128 v85; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 v86; // [rsp+F8h] [rbp-10h]
  void **v87; // [rsp+108h] [rbp+0h] BYREF
  __int64 v88; // [rsp+110h] [rbp+8h]
  void *v89; // [rsp+118h] [rbp+10h] BYREF
  _BYTE *v90; // [rsp+120h] [rbp+18h]
  int v91; // [rsp+128h] [rbp+20h]
  __int64 v92; // [rsp+12Ch] [rbp+24h]
  _BYTE v93[16]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v94; // [rsp+148h] [rbp+40h]
  void **v95; // [rsp+158h] [rbp+50h] BYREF
  __int64 v96; // [rsp+160h] [rbp+58h]
  void *v97; // [rsp+168h] [rbp+60h] BYREF
  _BYTE *v98; // [rsp+170h] [rbp+68h]
  int v99; // [rsp+178h] [rbp+70h]
  __int64 v100; // [rsp+17Ch] [rbp+74h]
  _BYTE v101[16]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v102; // [rsp+198h] [rbp+90h]

  v8 = this;
  v9 = 0;
  if ( a2->width <= 0.0 || a2->height <= 0.0 || (this = (CSurfaceBrush *)*((_QWORD *)this + 11)) == 0LL )
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_18029B7A8, 1u, -2003304441, 0x327u);
    return (unsigned int)v9;
  }
  *(_QWORD *)&v70.m11 = 0LL;
  v73 = 0LL;
  if ( (**(int (__fastcall ***)(CSurfaceBrush *, GUID *, __int64 *))this)(
         this,
         &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
         &v73) >= 0 )
  {
    SwapChainSize = CSurfaceBrush::GetSwapChainSize(v8, a3, v84, &v74, (struct D2D_MATRIX_3X2_F *)v70.m[1]);
    v9 = SwapChainSize;
    if ( SwapChainSize < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v65, &dword_18029B7A8, 1u, SwapChainSize, 0x33Au);
LABEL_59:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v73);
      goto LABEL_61;
    }
    bottom = v74.bottom;
    right = v74.right;
    top = v74.top;
    left = v74.left;
    height = v84[0].height;
    width = v84[0].width;
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v8 + 11) + 48LL))(
           *((_QWORD *)v8 + 11),
           15LL) )
    {
      v66 = *((_QWORD *)v8 + 11);
      v67 = (CCachedVisualImage *)(v66 - 16);
      if ( !v66 )
        v67 = 0LL;
      CCachedVisualImage::GetCurrentSize(v67, v69, v72);
      left = 0.0;
      *(_OWORD *)&v70.m[1][0] = _xmm;
      right = (float)(int)v69[0];
      top = 0.0;
      bottom = (float)(int)v72[0];
      width = (float)(int)v69[0];
      v16 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_N0_0), (__m128)LODWORD(FLOAT_N0_0)).m128_u64[0];
      height = (float)(int)v72[0];
    }
    else
    {
      left = *((float *)v8 + 34);
      top = *((float *)v8 + 35);
      right = *((float *)v8 + 36);
      bottom = *((float *)v8 + 37);
      width = right - left;
      height = bottom - top;
      v16 = _mm_unpacklo_ps(
              _mm_xor_ps((__m128)LODWORD(left), (__m128)_xmm),
              _mm_xor_ps((__m128)LODWORD(top), (__m128)_xmm)).m128_u64[0];
      *(_OWORD *)&v70.m[1][0] = _xmm;
    }
    v74.bottom = bottom;
    v74.right = right;
    v74.top = top;
    v74.left = left;
    v71 = v16;
  }
  v17 = *((_DWORD *)v8 + 20);
  v84[0] = 0LL;
  if ( v17 == 1 )
  {
    v18 = a2->width;
    v19 = a2->height;
    v84[0] = 0LL;
    v20 = _mm_shuffle_ps(*(__m128 *)&v84[0].width, *(__m128 *)&v84[0].width, 210);
    v20.m128_f32[0] = v18;
  }
  else
  {
    if ( v17 )
    {
      if ( (unsigned int)(v17 - 2) > 1 )
      {
        v59 = v84[0].height;
        v57 = v84[0].width;
      }
      else
      {
        v57 = a2->width;
        v58 = a2->height;
        v59 = a2->width / (float)(width / height);
        if ( v59 >= v58 != (v17 == 3) )
        {
          v59 = a2->height;
          v57 = (float)(width / height) * v58;
        }
      }
    }
    else
    {
      v57 = width;
      v59 = height;
    }
    width_low = (__m128)LODWORD(a2->width);
    width_low.m128_f32[0] = (float)(width_low.m128_f32[0] - v57) * *((float *)v8 + 18);
    v61 = (float)(a2->height - v59) * *((float *)v8 + 19);
    v62 = v57 + width_low.m128_f32[0];
    v63 = _mm_shuffle_ps(width_low, width_low, 225);
    v63.m128_f32[0] = v61;
    v20 = _mm_shuffle_ps(v63, v63, 198);
    v19 = v61 + v59;
    v20.m128_f32[0] = v62;
  }
  v21 = *((_QWORD *)v8 + 13);
  v22 = _mm_shuffle_ps(v20, v20, 39);
  v22.m128_f32[0] = v19;
  *(__m128 *)&v84[0].width = _mm_shuffle_ps(v22, v22, 57);
  v29 = (__m128)LODWORD(v84[1].width);
  v23 = v84[0].width;
  height_low = (__m128)LODWORD(v84[1].height);
  v29.m128_f32[0] = (float)(v84[1].width - v84[0].width) / width;
  height_low.m128_f32[0] = (float)(v84[1].height - v84[0].height) / height;
  v24 = v29;
  v24.m128_f32[0] = (float)(v29.m128_f32[0] * v70.m21) + (float)(v70.m22 * 0.0);
  v25 = _mm_shuffle_ps(v24, v24, 225);
  v25.m128_f32[0] = (float)(height_low.m128_f32[0] * v70.m22) + (float)(v70.m21 * 0.0);
  v26 = _mm_shuffle_ps(v25, v25, 198);
  *(float *)v72 = (float)(height_low.m128_f32[0] * v70.m22) + (float)(v70.m21 * 0.0);
  *(float *)v69 = (float)(v29.m128_f32[0] * v70.dx) + (float)(v70.dy * 0.0);
  v84[0].width = (float)(height_low.m128_f32[0] * v70.dy) + (float)(v70.dx * 0.0);
  v26.m128_f32[0] = *(float *)v69;
  v27 = _mm_shuffle_ps(v26, v26, 39);
  v27.m128_f32[0] = v84[0].width;
  v28 = _mm_shuffle_ps(v27, v27, 57);
  v29.m128_f32[0] = (float)((float)(v29.m128_f32[0] * *(float *)&v71) + (float)(*((float *)&v71 + 1) * 0.0)) + v23;
  v85 = v28;
  height_low.m128_f32[0] = (float)((float)(height_low.m128_f32[0] * *((float *)&v71 + 1)) + (float)(*(float *)&v71 * 0.0))
                         + v84[0].height;
  *(__m128 *)&v70.m[1][0] = v28;
  v71 = _mm_unpacklo_ps(v29, height_low).m128_u64[0];
  v31 = v71;
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64, const struct D2D_SIZE_F *, __m128 *))(*(_QWORD *)v21 + 176LL))(v21, a2, &v85);
    v32 = (__m128)v85.m128_u32[0];
    v33 = (__m128)v85.m128_u32[0];
    v33.m128_f32[0] = v85.m128_f32[0] * v24.m128_f32[0];
    v34 = v33;
    v34.m128_f32[0] = (float)(v85.m128_f32[0] * v24.m128_f32[0]) + (float)(*(float *)v72 * v85.m128_f32[2]);
    v35 = _mm_shuffle_ps(v34, v34, 225);
    v35.m128_f32[0] = (float)(v24.m128_f32[0] * v85.m128_f32[1]) + (float)(*(float *)v72 * v85.m128_f32[3]);
    v32.m128_f32[0] = v85.m128_f32[0] * v29.m128_f32[0];
    v36 = _mm_shuffle_ps(v35, v35, 198);
    v36.m128_f32[0] = (float)(v85.m128_f32[0] * *(float *)v69) + (float)(v84[0].width * v85.m128_f32[2]);
    v37 = _mm_shuffle_ps(v36, v36, 39);
    v38 = height_low.m128_f32[0] * v85.m128_f32[2];
    v37.m128_f32[0] = (float)(v84[0].width * v85.m128_f32[3]) + (float)(*(float *)v69 * v85.m128_f32[1]);
    v28 = _mm_shuffle_ps(v37, v37, 57);
    height_low.m128_f32[0] = (float)(height_low.m128_f32[0] * v85.m128_f32[3])
                           + (float)(v29.m128_f32[0] * v85.m128_f32[1]);
    v85 = v28;
    v32.m128_f32[0] = (float)(v32.m128_f32[0] + v38) + *(float *)&v86;
    *(__m128 *)&v70.m[1][0] = v28;
    height_low.m128_f32[0] = height_low.m128_f32[0] + *((float *)&v86 + 1);
    v31 = _mm_unpacklo_ps(v32, height_low).m128_u64[0];
    v71 = v31;
  }
  v39 = (CSurfaceBrush *)((char *)v8 + 112);
  if ( *((float *)v8 + 28) != 1.0
    || *((float *)v8 + 29) != 0.0
    || *((float *)v8 + 30) != 0.0
    || *((float *)v8 + 31) != 1.0
    || *((float *)v8 + 32) != 0.0
    || *((float *)v8 + 33) != 0.0 )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v85, (const struct D2D1::Matrix3x2F *)v70.m[1], v39);
    v31 = v86;
    v28 = v85;
    v71 = v86;
  }
  if ( !a5 )
    goto LABEL_42;
  v40 = a2->width;
  v41 = a2->height;
  v97 = v101;
  v96 = 0LL;
  v98 = v101;
  v42 = v40 + 0.0;
  v95 = &CRectanglesShape::`vftable';
  v43 = v41 + 0.0;
  v99 = 1;
  v100 = 1LL;
  v102 = 0LL;
  DynArrayImpl<0>::ShrinkToSize(&v97, 16LL);
  if ( v102 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
    v102 = 0LL;
  }
  v84[1].width = v42;
  v84[1].height = v43;
  v84[0] = 0LL;
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(&v97, v84, 1LL);
  v88 = 0LL;
  v89 = v93;
  v87 = &CRectanglesShape::`vftable';
  v90 = v93;
  v91 = 1;
  v92 = 1LL;
  v94 = 0LL;
  DynArrayImpl<0>::ShrinkToSize(&v89, 16LL);
  if ( v94 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
    v94 = 0LL;
  }
  v84[0].width = left;
  v84[0].height = top;
  v84[1].width = right;
  v84[1].height = bottom;
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(&v89, v84, 1LL);
  v75[0] = v28.m128_i32[0];
  v75[1] = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
  *(_QWORD *)&v70.m[1][0] = &v70;
  v77 = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
  v80 = _xmm;
  v78 = _mm_shuffle_ps(v28, v28, 255).m128_u32[0];
  v81 = v71;
  v83 = 1065353216LL;
  v76 = 0LL;
  v79 = 0LL;
  v82 = 0;
  *(_QWORD *)&v70.m[2][0] = 0LL;
  LOBYTE(v71) = 1;
  v45 = CShape::TryOptimizedCombinePaths(&v95, v44, &v87, v75, 1, v70.m[2]);
  v9 = v45;
  if ( v45 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v45, 0x18Bu);
  }
  else if ( !*(_QWORD *)&v70.m[2][0] )
  {
    v68 = CShape::D2DCombine(&v95, v46, &v87, v75, 1, v70.m[2]);
    v9 = v68;
    if ( v68 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v68, 0x19Au);
  }
  if ( (_BYTE)v71 )
  {
    v47 = *(_QWORD *)&v70.m[1][0];
    v48 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v70.m[1][0];
    **(_QWORD **)&v70.m[1][0] = *(_QWORD *)&v70.m[2][0];
    if ( v48 )
      std::default_delete<CShape>::operator()(v47, v48);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v47, &dword_18029B7A8, 1u, v9, 0x384u);
LABEL_58:
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v87);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v95);
    goto LABEL_59;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&v70.m11 + 16LL))(*(_QWORD *)&v70.m11) )
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v49, &dword_18029B7A8, 1u, -2003304441, 0x389u);
    goto LABEL_58;
  }
  v87 = &CRectanglesShape::`vftable';
  HIDWORD(v92) = 0;
  DynArrayImpl<0>::ShrinkToSize(&v89, 16LL);
  if ( v94 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
    v94 = 0LL;
  }
  if ( v89 != v90 )
  {
    WPF::ProcessHeapImpl::Free(v89);
    v89 = 0LL;
  }
  v50 = v88;
  if ( v88 )
  {
    v88 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
  v95 = &CRectanglesShape::`vftable';
  HIDWORD(v100) = 0;
  DynArrayImpl<0>::ShrinkToSize(&v97, 16LL);
  if ( v102 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
    v102 = 0LL;
  }
  if ( v97 != v98 )
  {
    WPF::ProcessHeapImpl::Free(v97);
    v97 = 0LL;
  }
  v51 = v96;
  if ( v96 )
  {
    v96 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  }
LABEL_42:
  v52 = v74;
  *(__m128 *)a4 = v28;
  *((_QWORD *)a4 + 2) = v31;
  *(struct D2D_RECT_F *)((char *)a4 + 24) = v52;
  if ( a5 )
  {
    v53 = *(struct CShape **)&v70.m11;
    v54 = 0LL;
    *(_QWORD *)&v70.m11 = 0LL;
    *a5 = v53;
  }
  else
  {
    v54 = *(__int64 (__fastcall ****)(_QWORD, __int64))&v70.m11;
  }
  v55 = v73;
  if ( !v73 )
    goto LABEL_45;
  v73 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, __int64), const struct D2D1::Matrix3x2F *))(*(_QWORD *)v55 + 16LL))(
    v55,
    v54,
    v39);
LABEL_61:
  v54 = *(__int64 (__fastcall ****)(_QWORD, __int64))&v70.m11;
LABEL_45:
  if ( v54 )
    std::default_delete<CShape>::operator()(v55, v54);
  return (unsigned int)v9;
}
