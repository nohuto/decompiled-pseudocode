/*
 * XREFs of ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000B548
 * Callers:
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18000B410 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000CF80 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000D040 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18000E434 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x18000E794 (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18005C5B4 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800AEDD0 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        struct CDrawListBrush **a5)
{
  __int64 *v6; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64 *, _QWORD, _QWORD, float *); // rax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // ebx
  struct IImageSource *v15; // rdx
  int v16; // eax
  unsigned int v17; // ecx
  CSurfaceDrawListBrush *v18; // rcx
  struct D2D_MATRIX_3X2_F *v19; // r9
  CSurfaceDrawListBrush *v20; // r11
  __int64 v21; // xmm1_8
  CSurfaceDrawListBrush *v22; // rdi
  struct CDrawListBrush *v23; // rbx
  struct CDrawListBrush *v24; // rsi
  float v25; // xmm4_4
  __int32 v26; // xmm4_4
  float v27; // xmm4_4
  __int64 i; // rax
  CNineGridDrawListBrush *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __m128 v33; // [rsp+38h] [rbp-91h] BYREF
  CSurfaceDrawListBrush *v34; // [rsp+48h] [rbp-81h] BYREF
  __int16 v35; // [rsp+58h] [rbp-71h] BYREF
  char v36; // [rsp+5Ah] [rbp-6Fh]
  CNineGridDrawListBrush *v37; // [rsp+68h] [rbp-61h] BYREF
  struct D2D_RECT_F v38; // [rsp+70h] [rbp-59h] BYREF
  __int128 v39; // [rsp+80h] [rbp-49h] BYREF
  char v40; // [rsp+90h] [rbp-39h]
  struct D2D_RECT_F v41; // [rsp+98h] [rbp-31h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-21h]
  CSurfaceDrawListBrush **v43; // [rsp+B0h] [rbp-19h] BYREF
  CSurfaceDrawListBrush *v44; // [rsp+B8h] [rbp-11h] BYREF
  char v45; // [rsp+C0h] [rbp-9h]
  float v46; // [rsp+C8h] [rbp-1h] BYREF
  float v47; // [rsp+CCh] [rbp+3h]
  float v48; // [rsp+D0h] [rbp+7h]
  float v49; // [rsp+D4h] [rbp+Bh]
  void *retaddr; // [rsp+120h] [rbp+57h]

  v6 = (__int64 *)*((_QWORD *)this + 5);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  width = a3->width;
  height = a3->height;
  v10 = *v6;
  v33.m128_u64[0] = 0LL;
  v33.m128_u64[1] = __PAIR64__(LODWORD(height), LODWORD(width));
  v11 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, float *))(v10 + 120);
  v38.left = 0.0 - a4;
  v38.top = _mm_shuffle_ps(v33, v33, 85).m128_f32[0] - a4;
  v38.right = _mm_shuffle_ps(v33, v33, 170).m128_f32[0] + a4;
  v38.bottom = _mm_shuffle_ps(v33, v33, 255).m128_f32[0] + a4;
  v12 = v11(v6, 0LL, 0LL, &v46);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3F8u);
    return (unsigned int)v14;
  }
  v15 = (struct IImageSource *)*((_QWORD *)this + 5);
  v40 = 0;
  v39 = 0LL;
  v16 = CDrawListBitmap::FromImageSource((CDrawListBitmap *)&v39, v15, a2, 0);
  v14 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3FFu);
LABEL_39:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v39 + 8);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v39);
    return (unsigned int)v14;
  }
  v33.m128_u64[0] = 0LL;
  v34 = 0LL;
  v44 = 0LL;
  v35 = SamplerMode::k_ClampClampLinear;
  v33.m128_f32[2] = v48 - v46;
  v33.m128_f32[3] = v49 - v47;
  v36 = 1;
  v43 = &v34;
  v45 = 1;
  v14 = CSurfaceDrawListBrush::CreateWithContentRect(&v39, &v35, &v33, &v44);
  if ( v45 )
  {
    v18 = *v43;
    *v43 = v44;
    if ( v18 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v18, 1u);
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v18, 0LL, 0, v14, 0x406u);
    if ( v34 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v34, 1u);
    goto LABEL_39;
  }
  D2DMatrixHelper::ComputeRectangleTransform((CSurfaceDrawListBrush *)((char *)v34 + 32), &v38, &v41, v19);
  v20 = v34;
  v21 = v42;
  *(struct D2D_RECT_F *)((char *)v34 + 8) = v41;
  *((_QWORD *)v20 + 3) = v21;
  v22 = v34;
  v34 = 0LL;
  v23 = v22;
  *(_QWORD *)&v38.left = v22;
  v24 = v22;
  if ( CDropShadow::ShadowIntermediates::IsRectangularShadow(this) )
  {
    v25 = *((float *)this + 8);
    if ( v25 > 0.0 )
    {
      *(float *)&v26 = v25 + v25;
      v33 = 0LL;
      if ( (float)(v48 - v46) > (float)(*(float *)&v26 + *(float *)&v26) )
      {
        v33.m128_i32[0] = v26;
        v33.m128_i32[2] = v26;
      }
      if ( (float)(v49 - v47) > (float)(*(float *)&v26 + *(float *)&v26) )
      {
        v33.m128_i32[1] = v26;
        v33.m128_i32[3] = v26;
      }
      if ( !Insets::IsEmpty((const struct Insets *)&v33) )
      {
        for ( i = 0LL; i < 4; ++i )
          *(float *)((char *)&v43 + i * 4) = (float)((float)(a4 + a4) / v27) * v33.m128_f32[i];
        v37 = 0LL;
        *(_QWORD *)&v41.right = 0LL;
        *(_QWORD *)&v41.left = &v37;
        LOBYTE(v42) = 1;
        v14 = CNineGridDrawListBrush::Create(
                (unsigned int)&v38,
                (unsigned int)&v33,
                (unsigned int)&v43,
                0,
                (__int64)&v41.right);
        if ( (_BYTE)v42 )
        {
          v29 = **(CNineGridDrawListBrush ***)&v41.left;
          **(_QWORD **)&v41.left = *(_QWORD *)&v41.right;
          if ( v29 )
            CNineGridDrawListBrush::`scalar deleting destructor'(v29, 1u);
        }
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v29, 0LL, 0, v14, 0x435u);
          if ( v37 )
            CNineGridDrawListBrush::`scalar deleting destructor'(v37, 1u);
          if ( v34 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v34, 1u);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v39 + 8);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v39);
          v31 = *(_QWORD *)&v38.left;
          goto LABEL_26;
        }
        v23 = v37;
        v37 = 0LL;
        if ( *(_QWORD *)&v38.left )
        {
          std::default_delete<CShape>::operator()(v29, *(_QWORD *)&v38.left);
          if ( v37 )
            CNineGridDrawListBrush::`scalar deleting destructor'(v37, 1u);
        }
        v24 = v23;
      }
    }
  }
  if ( v34 )
  {
    CSurfaceDrawListBrush::`vector deleting destructor'(v34, 1u);
    v23 = v24;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v39 + 8);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v39);
  v31 = 0LL;
  *a5 = v23;
  v14 = 0;
LABEL_26:
  if ( v31 )
    std::default_delete<CShape>::operator()(v30, v31);
  return (unsigned int)v14;
}
