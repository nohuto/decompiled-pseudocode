/*
 * XREFs of ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CA404
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C97D0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000CF80 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000D040 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18005C5B4 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800AEDD0 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AD7D4 (-GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?GetShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801CB0F0 (-GetShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GetCasterShadowInputBrush(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  CSurfaceDrawListBrush **v6; // rbx
  int ShadowPath; // eax
  int v8; // r15d
  int v9; // edi
  struct IImageSource *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  CSurfaceDrawListBrush *v15; // rcx
  CSurfaceDrawListBrush *v16; // rbx
  struct CDrawListBrush *v17; // rsi
  __m128 v18; // xmm1
  float v19; // xmm3_4
  struct D2D_MATRIX_3X2_F *v20; // r9
  __int64 v21; // xmm1_8
  float v22; // xmm0_4
  CNineGridDrawListBrush *v23; // rcx
  CSurfaceDrawListBrush *v24; // rcx
  float v26; // [rsp+30h] [rbp-59h] BYREF
  CSurfaceDrawListBrush *v27[2]; // [rsp+40h] [rbp-49h] BYREF
  struct D2D_RECT_F v28; // [rsp+50h] [rbp-39h] BYREF
  __int64 v29; // [rsp+60h] [rbp-29h]
  CSurfaceDrawListBrush **v30; // [rsp+68h] [rbp-21h] BYREF
  CSurfaceDrawListBrush *v31; // [rsp+70h] [rbp-19h] BYREF
  char v32; // [rsp+78h] [rbp-11h]
  struct D2D_RECT_F v33; // [rsp+80h] [rbp-9h] BYREF
  struct D2D_RECT_F v34; // [rsp+90h] [rbp+7h] BYREF

  v6 = 0LL;
  ShadowPath = CProjectedShadow::GetShadowPath();
  v8 = ShadowPath;
  if ( ShadowPath )
  {
    if ( ShadowPath == 1 )
    {
      v10 = (struct IImageSource *)*((_QWORD *)CProjectedShadow::s_pFastShadow + 48);
    }
    else
    {
      if ( ShadowPath != 2 )
      {
        v9 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)(ShadowPath - 1), 0LL, 0, -2147418113, 0x1C1u);
        return (unsigned int)v9;
      }
      v10 = (struct IImageSource *)((CProjectedShadow::s_cp2xBlurAsset + 56) & -(__int64)(CProjectedShadow::s_cp2xBlurAsset != 0));
    }
  }
  else
  {
    v10 = (struct IImageSource *)*((_QWORD *)this + 48);
  }
  v11 = (*(__int64 (__fastcall **)(struct IImageSource *, _QWORD, _QWORD, struct D2D_RECT_F *))(*(_QWORD *)v10 + 120LL))(
          v10,
          0LL,
          0LL,
          &v34);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1C7u);
    goto LABEL_35;
  }
  LOBYTE(v29) = 0;
  v28 = 0LL;
  v13 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v28, v10, a2, 0);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1CAu);
LABEL_32:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v28.right);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v28);
    return (unsigned int)v9;
  }
  LOWORD(v26) = SamplerMode::k_ClampClampLinear;
  BYTE2(v26) = 1;
  v27[0] = 0LL;
  v30 = v27;
  v33 = v34;
  v31 = 0LL;
  v32 = 1;
  v9 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)&v28, (__int16 *)&v26, &v33.left, (__int64 *)&v31);
  if ( v32 )
  {
    v15 = *v30;
    *v30 = v31;
    if ( v15 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v15, 1);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v9, 0x1D1u);
    if ( v27[0] )
      CSurfaceDrawListBrush::`vector deleting destructor'(v27[0], 1);
    goto LABEL_32;
  }
  v16 = v27[0];
  v30 = (CSurfaceDrawListBrush **)v27[0];
  v27[0] = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v28.right);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v28);
  if ( !v8 )
  {
    v17 = v16;
    v18 = _mm_xor_ps((__m128)*((unsigned int *)this + 24), (__m128)_xmm);
    *(_OWORD *)((char *)v16 + 8) = _xmm;
    *((_QWORD *)v16 + 3) = _mm_unpacklo_ps(v18, v18).m128_u64[0];
LABEL_16:
    if ( *((float *)this + 24) > 0.0 )
    {
      *((_BYTE *)v16 + 52) = 1;
      *((_DWORD *)v16 + 12) = 0;
    }
    *a3 = v17;
    return (unsigned int)v9;
  }
  CProjectedShadowCaster::GetCasterBounds(*((_QWORD *)this + 9), (__int64)&v34);
  v19 = *((float *)this + 24);
  *(float *)&v27[1] = v34.right + v19;
  *(float *)v27 = v34.left - v19;
  *((float *)v27 + 1) = v34.top - v19;
  *((float *)&v27[1] + 1) = v34.bottom + v19;
  v33 = *(struct D2D_RECT_F *)v27;
  D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)v16 + 2, &v33, &v28, v20);
  v21 = v29;
  v17 = v16;
  *(struct D2D_RECT_F *)((char *)v16 + 8) = v28;
  *((_QWORD *)v16 + 3) = v21;
  if ( v8 != 1 )
    goto LABEL_16;
  v22 = *((float *)this + 24);
  *(_QWORD *)&v28.left = v27;
  v27[0] = 0LL;
  *(_QWORD *)&v28.right = 0LL;
  LOBYTE(v29) = 1;
  v26 = v22 + v22;
  v34.left = v22 + v22;
  v34.top = v22 + v22;
  v34.right = v22 + v22;
  v34.bottom = v22 + v22;
  *(_QWORD *)&v33.left = 0x4200000042000000LL;
  *(_QWORD *)&v33.right = 0x4200000042000000LL;
  v9 = CNineGridDrawListBrush::Create(
         (struct CNineGridDrawListBrush *)&v30,
         (int)&v33,
         (int)&v34,
         0,
         (CNineGridDrawListBrush **)&v28.right);
  if ( (_BYTE)v29 )
  {
    v23 = **(CNineGridDrawListBrush ***)&v28.left;
    **(_QWORD **)&v28.left = *(_QWORD *)&v28.right;
    if ( v23 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v23, 1);
  }
  if ( v9 >= 0 )
  {
    v16 = v27[0];
    v17 = v27[0];
    v27[0] = 0LL;
    if ( v30 )
    {
      std::default_delete<CShape>::operator()((__int64)v23, (__int64 (__fastcall ***)(_QWORD, __int64))v30);
      if ( v27[0] )
        CNineGridDrawListBrush::`scalar deleting destructor'(v27[0], 1);
    }
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, 0LL, 0, v9, 0x1F8u);
  v24 = v27[0];
  if ( v27[0] )
    CNineGridDrawListBrush::`scalar deleting destructor'(v27[0], 1);
  v6 = v30;
LABEL_35:
  if ( v6 )
    std::default_delete<CShape>::operator()((__int64)v24, (__int64 (__fastcall ***)(_QWORD, __int64))v6);
  return (unsigned int)v9;
}
