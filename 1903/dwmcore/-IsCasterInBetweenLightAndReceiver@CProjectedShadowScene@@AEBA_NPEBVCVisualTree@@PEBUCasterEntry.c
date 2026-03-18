/*
 * XREFs of ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x180008960
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008230 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x1800088FC (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x180008ADC (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 *     ??0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180008B60 (--0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x180008BB8 (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071C38 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18008BC4C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

bool __fastcall CProjectedShadowScene::IsCasterInBetweenLightAndReceiver(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        const struct CProjectedShadowScene::CasterEntry *a3,
        const struct CProjectedShadowScene::ReceiverEntry *a4,
        float a5)
{
  __int64 v7; // r9
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  float v13; // [rsp+20h] [rbp-E0h] BYREF
  float v14[3]; // [rsp+24h] [rbp-DCh] BYREF
  _OWORD v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+70h] [rbp-90h]
  _OWORD v17[4]; // [rsp+80h] [rbp-80h] BYREF
  int v18; // [rsp+C0h] [rbp-40h]
  _OWORD v19[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v20; // [rsp+110h] [rbp+10h]
  _BYTE v21[32]; // [rsp+120h] [rbp+20h] BYREF
  int v22; // [rsp+140h] [rbp+40h]
  _BYTE v23[32]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v24; // [rsp+1F0h] [rbp+F0h]

  CVisual::GetEffectiveSize(*(CVisual **)(*(_QWORD *)a3 + 56LL), &v13, v14);
  v16 = 0;
  v14[0] = v14[0] + (float)(a5 + a5);
  v13 = v13 + (float)(a5 + a5);
  CMILMatrix::SetTranslation((CMILMatrix *)v15, COERCE_FLOAT(LODWORD(a5) ^ _xmm), COERCE_FLOAT(LODWORD(a5) ^ _xmm), 0.0);
  v8 = *(_OWORD *)(v7 + 48);
  v9 = *(_OWORD *)(v7 + 32);
  v18 = *(_DWORD *)(v7 + 96);
  v17[1] = v8;
  v10 = *(_OWORD *)(v7 + 80);
  v17[0] = v9;
  v11 = *(_OWORD *)(v7 + 64);
  v17[3] = v10;
  v17[2] = v11;
  CMILMatrix::Multiply((CMILMatrix *)v17, (const struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
  v19[0] = v15[0];
  v19[1] = v15[1];
  v19[2] = v15[2];
  v19[3] = v15[3];
  v20 = v16;
  CMILMatrix::Multiply((CMILMatrix *)v19, (const struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 16));
  CVisualDepthGeometry::CVisualDepthGeometry(
    (CVisualDepthGeometry *)v21,
    *(struct CVisual **)(*(_QWORD *)a4 + 56LL),
    (const struct CMILMatrix *)v17);
  CVisualDepthGeometry::CVisualDepthGeometry(
    (CVisualDepthGeometry *)v23,
    (const struct Windows::Foundation::Numerics::float2 *)&v13,
    (const struct CMILMatrix *)v19);
  v22 = 1;
  v24 = 2;
  return (unsigned int)CVisualDepthGeometry::GetRelativeOrder(v23, v21) == 0;
}
