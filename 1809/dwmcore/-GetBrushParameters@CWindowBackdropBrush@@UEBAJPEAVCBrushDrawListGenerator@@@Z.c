/*
 * XREFs of ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801CD790
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180003AD8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18002781C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18005C55C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18008E5DC (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800AE7D4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowBackdropBrush::GetBrushParameters(
        CWindowBackdropBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int WindowBackgroundTreatmentEffectInput; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // edi
  CSurfaceDrawListBrush *v7; // r8
  CSurfaceDrawListBrush *v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int16 v12; // [rsp+30h] [rbp-69h] BYREF
  char v13; // [rsp+32h] [rbp-67h]
  CSurfaceDrawListBrush *v14; // [rsp+40h] [rbp-59h] BYREF
  CSurfaceDrawListBrush *v15; // [rsp+48h] [rbp-51h] BYREF
  CSurfaceDrawListBrush **v16; // [rsp+50h] [rbp-49h]
  CSurfaceDrawListBrush *v17; // [rsp+58h] [rbp-41h] BYREF
  char v18; // [rsp+60h] [rbp-39h]
  __int128 v19; // [rsp+70h] [rbp-29h] BYREF
  char v20; // [rsp+80h] [rbp-19h]
  __int128 v21; // [rsp+88h] [rbp-11h]
  char v22; // [rsp+9Dh] [rbp+4h]
  _QWORD v23[8]; // [rsp+A0h] [rbp+7h] BYREF

  CBrushDrawListGenerator::Reset(a2);
  v20 = 0;
  v23[0] = 0LL;
  v19 = 0LL;
  v23[1] = 0LL;
  EffectInput::Reset((struct EffectInput *)&v19);
  WindowBackgroundTreatmentEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                           *(CDrawingContext **)a2,
                                           (const struct D2D_SIZE_F *)a2 + 1,
                                           (struct EffectInput *)&v19);
  if ( WindowBackgroundTreatmentEffectInput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, WindowBackgroundTreatmentEffectInput, 0x32u);
LABEL_15:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_16;
  }
  if ( v22 )
  {
    v10 = v21;
    *((_BYTE *)a2 + 76) = 0;
    *(_OWORD *)((char *)a2 + 20) = v10;
    goto LABEL_16;
  }
  v14 = 0LL;
  v17 = 0LL;
  v12 = SamplerMode::k_ClampClampLinear;
  v13 = 1;
  v16 = &v14;
  v18 = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(
         (struct CSurfaceDrawListBrush *)&v19,
         &v12,
         (__int64)v23,
         (__int64 *)&v17);
  if ( v18 )
  {
    v5 = (__int64)v17;
    v7 = *v16;
    *v16 = v17;
    if ( v7 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v7, 1);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6, 0x3Cu);
    if ( v14 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v14, 1);
    goto LABEL_15;
  }
  v8 = v14;
  v14 = 0LL;
  v15 = v8;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, &v15);
  if ( v15 )
    std::default_delete<CShape>::operator()(v9, (__int64 (__fastcall ***)(_QWORD, __int64))v15);
  if ( v14 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v14, 1);
LABEL_16:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v19 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v19);
  return 0LL;
}
