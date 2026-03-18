/*
 * XREFs of ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800050D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180005418 (-InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRec.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800057D4 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV-$TMilRect.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18002781C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18005C55C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800AE7D4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B1E70 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBrushParameters(
        CLinearGradientBrush *this,
        const struct CDrawingContext **a2)
{
  int CurrentSurface; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  bool v7; // zf
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  __int64 v14; // rcx
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  unsigned int v17; // ecx
  float *v18; // rax
  float v19; // xmm2_4
  char v20; // al
  CSurfaceDrawListBrush *v21; // rcx
  CSurfaceDrawListBrush *v22; // rax
  unsigned int v24; // [rsp+28h] [rbp-89h]
  _BYTE v25[16]; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-69h] BYREF
  struct IImageSource *v27; // [rsp+50h] [rbp-61h] BYREF
  CSurfaceDrawListBrush *v28; // [rsp+58h] [rbp-59h] BYREF
  __int128 v29; // [rsp+60h] [rbp-51h] BYREF
  char v30; // [rsp+70h] [rbp-41h]
  CSurfaceDrawListBrush **v31; // [rsp+78h] [rbp-39h] BYREF
  CSurfaceDrawListBrush *v32; // [rsp+80h] [rbp-31h] BYREF
  float v33; // [rsp+88h] [rbp-29h]
  float v34; // [rsp+8Ch] [rbp-25h]
  float v35; // [rsp+90h] [rbp-21h] BYREF
  float v36; // [rsp+94h] [rbp-1Dh]
  float v37; // [rsp+98h] [rbp-19h]
  float v38; // [rsp+9Ch] [rbp-15h]
  _DWORD v39[5]; // [rsp+A0h] [rbp-11h] BYREF
  float v40; // [rsp+B4h] [rbp+3h]
  float v41; // [rsp+B8h] [rbp+7h] BYREF
  float v42; // [rsp+BCh] [rbp+Bh]
  float v43; // [rsp+C0h] [rbp+Fh]
  float v44; // [rsp+C4h] [rbp+13h]
  float v45; // [rsp+C8h] [rbp+17h]
  float v46; // [rsp+CCh] [rbp+1Bh]
  int v47; // [rsp+D0h] [rbp+1Fh]
  float v48; // [rsp+D4h] [rbp+23h]
  float v49; // [rsp+D8h] [rbp+27h]

  v28 = 0LL;
  v27 = 0LL;
  v30 = 0;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v27);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v24 = 146;
    goto LABEL_23;
  }
  CurrentSurface = CDrawListBitmap::FromImageSource((CDrawListBitmap *)&v29, v27, *a2, 0);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v24 = 148;
    goto LABEL_23;
  }
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a2);
  v7 = *((_DWORD *)this + 25) == 1;
  v8 = *((float *)this + 44);
  v9 = *((float *)this + 46);
  v10 = *((float *)this + 47);
  v11 = *((float *)this + 45);
  v41 = v8;
  v43 = v9;
  v44 = v10;
  v42 = v11;
  if ( v7 )
  {
    v12 = *((float *)a2 + 3);
    v13 = *((float *)a2 + 2) * v9;
    v41 = *((float *)a2 + 2) * v8;
    v8 = v41;
    v9 = v13;
    v43 = v13;
    v10 = v12 * v10;
    v44 = v10;
    v42 = v12 * v11;
    v11 = v12 * v11;
  }
  v14 = *((_QWORD *)this + 20);
  v45 = v8 - (float)(v10 - v11);
  v46 = (float)(v9 - v8) + v11;
  if ( v14 )
  {
    v15 = (__m128)LODWORD(v37);
    v16 = (__m128)LODWORD(v38);
    v15.m128_f32[0] = v37 - v35;
    v16.m128_f32[0] = v38 - v36;
    v26 = _mm_unpacklo_ps(v15, v16).m128_u64[0];
    (*(void (__fastcall **)(__int64, unsigned __int64 *, CSurfaceDrawListBrush ***))(*(_QWORD *)v14 + 176LL))(
      v14,
      &v26,
      &v31);
    v17 = 0;
    v18 = &v41;
    do
    {
      ++v17;
      v19 = (float)(v18[1] * *((float *)&v32 + 1)) + (float)(*((float *)&v31 + 1) * *v18);
      *v18 = (float)((float)(v18[1] * *(float *)&v32) + (float)(*(float *)&v31 * *v18)) + v33;
      v18[1] = v19 + v34;
      v18 += 2;
    }
    while ( v17 < 3 );
  }
  CurrentSurface = CLinearGradientBrush::InferVisualToTextureTransform(this, &v41, &v35, v39);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v24 = 188;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_18029B7A8, 1u, CurrentSurface, v24);
    goto LABEL_24;
  }
  (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)&v29 + 1) + 40LL))(*((_QWORD *)&v29 + 1), &v26);
  v39[1] = 0;
  v39[3] = 0;
  v42 = 0.0;
  v43 = 0.0;
  v45 = 0.0;
  v46 = 0.0;
  v41 = *(float *)v39;
  v40 = (float)(v36 + 0.5) / (float)SHIDWORD(v26);
  v48 = v40;
  v44 = *(float *)&v39[2];
  v49 = FLOAT_1_0;
  v47 = v39[4];
  v20 = InterpolationMode::FromD2D1InterpolationMode(1LL);
  v32 = 0LL;
  v25[0] = v20;
  v25[1] = *((_BYTE *)this + 96);
  v31 = &v28;
  v25[2] = 1;
  LOBYTE(v33) = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(&v29, v25, &v41, &v32);
  if ( LOBYTE(v33) )
  {
    v21 = *v31;
    *v31 = v32;
    if ( v21 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1u);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v21, &dword_18029B7A8, 1u, v6, 0xCBu);
LABEL_24:
    CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a2);
    goto LABEL_16;
  }
  v22 = v28;
  v28 = 0LL;
  v26 = (unsigned __int64)v22;
  CBrushDrawListGenerator::AttachInput(a2, 0LL, &v26);
  if ( v26 )
    std::default_delete<CShape>::operator()();
  v6 = 0;
LABEL_16:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v29 + 8);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v27);
  if ( v28 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1u);
  return (unsigned int)v6;
}
