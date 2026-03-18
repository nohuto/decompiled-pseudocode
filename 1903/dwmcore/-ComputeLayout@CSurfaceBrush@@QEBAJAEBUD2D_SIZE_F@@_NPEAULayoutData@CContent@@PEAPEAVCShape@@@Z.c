/*
 * XREFs of ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180066F20
 * Callers:
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180018FF0 (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18001CBA0 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180051700 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180051B90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008BF40 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B99A0 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800CA9E0 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801FC260 (-GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CConten.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180052C34 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180085E5C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD330 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800AEEF0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801FC028 (-GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18024B674 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
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
  float left; // xmm10_4
  float top; // xmm9_4
  float right; // xmm12_4
  float bottom; // xmm11_4
  float width; // xmm5_4
  float height; // xmm4_4
  unsigned __int64 v16; // xmm0_8
  int v17; // ecx
  float v18; // xmm0_4
  float v19; // xmm1_4
  __m128 v20; // xmm2
  __m128 v21; // xmm2
  __m128 v22; // xmm7
  __int64 v23; // rcx
  __int64 v24; // xmm8_8
  const struct D2D1::Matrix3x2F *v25; // r8
  FLOAT v26; // xmm1_4
  FLOAT v27; // xmm0_4
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 (__fastcall ***v32)(_QWORD, __int64); // rdx
  unsigned int v33; // ecx
  _BYTE *v34; // rcx
  _BYTE *v35; // rdx
  __int64 v36; // rcx
  _BYTE *v37; // rcx
  _BYTE *v38; // rdx
  __int64 v39; // rcx
  struct D2D_RECT_F v40; // xmm1
  struct CShape *v41; // rax
  struct CShape *v42; // rdx
  __int64 v43; // rcx
  float v45; // xmm3_4
  float v46; // xmm1_4
  float v47; // xmm7_4
  __m128 width_low; // xmm2
  float v49; // xmm0_4
  float v50; // xmm3_4
  __m128 v51; // xmm2
  int SwapChainSize; // eax
  unsigned int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  struct CShape *v57; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v58; // [rsp+40h] [rbp-C8h] BYREF
  struct D2D_RECT_F v59; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_MATRIX_3X2_F v60; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v61[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v62; // [rsp+80h] [rbp-88h]
  unsigned __int32 v63; // [rsp+88h] [rbp-80h]
  unsigned __int32 v64; // [rsp+8Ch] [rbp-7Ch]
  __int64 v65; // [rsp+90h] [rbp-78h]
  __int128 v66; // [rsp+98h] [rbp-70h]
  __int64 v67; // [rsp+A8h] [rbp-60h]
  int v68; // [rsp+B0h] [rbp-58h]
  __int64 v69; // [rsp+B4h] [rbp-54h]
  struct D2D_SIZE_F v70[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-30h]
  struct D2D_MATRIX_3X2_F v72; // [rsp+E0h] [rbp-28h] BYREF
  void **v73; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v74; // [rsp+100h] [rbp-8h]
  void *lpMem; // [rsp+108h] [rbp+0h] BYREF
  _BYTE *v76; // [rsp+110h] [rbp+8h]
  int v77; // [rsp+118h] [rbp+10h]
  __int64 v78; // [rsp+11Ch] [rbp+14h]
  _BYTE v79[16]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v80; // [rsp+138h] [rbp+30h]
  void **v81; // [rsp+148h] [rbp+40h] BYREF
  __int64 v82; // [rsp+150h] [rbp+48h]
  void *v83; // [rsp+158h] [rbp+50h] BYREF
  _BYTE *v84; // [rsp+160h] [rbp+58h]
  int v85; // [rsp+168h] [rbp+60h]
  __int64 v86; // [rsp+16Ch] [rbp+64h]
  _BYTE v87[16]; // [rsp+178h] [rbp+70h] BYREF
  const struct D2D1::Matrix3x2F *v88; // [rsp+188h] [rbp+80h]

  v8 = this;
  v9 = 0;
  if ( a2->width <= 0.0 || a2->height <= 0.0 || (this = (CSurfaceBrush *)*((_QWORD *)this + 12)) == 0LL )
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, (const int *const)"\a", 1u, -2003304441, 0x3B5u, 0LL);
    return (unsigned int)v9;
  }
  v57 = 0LL;
  v58 = 0LL;
  if ( (**(int (__fastcall ***)(CSurfaceBrush *, GUID *, __int64 *))this)(
         this,
         &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
         &v58) >= 0 )
  {
    SwapChainSize = CSurfaceBrush::GetSwapChainSize(v8, a3, v70, &v59, &v60);
    v9 = SwapChainSize;
    if ( SwapChainSize < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, (const int *const)"\a", 1u, SwapChainSize, 0x3C8u, 0LL);
LABEL_60:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v58);
      goto LABEL_62;
    }
    bottom = v59.bottom;
    right = v59.right;
    top = v59.top;
    left = v59.left;
    height = v70[0].height;
    width = v70[0].width;
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v8 + 12) + 48LL))(
           *((_QWORD *)v8 + 12),
           194LL) )
    {
      v54 = *((_QWORD *)v8 + 12);
      v55 = 80LL;
      *(_OWORD *)&v60.m11 = _xmm;
      left = 0.0;
      v16 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      if ( !*(_BYTE *)(v54 + 152) )
        v55 = 72LL;
      top = 0.0;
      right = *(float *)(v55 + v54);
      bottom = *(float *)(v55 + v54 + 4);
      width = right;
      height = bottom;
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
      *(_OWORD *)&v60.m11 = _xmm;
    }
    v59.bottom = bottom;
    v59.right = right;
    v59.top = top;
    v59.left = left;
    *(_QWORD *)&v60.m[2][0] = v16;
  }
  v17 = *((_DWORD *)v8 + 22);
  v70[0] = 0LL;
  if ( v17 == 1 )
  {
    v18 = a2->width;
    v19 = a2->height;
    v70[0] = 0LL;
    v20 = _mm_shuffle_ps(*(__m128 *)&v70[0].width, *(__m128 *)&v70[0].width, 210);
    v20.m128_f32[0] = v18;
  }
  else
  {
    if ( v17 )
    {
      if ( (unsigned int)(v17 - 2) > 1 )
      {
        v47 = v70[0].height;
        v45 = v70[0].width;
      }
      else
      {
        v45 = a2->width;
        v46 = a2->height;
        v47 = a2->width / (float)(width / height);
        if ( v47 >= v46 != (v17 == 3) )
        {
          v47 = a2->height;
          v45 = (float)(width / height) * v46;
        }
      }
    }
    else
    {
      v45 = width;
      v47 = height;
    }
    width_low = (__m128)LODWORD(a2->width);
    width_low.m128_f32[0] = (float)(width_low.m128_f32[0] - v45) * *((float *)v8 + 20);
    v49 = (float)(a2->height - v47) * *((float *)v8 + 21);
    v50 = v45 + width_low.m128_f32[0];
    v51 = _mm_shuffle_ps(width_low, width_low, 225);
    v51.m128_f32[0] = v49;
    v20 = _mm_shuffle_ps(v51, v51, 198);
    v19 = v49 + v47;
    v20.m128_f32[0] = v50;
  }
  v21 = _mm_shuffle_ps(v20, v20, 39);
  v21.m128_f32[0] = v19;
  *(_QWORD *)&v72.m[0][1] = 0LL;
  *(__m128 *)&v70[0].width = _mm_shuffle_ps(v21, v21, 57);
  *(struct D2D_SIZE_F *)&v72.m[2][0] = v70[0];
  v72.m11 = (float)(v70[1].width - v70[0].width) / width;
  v72.m22 = (float)(v70[1].height - v70[0].height) / height;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v70,
    (const struct D2D1::Matrix3x2F *)&v60,
    (const struct D2D1::Matrix3x2F *)&v72);
  v22 = *(__m128 *)&v70[0].width;
  v23 = *((_QWORD *)v8 + 13);
  v24 = v71;
  *(_QWORD *)&v72.m[2][0] = v71;
  *(_OWORD *)&v72.m11 = *(_OWORD *)&v70[0].width;
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct D2D_SIZE_F *))(*(_QWORD *)v23 + 216LL))(
      v23,
      a2,
      v70);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v60,
      (const struct D2D1::Matrix3x2F *)&v72,
      (const struct D2D1::Matrix3x2F *)v70);
    v22 = *(__m128 *)&v60.m11;
    v24 = *(_QWORD *)&v60.m[2][0];
    v72 = v60;
  }
  v25 = (CSurfaceBrush *)((char *)v8 + 112);
  if ( *((float *)v8 + 28) != 1.0
    || *((float *)v8 + 29) != 0.0
    || *((float *)v8 + 30) != 0.0
    || *((float *)v8 + 31) != 1.0
    || *((float *)v8 + 32) != 0.0
    || *((float *)v8 + 33) != 0.0 )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v60, (const struct D2D1::Matrix3x2F *)&v72, v25);
    v24 = *(_QWORD *)&v60.m[2][0];
    v22 = *(__m128 *)&v60.m11;
    *(_QWORD *)&v72.m[2][0] = *(_QWORD *)&v60.m[2][0];
  }
  if ( !a5 )
    goto LABEL_42;
  v26 = a2->width + 0.0;
  v27 = a2->height + 0.0;
  v83 = v87;
  v82 = 0LL;
  v84 = v87;
  v81 = &CRectanglesShape::`vftable';
  v70[1].width = v26;
  v70[1].height = v27;
  v85 = 1;
  v86 = 1LL;
  v88 = 0LL;
  v70[0] = 0LL;
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(&v83, v70, 1LL);
  v70[0].width = left;
  lpMem = v79;
  v70[0].height = top;
  v76 = v79;
  v70[1].width = right;
  v70[1].height = bottom;
  v74 = 0LL;
  v73 = &CRectanglesShape::`vftable';
  v77 = 1;
  v78 = 1LL;
  v80 = 0LL;
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(&lpMem, v70, 1LL);
  v61[0] = v22.m128_i32[0];
  v61[1] = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
  *(_QWORD *)&v72.m11 = &v57;
  v63 = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
  v66 = _xmm;
  v64 = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
  v67 = *(_QWORD *)&v72.m[2][0];
  v69 = 1065353216LL;
  v62 = 0LL;
  v65 = 0LL;
  v68 = 0;
  *(_QWORD *)&v72.m[1][0] = 0LL;
  LOBYTE(v72.m[2][0]) = 1;
  v29 = CShape::TryOptimizedCombinePaths(&v81, v28, &v73, v61, 1, v72.m[1]);
  v9 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v29, 0x188u, 0LL);
  }
  else if ( !*(_QWORD *)&v72.m[1][0] )
  {
    v56 = CShape::D2DCombine(&v81, v30, &v73, v61, 1, v72.m[1]);
    v9 = v56;
    if ( v56 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v56, 0x197u, 0LL);
  }
  if ( LOBYTE(v72.m[2][0]) )
  {
    v31 = *(_QWORD *)&v72.m11;
    v32 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v72.m11;
    **(_QWORD **)&v72.m11 = *(_QWORD *)&v72.m[1][0];
    if ( v32 )
      std::default_delete<CShape>::operator()(v31, v32);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, (const int *const)"\a", 1u, v9, 0x40Eu, 0LL);
LABEL_59:
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v73);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v81);
    goto LABEL_60;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)v57 + 16LL))(v57) )
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v33, (const int *const)"\a", 1u, -2003304441, 0x413u, 0LL);
    goto LABEL_59;
  }
  v34 = lpMem;
  v35 = v76;
  v73 = &CRectanglesShape::`vftable';
  HIDWORD(v78) = 0;
  if ( lpMem != v76 )
  {
    operator delete(lpMem);
    v35 = v76;
    v34 = v76;
    lpMem = v76;
    LODWORD(v78) = v77;
  }
  if ( v80 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
    v35 = v76;
    v34 = lpMem;
    v80 = 0LL;
  }
  if ( v34 != v35 )
  {
    operator delete(v34);
    lpMem = 0LL;
  }
  v36 = v74;
  if ( v74 )
  {
    v74 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = v83;
  v38 = v84;
  v81 = &CRectanglesShape::`vftable';
  HIDWORD(v86) = 0;
  if ( v83 != v84 )
  {
    operator delete(v83);
    v38 = v84;
    v37 = v84;
    v83 = v84;
    LODWORD(v86) = v85;
  }
  v25 = v88;
  if ( v88 )
  {
    (*(void (__fastcall **)(const struct D2D1::Matrix3x2F *))(*(_QWORD *)v88 + 16LL))(v88);
    v38 = v84;
    v37 = v83;
    v88 = 0LL;
  }
  if ( v37 != v38 )
  {
    operator delete(v37);
    v83 = 0LL;
  }
  v39 = v82;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
LABEL_42:
  v40 = v59;
  *(__m128 *)a4 = v22;
  *((_QWORD *)a4 + 2) = v24;
  *(struct D2D_RECT_F *)((char *)a4 + 24) = v40;
  if ( a5 )
  {
    v41 = v57;
    v42 = 0LL;
    v57 = 0LL;
    *a5 = v41;
  }
  else
  {
    v42 = v57;
  }
  v43 = v58;
  if ( !v58 )
    goto LABEL_45;
  v58 = 0LL;
  (*(void (__fastcall **)(__int64, struct CShape *, const struct D2D1::Matrix3x2F *))(*(_QWORD *)v43 + 16LL))(
    v43,
    v42,
    v25);
LABEL_62:
  v42 = v57;
LABEL_45:
  if ( v42 )
    std::default_delete<CShape>::operator()(v43, (__int64 (__fastcall ***)(_QWORD, __int64))v42);
  return (unsigned int)v9;
}
