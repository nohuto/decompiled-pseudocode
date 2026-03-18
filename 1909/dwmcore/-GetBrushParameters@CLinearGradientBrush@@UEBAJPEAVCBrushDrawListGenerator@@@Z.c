/*
 * XREFs of ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180018DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800190F0 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUM.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800194BC (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV-$TMilRect.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18003A18C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003C398 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18003E798 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180057610 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180066E80 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BB2A0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBrushParameters(
        CLinearGradientBrush *this,
        const struct CDrawingContext **a2)
{
  int CurrentSurface; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  bool v7; // zf
  float *v8; // rdx
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  __int64 v15; // rcx
  unsigned int v16; // ecx
  float *v17; // rax
  float v18; // xmm2_4
  CSurfaceDrawListBrush *v19; // rcx
  CSurfaceDrawListBrush *v20; // rax
  __int64 v21; // rcx
  unsigned int v23; // [rsp+28h] [rbp-89h]
  _BYTE v24[16]; // [rsp+38h] [rbp-79h] BYREF
  struct IImageSource *v25; // [rsp+48h] [rbp-69h] BYREF
  CSurfaceDrawListBrush *v26; // [rsp+50h] [rbp-61h] BYREF
  CSurfaceDrawListBrush *v27; // [rsp+58h] [rbp-59h] BYREF
  __int128 v28; // [rsp+60h] [rbp-51h] BYREF
  char v29; // [rsp+70h] [rbp-41h]
  CSurfaceDrawListBrush **v30; // [rsp+78h] [rbp-39h] BYREF
  CSurfaceDrawListBrush *v31; // [rsp+80h] [rbp-31h] BYREF
  float v32; // [rsp+88h] [rbp-29h]
  float v33; // [rsp+8Ch] [rbp-25h]
  _DWORD v34[5]; // [rsp+90h] [rbp-21h] BYREF
  float v35; // [rsp+A4h] [rbp-Dh]
  _BYTE v36[4]; // [rsp+A8h] [rbp-9h] BYREF
  float v37; // [rsp+ACh] [rbp-5h]
  float v38; // [rsp+B8h] [rbp+7h] BYREF
  float v39; // [rsp+BCh] [rbp+Bh]
  float v40; // [rsp+C0h] [rbp+Fh]
  float v41; // [rsp+C4h] [rbp+13h]
  float v42; // [rsp+C8h] [rbp+17h]
  float v43; // [rsp+CCh] [rbp+1Bh]
  int v44; // [rsp+D0h] [rbp+1Fh]
  float v45; // [rsp+D4h] [rbp+23h]
  int v46; // [rsp+D8h] [rbp+27h]

  v26 = 0LL;
  v25 = 0LL;
  v29 = 0;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v25);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v23 = 111;
    goto LABEL_23;
  }
  CurrentSurface = CDrawListBitmap::FromImageSource((CDrawListBitmap *)&v28, v25, *a2, 0);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v23 = 113;
    goto LABEL_23;
  }
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a2);
  v7 = *((_DWORD *)this + 27) == 1;
  v8 = (float *)(a2 + 1);
  v9 = *((float *)this + 47);
  v10 = *((float *)this + 48);
  v11 = *((float *)this + 49);
  v12 = *((float *)this + 46);
  v39 = v9;
  v40 = v10;
  v41 = v11;
  v38 = v12;
  if ( v7 )
  {
    v13 = *((float *)a2 + 3);
    v9 = v9 * v13;
    v14 = *v8 * v10;
    v12 = *v8 * v12;
    v38 = v12;
    v10 = v14;
    v39 = v9;
    v40 = v14;
    v11 = v13 * v11;
    v41 = v11;
  }
  v15 = *((_QWORD *)this + 21);
  v42 = v12 - (float)(v11 - v9);
  v43 = (float)(v10 - v12) + v9;
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v15 + 216LL))(v15, v8, &v30);
    v16 = 0;
    v17 = &v38;
    do
    {
      ++v16;
      v18 = (float)(v17[1] * *((float *)&v31 + 1)) + (float)(*((float *)&v30 + 1) * *v17);
      *v17 = (float)((float)(v17[1] * *(float *)&v31) + (float)(*(float *)&v30 * *v17)) + v32;
      v17[1] = v18 + v33;
      v17 += 2;
    }
    while ( v16 < 3 );
  }
  CurrentSurface = CGradientBrush::InferVisualToTextureTransform(this, &v38, v36, v34);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v23 = 149;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(v5, (const int *const)"\a", 1u, CurrentSurface, v23, 0LL);
    goto LABEL_24;
  }
  (*(void (__fastcall **)(_QWORD, CSurfaceDrawListBrush **))(**((_QWORD **)&v28 + 1) + 40LL))(
    *((_QWORD *)&v28 + 1),
    &v27);
  v34[1] = 0;
  v34[3] = 0;
  v39 = 0.0;
  v40 = 0.0;
  v42 = 0.0;
  v43 = 0.0;
  v31 = 0LL;
  LOBYTE(v32) = 1;
  v30 = &v26;
  v38 = *(float *)v34;
  v35 = (float)(v37 + 0.5) / (float)SHIDWORD(v27);
  v45 = v35;
  v41 = *(float *)&v34[2];
  v46 = (int)FLOAT_1_0;
  v44 = v34[4];
  v24[0] = InterpolationMode::FromD2D1InterpolationMode(1LL);
  v24[1] = *((_BYTE *)this + 104);
  v24[2] = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(&v28, v24, &v38, &v31);
  if ( LOBYTE(v32) )
  {
    v19 = *v30;
    *v30 = v31;
    if ( v19 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1u);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, (const int *const)"\a", 1u, v6, 0xA4u, 0LL);
LABEL_24:
    CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a2);
    goto LABEL_16;
  }
  v20 = v26;
  v26 = 0LL;
  v27 = v20;
  CBrushDrawListGenerator::AttachInput(a2, 0LL, &v27);
  if ( v27 )
    std::default_delete<CShape>::operator()(v21, (__int64 (__fastcall ***)(_QWORD, __int64))v27);
  v6 = 0;
LABEL_16:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v28 + 8);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v25);
  if ( v26 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v26, 1u);
  return (unsigned int)v6;
}
