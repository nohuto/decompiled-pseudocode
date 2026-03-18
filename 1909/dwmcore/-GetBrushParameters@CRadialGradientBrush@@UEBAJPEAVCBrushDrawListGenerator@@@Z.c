/*
 * XREFs of ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801F40B0
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
 *     ?SetCommonShaderConstants@CRadialGradientEffect@@QEAAXMM@Z @ 0x1802583A4 (-SetCommonShaderConstants@CRadialGradientEffect@@QEAAXMM@Z.c)
 *     ?SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z @ 0x1802583D0 (-SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z.c)
 */

__int64 __fastcall CRadialGradientBrush::GetBrushParameters(
        CRadialGradientEffect **this,
        struct CBrushDrawListGenerator *a2)
{
  signed int CurrentSurface; // eax
  __int64 v5; // rcx
  signed int v6; // ebx
  bool v7; // zf
  float *v8; // rdx
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm5_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  CRadialGradientEffect *v16; // rcx
  unsigned int v17; // ecx
  float *v18; // rax
  float v19; // xmm2_4
  __int64 v20; // rbx
  CRadialGradientEffect *v21; // rcx
  float v22; // xmm3_4
  FLOAT v23; // xmm1_4
  CSurfaceDrawListBrush *v24; // rcx
  CSurfaceDrawListBrush *v25; // rax
  __int64 v26; // rcx
  unsigned int v28; // [rsp+20h] [rbp-89h]
  __int16 v29; // [rsp+30h] [rbp-79h] BYREF
  char v30; // [rsp+32h] [rbp-77h]
  struct D2D_POINT_2F v31; // [rsp+40h] [rbp-69h] BYREF
  struct IImageSource *v32; // [rsp+48h] [rbp-61h] BYREF
  CSurfaceDrawListBrush *v33; // [rsp+50h] [rbp-59h] BYREF
  __int128 v34; // [rsp+58h] [rbp-51h] BYREF
  char v35; // [rsp+68h] [rbp-41h]
  int v36; // [rsp+70h] [rbp-39h] BYREF
  CSurfaceDrawListBrush **v37; // [rsp+78h] [rbp-31h] BYREF
  CSurfaceDrawListBrush *v38; // [rsp+80h] [rbp-29h] BYREF
  float v39; // [rsp+88h] [rbp-21h]
  float v40; // [rsp+8Ch] [rbp-1Dh]
  _BYTE v41[4]; // [rsp+90h] [rbp-19h] BYREF
  float v42; // [rsp+94h] [rbp-15h]
  float v43; // [rsp+98h] [rbp-11h]
  float v44; // [rsp+A0h] [rbp-9h]
  float v45; // [rsp+A4h] [rbp-5h]
  float v46; // [rsp+A8h] [rbp-1h]
  float v47; // [rsp+ACh] [rbp+3h]
  int v48; // [rsp+B0h] [rbp+7h]
  int v49; // [rsp+B4h] [rbp+Bh]
  float v50; // [rsp+B8h] [rbp+Fh] BYREF
  float v51; // [rsp+BCh] [rbp+13h]
  float v52; // [rsp+C0h] [rbp+17h]
  float v53; // [rsp+C4h] [rbp+1Bh]
  float v54; // [rsp+C8h] [rbp+1Fh]
  float v55; // [rsp+CCh] [rbp+23h]
  int v56; // [rsp+D0h] [rbp+27h]
  int v57; // [rsp+D4h] [rbp+2Bh]
  int v58; // [rsp+D8h] [rbp+2Fh]

  v33 = 0LL;
  v32 = 0LL;
  v35 = 0;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32);
  CurrentSurface = CGradientBrush::GetCurrentSurface(
                     (CGradientBrush *)this,
                     *(_QWORD *)a2,
                     (__int64 *)&v32,
                     (__int64)v41);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v28 = 80;
    goto LABEL_24;
  }
  CurrentSurface = CDrawListBitmap::FromImageSource(
                     (struct IImageSource **)&v34,
                     v32,
                     *(const struct CDrawingContext **)a2,
                     0);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v28 = 82;
    goto LABEL_24;
  }
  CBrushDrawListGenerator::Reset(a2);
  v7 = *((_DWORD *)this + 27) == 1;
  v8 = (float *)((char *)a2 + 8);
  v9 = *((float *)this + 48);
  v10 = *((float *)this + 49);
  v11 = v9 + *((float *)this + 50);
  v50 = v9;
  v12 = v10 + *((float *)this + 51);
  v51 = v10;
  v53 = v10;
  v52 = v11;
  v54 = v9;
  v55 = v12;
  if ( v7 )
  {
    v13 = v9 * *v8;
    v14 = v11 * *v8;
    v15 = *((float *)a2 + 3) * v12;
    v51 = *((float *)a2 + 3) * v10;
    v53 = v51;
    v50 = v13;
    v52 = v14;
    v54 = v13;
    v55 = v15;
  }
  v16 = this[21];
  if ( v16 )
  {
    (*(void (__fastcall **)(CRadialGradientEffect *, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v16 + 216LL))(
      v16,
      v8,
      &v37);
    v17 = 0;
    v18 = &v50;
    do
    {
      ++v17;
      v19 = (float)(*v18 * *((float *)&v37 + 1)) + (float)(*((float *)&v38 + 1) * v18[1]);
      *v18 = (float)((float)(v18[1] * *(float *)&v38) + (float)(*v18 * *(float *)&v37)) + v39;
      v18[1] = v19 + v40;
      v18 += 2;
    }
    while ( v17 < 3 );
  }
  CurrentSurface = CGradientBrush::InferVisualToTextureTransform((__int64)this, (__int64)&v50, (__int64)v41);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v28 = 117;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(v5, (const int *)"\a", 1u, CurrentSurface, v28, 0LL);
    goto LABEL_25;
  }
  v20 = *((_QWORD *)&v34 + 1);
  (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)&v34 + 1) + 40LL))(*((_QWORD *)&v34 + 1), &v36);
  (*(void (__fastcall **)(__int64, struct D2D_POINT_2F *))(*(_QWORD *)v20 + 40LL))(v20, &v31);
  CRadialGradientEffect::SetCommonShaderConstants(
    this[23],
    0.5 / (float)v36,
    (float)(v42 + 0.5) / (float)SLODWORD(v31.y));
  v21 = this[23];
  if ( !*((_BYTE *)v21 + 68) )
  {
    v22 = v43;
    if ( *((_BYTE *)this + 104) == 1 )
      v22 = v43 - 1.0;
    v23 = (float)(*((float *)this + 53) / *((float *)this + 51)) * (float)(v22 / v43);
    v31.x = (float)(*((float *)this + 52) / *((float *)this + 50)) * (float)(v22 / v43);
    v31.y = v23;
    CRadialGradientEffect::SetNonCenteredShaderConstants(v21, &v31, v43, v22);
  }
  v52 = 0.0;
  v55 = 0.0;
  v38 = 0LL;
  v50 = v44;
  v51 = v45;
  v53 = v46;
  v54 = v47;
  v56 = v48;
  v57 = v49;
  v58 = 1065353216;
  v37 = &v33;
  LOBYTE(v39) = 1;
  LOBYTE(v29) = InterpolationMode::FromD2D1InterpolationMode(1);
  HIBYTE(v29) = *((_BYTE *)this + 104);
  v30 = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(
         (struct CSurfaceDrawListBrush *)&v34,
         &v29,
         (__int64)&v50,
         &v38);
  if ( LOBYTE(v39) )
  {
    v24 = *v37;
    *v37 = v38;
    if ( v24 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v24, 1);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v24, (const int *)"\a", 1u, v6, 0x9Eu, 0LL);
LABEL_25:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_26;
  }
  v25 = v33;
  v33 = 0LL;
  v31 = (struct D2D_POINT_2F)v25;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, &v31);
  if ( v31 )
    std::default_delete<CShape>::operator()(v26, *(__int64 (__fastcall ****)(_QWORD, __int64))&v31);
  v6 = 0;
LABEL_26:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v34 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v34);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32);
  if ( v33 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v33, 1);
  return (unsigned int)v6;
}
