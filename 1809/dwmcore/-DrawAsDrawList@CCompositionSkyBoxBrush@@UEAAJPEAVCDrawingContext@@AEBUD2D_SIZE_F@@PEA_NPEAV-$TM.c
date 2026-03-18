/*
 * XREFs of ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180190EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180012220 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18002B8C8 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18009266C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B9D4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B30B0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::DrawAsDrawList(
        __int64 a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int D2DGeometry; // ebx
  float v7; // xmm0_4
  char v12; // r15
  struct CVisual *CurrentVisual; // rax
  int v14; // ecx
  struct CVisual *v15; // r12
  int v16; // edx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _BYTE v25[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  _BYTE v28[64]; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+A0h] [rbp-60h]
  struct ID2D1Geometry *v30; // [rsp+B0h] [rbp-50h] BYREF
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  FastRegion::Internal::CRgnData *v33[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v34; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v35; // [rsp+118h] [rbp+18h]

  D2DGeometry = 0;
  v7 = *a3;
  v27 = a5;
  v26 = a6;
  v25[0] = 0;
  v12 = 0;
  if ( v7 <= 0.0
    || a3[1] <= 0.0
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, a2, v25)
    || v25[0] )
  {
    goto LABEL_10;
  }
  v29 = 0;
  CMatrixStack::Top((CMatrixStack *)(a2 + 480), (struct CMILMatrix *)v28);
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 8));
  v14 = (int)*a3;
  v15 = CurrentVisual;
  v33[0] = (FastRegion::Internal::CRgnData *)&CRegionShape::`vftable';
  v12 = 1;
  v33[1] = 0LL;
  v33[2] = (FastRegion::Internal::CRgnData *)&v34;
  v34 = 0;
  v35 = 0LL;
  v30 = 0LL;
  v16 = (int)a3[1];
  v31 = v14;
  v32 = v16;
  v17 = CRegionShape::BuildFromRects((__int64)v33, (__int64)&v30, 1);
  D2DGeometry = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1DEu);
    goto LABEL_16;
  }
  v30 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v30);
  D2DGeometry = CRegionShape::GetD2DGeometry(v33, (const struct CMILMatrix *)v28, &v30);
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, D2DGeometry, 0x1E1u);
    goto LABEL_15;
  }
  v20 = CDrawingContext::PushD2DLayer((CDrawingContext *)a2, v15, 0LL, v30, 0LL, 1.0, 0, 0);
  D2DGeometry = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1E3u);
LABEL_15:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v30);
LABEL_16:
    CRegionShape::~CRegionShape((CRegionShape *)v33);
    return (unsigned int)D2DGeometry;
  }
  v22 = CSpriteVisualContent::DrawAsDrawList(a1, a2, a3, a4, v27, v26);
  D2DGeometry = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1E6u);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v30);
    CRegionShape::~CRegionShape((CRegionShape *)v33);
    goto LABEL_11;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v30);
  CRegionShape::~CRegionShape((CRegionShape *)v33);
  D2DGeometry = 0;
LABEL_10:
  if ( v12 )
LABEL_11:
    CDrawingContext::PopLayer((CDrawingContext *)a2);
  return (unsigned int)D2DGeometry;
}
