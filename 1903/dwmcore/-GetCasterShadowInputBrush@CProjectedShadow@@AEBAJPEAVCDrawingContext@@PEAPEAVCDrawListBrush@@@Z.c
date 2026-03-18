/*
 * XREFs of ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801F1A04
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F1060 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x180007EFC (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000FDA0 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000FE60 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180051ED4 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180052140 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BA950 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800BF720 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::GetCasterShadowInputBrush(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  int v4; // ecx
  CSurfaceDrawListBrush **v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct IImageSource *v10; // r14
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  CSurfaceDrawListBrush *v15; // rcx
  CSurfaceDrawListBrush *v16; // rbx
  __m128 v17; // xmm1
  __int64 v18; // r9
  __int64 *v19; // rax
  struct D2D_MATRIX_3X2_F *v20; // r9
  unsigned __int64 v21; // r10
  float v22; // xmm3_4
  __int64 v23; // xmm1_8
  struct CDrawListBrush *v24; // r14
  float v25; // xmm0_4
  CNineGridDrawListBrush *v26; // rcx
  CSurfaceDrawListBrush *v27; // rcx
  float v29; // [rsp+30h] [rbp-59h] BYREF
  struct D2D_RECT_F v30; // [rsp+40h] [rbp-49h] BYREF
  __int64 v31; // [rsp+50h] [rbp-39h]
  CSurfaceDrawListBrush **v32; // [rsp+58h] [rbp-31h] BYREF
  CSurfaceDrawListBrush *v33; // [rsp+60h] [rbp-29h] BYREF
  char v34; // [rsp+68h] [rbp-21h]
  struct D2D_RECT_F v35; // [rsp+70h] [rbp-19h] BYREF
  CSurfaceDrawListBrush *v36[2]; // [rsp+80h] [rbp-9h] BYREF
  struct D2D_RECT_F v37; // [rsp+90h] [rbp+7h] BYREF

  v4 = *((_DWORD *)this + 62);
  v7 = 0LL;
  if ( v4 )
  {
    v8 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 4 )
      {
        v9 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x8000FFFF, 0x216u, 0LL);
        return v9;
      }
      v10 = CProjectedShadow::s_cp2xBlurAsset;
    }
    else
    {
      v10 = CProjectedShadow::s_cpFastShadowIntermediate;
    }
  }
  else
  {
    v10 = (struct IImageSource *)*((_QWORD *)this + 36);
  }
  v11 = (*(__int64 (__fastcall **)(struct IImageSource *, _QWORD, _QWORD, struct D2D_RECT_F *))(*(_QWORD *)v10 + 120LL))(
          v10,
          0LL,
          0LL,
          &v37);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x21Cu, 0LL);
    goto LABEL_39;
  }
  LOBYTE(v31) = 0;
  v30 = 0LL;
  v13 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v30, v10, a2, 0);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x21Fu, 0LL);
LABEL_36:
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30.right);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
    return v9;
  }
  v36[0] = 0LL;
  v32 = v36;
  LOWORD(v29) = SamplerMode::k_ClampClampLinear;
  BYTE2(v29) = 1;
  v35 = v37;
  v33 = 0LL;
  v34 = 1;
  v9 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)&v30, (__int16 *)&v29, &v35.left, (__int64 *)&v33);
  if ( v34 )
  {
    v15 = *v32;
    *v32 = v33;
    if ( v15 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v15, 1);
  }
  if ( (v9 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v9, 0x226u, 0LL);
    if ( v36[0] )
      CSurfaceDrawListBrush::`vector deleting destructor'(v36[0], 1);
    goto LABEL_36;
  }
  v16 = v36[0];
  v32 = (CSurfaceDrawListBrush **)v36[0];
  v36[0] = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30.right);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
  if ( *((_DWORD *)this + 62) )
  {
    v18 = *((_QWORD *)this + 8);
    v36[0] = *((CSurfaceDrawListBrush **)a2 + 757);
    v19 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
            (__int64 *)(v18 + 72),
            v36);
    if ( v19 == *(__int64 **)&v20[3].m11 || v21 < v19[4] )
      v19 = *(__int64 **)&v20[3].m11;
    v22 = *((float *)this + 20);
    *(__m128i *)v36 = _mm_loadu_si128((const __m128i *)((char *)v19 + 60));
    v37.left = *(float *)v36 - v22;
    v37.right = *(float *)&v36[1] + v22;
    v37.top = *((float *)v36 + 1) - v22;
    v37.bottom = *((float *)&v36[1] + 1) + v22;
    v35 = v37;
    D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)v16 + 2, &v35, &v30, v20);
    v23 = v31;
    *(struct D2D_RECT_F *)((char *)v16 + 8) = v30;
    *((_QWORD *)v16 + 3) = v23;
  }
  else
  {
    v17 = _mm_xor_ps((__m128)*((unsigned int *)this + 20), (__m128)_xmm);
    *(_OWORD *)((char *)v16 + 8) = _xmm;
    *((_QWORD *)v16 + 3) = _mm_unpacklo_ps(v17, v17).m128_u64[0];
  }
  v24 = v16;
  if ( *((_DWORD *)this + 62) != 1 )
    goto LABEL_28;
  v25 = *((float *)this + 20);
  *(_QWORD *)&v30.left = v36;
  v36[0] = 0LL;
  *(_QWORD *)&v30.right = 0LL;
  LOBYTE(v31) = 1;
  v29 = v25 + v25;
  v37.left = v25 + v25;
  v37.top = v25 + v25;
  v37.right = v25 + v25;
  v37.bottom = v25 + v25;
  *(_QWORD *)&v35.left = 0x4200000042000000LL;
  *(_QWORD *)&v35.right = 0x4200000042000000LL;
  v9 = CNineGridDrawListBrush::Create(
         (struct CNineGridDrawListBrush *)&v32,
         (int)&v35,
         (int)&v37,
         0,
         (CNineGridDrawListBrush **)&v30.right);
  if ( (_BYTE)v31 )
  {
    v26 = **(CNineGridDrawListBrush ***)&v30.left;
    **(_QWORD **)&v30.left = *(_QWORD *)&v30.right;
    if ( v26 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v26, 1);
  }
  if ( (v9 & 0x80000000) == 0 )
  {
    v16 = v36[0];
    v24 = v36[0];
    v36[0] = 0LL;
    if ( v32 )
    {
      std::default_delete<CShape>::operator()((__int64)v26, (__int64 (__fastcall ***)(_QWORD, __int64))v32);
      if ( v36[0] )
        CNineGridDrawListBrush::`scalar deleting destructor'(v36[0], 1);
    }
LABEL_28:
    if ( *((float *)this + 20) > 0.0 )
    {
      *((_BYTE *)v16 + 52) = 1;
      *((_DWORD *)v16 + 12) = 0;
    }
    *a3 = v24;
    return v9;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v26, 0LL, 0, v9, 0x24Cu, 0LL);
  v27 = v36[0];
  if ( v36[0] )
    CNineGridDrawListBrush::`scalar deleting destructor'(v36[0], 1);
  v7 = v32;
LABEL_39:
  if ( v7 )
    std::default_delete<CShape>::operator()((__int64)v27, (__int64 (__fastcall ***)(_QWORD, __int64))v7);
  return v9;
}
