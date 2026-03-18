/*
 * XREFs of ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z @ 0x1801CB5B4
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801C8900 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x180013B8C (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18002AF70 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetLightToCameraMatrix@CProjectedShadow@@AEBAJPEBVCDrawingContext@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x1801CAAF4 (-GetLightToCameraMatrix@CProjectedShadow@@AEBAJPEBVCDrawingContext@@PEBVCCompositionLight@@AEBUf.c)
 *     ??0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x1801DE33C (--0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x1801DE394 (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z.c)
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1801DEA58 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801E2D18 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

__int64 __fastcall CProjectedShadow::IsCasterInBetweenLightAndReceiver(
        CProjectedShadow *this,
        const struct CDrawingContext *a2,
        bool *a3)
{
  struct CVisual *v5; // r15
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm2_4
  CProjectedShadow *v9; // rcx
  const struct CCompositionLight *v10; // r10
  const struct CDrawingContext *v11; // r11
  int LightToCameraMatrix; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  float v20; // [rsp+38h] [rbp-D0h] BYREF
  float v21; // [rsp+3Ch] [rbp-CCh] BYREF
  struct D2D_VECTOR_4F v22; // [rsp+40h] [rbp-C8h] BYREF
  struct D2D_VECTOR_4F v23; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+78h] [rbp-90h]
  __int128 v26; // [rsp+88h] [rbp-80h]
  __int128 v27; // [rsp+98h] [rbp-70h]
  int v28; // [rsp+A8h] [rbp-60h]
  __int128 v29; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v30; // [rsp+C8h] [rbp-40h]
  __int128 v31; // [rsp+D8h] [rbp-30h]
  __int128 v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F8h] [rbp-10h]
  _OWORD v34[4]; // [rsp+108h] [rbp+0h] BYREF
  int v35; // [rsp+148h] [rbp+40h]
  _BYTE v36[64]; // [rsp+158h] [rbp+50h] BYREF
  int v37; // [rsp+198h] [rbp+90h]
  _BYTE v38[176]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v39[176]; // [rsp+258h] [rbp+150h] BYREF

  v5 = *(struct CVisual **)(*((_QWORD *)this + 10) + 56LL);
  CVisual::GetEffectiveSize(*(CVisual **)(*((_QWORD *)this + 9) + 56LL), &v20, &v21);
  v6 = v21;
  v7 = v20;
  v22.z = 0.0;
  v22.y = v21 * 0.5;
  v22.w = FLOAT_1_0;
  v22.x = v20 * 0.5;
  CMILMatrix::Transform4DVector((CProjectedShadow *)((char *)this + 312), &v23, &v22);
  v28 = 0;
  v22.x = v23.x / v23.w;
  v8 = *((float *)this + 24);
  v22.y = v23.y / v23.w;
  v22.z = v23.z / v23.w;
  v20 = v7 + (float)(v8 + v8);
  v21 = v6 + (float)(v8 + v8);
  CMILMatrix::SetTranslation(
    (CMILMatrix *)&v24,
    COERCE_FLOAT(LODWORD(v8) ^ _xmm),
    COERCE_FLOAT(LODWORD(v8) ^ _xmm),
    0.0);
  v37 = 0;
  LightToCameraMatrix = CProjectedShadow::GetLightToCameraMatrix(
                          v9,
                          v11,
                          v10,
                          (const struct Windows::Foundation::Numerics::float3 *)&v22,
                          (struct CMILMatrix *)v36);
  v14 = LightToCameraMatrix;
  if ( LightToCameraMatrix < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, LightToCameraMatrix, 0x368u);
  }
  else
  {
    v15 = *(_OWORD *)((char *)this + 244);
    v16 = *(_OWORD *)((char *)this + 260);
    v35 = *((_DWORD *)this + 77);
    v34[0] = v15;
    v17 = *(_OWORD *)((char *)this + 276);
    v34[1] = v16;
    v18 = *(_OWORD *)((char *)this + 292);
    v34[2] = v17;
    v34[3] = v18;
    CMILMatrix::Multiply((CMILMatrix *)v34, (const struct CMILMatrix *)v36);
    v29 = v24;
    v33 = v28;
    v30 = v25;
    v31 = v26;
    v32 = v27;
    CMILMatrix::Multiply((CMILMatrix *)&v29, (CProjectedShadow *)((char *)this + 312));
    v28 = v33;
    v24 = v29;
    v25 = v30;
    v26 = v31;
    v27 = v32;
    CMILMatrix::Multiply((CMILMatrix *)&v24, (const struct CMILMatrix *)v36);
    CVisualDepthGeometry::CVisualDepthGeometry((CVisualDepthGeometry *)v38, v5, (const struct CMILMatrix *)v34);
    CVisualDepthGeometry::CVisualDepthGeometry(
      (CVisualDepthGeometry *)v39,
      (const struct Windows::Foundation::Numerics::float2 *)&v20,
      (const struct CMILMatrix *)&v24);
    *a3 = (unsigned int)CVisualDepthGeometry::GetRelativeOrder(v39, v38) == 0;
  }
  return v14;
}
