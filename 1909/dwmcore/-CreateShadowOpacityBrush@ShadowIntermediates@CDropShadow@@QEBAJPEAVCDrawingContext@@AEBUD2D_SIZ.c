/*
 * XREFs of ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000E448
 * Callers:
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18000E310 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000EBC8 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000EC80 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18000FCEC (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x180010048 (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180036C70 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180039FE8 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180057610 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BB2A0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
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
  struct CDrawListBrush *v22; // rbx
  float v23; // xmm4_4
  __int32 v24; // xmm4_4
  float v25; // xmm4_4
  __int64 i; // rax
  CNineGridDrawListBrush *v27; // rcx
  __int64 v28; // rdx
  __m128 v30; // [rsp+38h] [rbp-91h] BYREF
  CSurfaceDrawListBrush *v31; // [rsp+48h] [rbp-81h] BYREF
  __int16 v32; // [rsp+58h] [rbp-71h] BYREF
  char v33; // [rsp+5Ah] [rbp-6Fh]
  CNineGridDrawListBrush *v34; // [rsp+68h] [rbp-61h] BYREF
  struct D2D_RECT_F v35; // [rsp+70h] [rbp-59h] BYREF
  __int128 v36; // [rsp+80h] [rbp-49h] BYREF
  char v37; // [rsp+90h] [rbp-39h]
  struct D2D_RECT_F v38; // [rsp+98h] [rbp-31h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-21h]
  CSurfaceDrawListBrush **v40; // [rsp+B0h] [rbp-19h] BYREF
  CSurfaceDrawListBrush *v41; // [rsp+B8h] [rbp-11h] BYREF
  char v42; // [rsp+C0h] [rbp-9h]
  float v43; // [rsp+C8h] [rbp-1h] BYREF
  float v44; // [rsp+CCh] [rbp+3h]
  float v45; // [rsp+D0h] [rbp+7h]
  float v46; // [rsp+D4h] [rbp+Bh]
  void *retaddr; // [rsp+120h] [rbp+57h]

  v6 = (__int64 *)*((_QWORD *)this + 5);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
  width = a3->width;
  height = a3->height;
  v10 = *v6;
  v30.m128_u64[0] = 0LL;
  v30.m128_u64[1] = __PAIR64__(LODWORD(height), LODWORD(width));
  v11 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, float *))(v10 + 120);
  v35.left = 0.0 - a4;
  v35.top = _mm_shuffle_ps(v30, v30, 85).m128_f32[0] - a4;
  v35.right = _mm_shuffle_ps(v30, v30, 170).m128_f32[0] + a4;
  v35.bottom = _mm_shuffle_ps(v30, v30, 255).m128_f32[0] + a4;
  v12 = v11(v6, 0LL, 0LL, &v43);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3F6u, 0LL);
    return (unsigned int)v14;
  }
  v15 = (struct IImageSource *)*((_QWORD *)this + 5);
  v37 = 0;
  v36 = 0LL;
  v16 = CDrawListBitmap::FromImageSource((CDrawListBitmap *)&v36, v15, a2, 0);
  v14 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3FDu, 0LL);
LABEL_38:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v36 + 8);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
    return (unsigned int)v14;
  }
  v30.m128_u64[0] = 0LL;
  v40 = &v31;
  v30.m128_f32[2] = v45 - v43;
  v32 = SamplerMode::k_ClampClampLinear;
  v30.m128_f32[3] = v46 - v44;
  v31 = 0LL;
  v41 = 0LL;
  v42 = 1;
  v33 = 1;
  v14 = CSurfaceDrawListBrush::CreateWithContentRect(&v36, &v32, &v30, &v41);
  if ( v42 )
  {
    v18 = *v40;
    *v40 = v41;
    if ( v18 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v18, 1u);
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v18, 0LL, 0, v14, 0x404u, 0LL);
    if ( v31 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v31, 1u);
    goto LABEL_38;
  }
  D2DMatrixHelper::ComputeRectangleTransform((CSurfaceDrawListBrush *)((char *)v31 + 32), &v35, &v38, v19);
  v20 = v31;
  v21 = v39;
  *(struct D2D_RECT_F *)((char *)v31 + 8) = v38;
  *((_QWORD *)v20 + 3) = v21;
  *(_QWORD *)&v35.left = v31;
  v22 = v31;
  v31 = 0LL;
  if ( CDropShadow::ShadowIntermediates::IsRectangularShadow(this) )
  {
    v23 = *((float *)this + 8);
    if ( v23 > 0.0 )
    {
      *(float *)&v24 = v23 + v23;
      v30 = 0LL;
      if ( (float)(v45 - v43) > (float)(*(float *)&v24 + *(float *)&v24) )
      {
        v30.m128_i32[0] = v24;
        v30.m128_i32[2] = v24;
      }
      if ( (float)(v46 - v44) > (float)(*(float *)&v24 + *(float *)&v24) )
      {
        v30.m128_i32[1] = v24;
        v30.m128_i32[3] = v24;
      }
      if ( !Insets::IsEmpty((const struct Insets *)&v30) )
      {
        for ( i = 0LL; i < 4; ++i )
          *(float *)((char *)&v40 + i * 4) = (float)((float)(a4 + a4) / v25) * v30.m128_f32[i];
        v34 = 0LL;
        *(_QWORD *)&v38.left = &v34;
        *(_QWORD *)&v38.right = 0LL;
        LOBYTE(v39) = 1;
        v14 = CNineGridDrawListBrush::Create(
                (unsigned int)&v35,
                (unsigned int)&v30,
                (unsigned int)&v40,
                0,
                (__int64)&v38.right);
        if ( (_BYTE)v39 )
        {
          v27 = **(CNineGridDrawListBrush ***)&v38.left;
          **(_QWORD **)&v38.left = *(_QWORD *)&v38.right;
          if ( v27 )
            CNineGridDrawListBrush::`scalar deleting destructor'(v27, 1u);
        }
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v27, 0LL, 0, v14, 0x433u, 0LL);
          if ( v34 )
            CNineGridDrawListBrush::`scalar deleting destructor'(v34, 1u);
          if ( v31 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v31, 1u);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v36 + 8);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
          v28 = *(_QWORD *)&v35.left;
          goto LABEL_25;
        }
        v22 = v34;
        v34 = 0LL;
        if ( *(_QWORD *)&v35.left )
        {
          std::default_delete<CShape>::operator()();
          if ( v34 )
            CNineGridDrawListBrush::`scalar deleting destructor'(v34, 1u);
        }
      }
    }
  }
  if ( v31 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v31, 1u);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v36 + 8);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
  *a5 = v22;
  v28 = 0LL;
  v14 = 0;
LABEL_25:
  if ( v28 )
    std::default_delete<CShape>::operator()();
  return (unsigned int)v14;
}
