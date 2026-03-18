/*
 * XREFs of ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801D30F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18000CB60 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800282CC (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18003A3DC (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003BB3C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180072BF8 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A0A0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::DrawAsDrawList(
        __int64 a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        struct ID2D1Geometry *a5,
        struct ID2D1Geometry *a6)
{
  unsigned int D2DGeometry; // ebx
  float v7; // xmm0_4
  char v12; // r14
  struct CVisual *CurrentVisual; // rax
  int v14; // ecx
  struct CVisual *v15; // r12
  int v16; // edx
  signed int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  _BYTE v25[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct ID2D1Geometry *v26[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v27[64]; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-50h] BYREF
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  FastRegion::Internal::CRgnData *v32[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v33; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v34; // [rsp+118h] [rbp+18h]

  D2DGeometry = 0;
  v7 = *a3;
  v26[2] = a5;
  v26[1] = a6;
  v25[0] = 0;
  v12 = 0;
  if ( v7 <= 0.0
    || a3[1] <= 0.0
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 336LL))(a1, a2, v25)
    || v25[0] )
  {
    goto LABEL_10;
  }
  v28 = 0;
  CMatrixStack::Top((CMatrixStack *)(a2 + 480), (struct CMILMatrix *)v27);
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 8));
  v14 = (int)*a3;
  v15 = CurrentVisual;
  v32[0] = (FastRegion::Internal::CRgnData *)&CRegionShape::`vftable';
  v12 = 1;
  v32[1] = 0LL;
  v32[2] = (FastRegion::Internal::CRgnData *)&v33;
  v33 = 0;
  v34 = 0LL;
  v29 = 0LL;
  v16 = (int)a3[1];
  v30 = v14;
  v31 = v16;
  v17 = CRegionShape::BuildFromRects((__int64)v32, (__int64)&v29, 1);
  D2DGeometry = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1DCu, 0LL);
    goto LABEL_16;
  }
  v26[0] = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v26);
  D2DGeometry = CRegionShape::GetD2DGeometry(v32, (const struct CMILMatrix *)v27, v26);
  if ( (D2DGeometry & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, D2DGeometry, 0x1DFu, 0LL);
    goto LABEL_15;
  }
  v20 = CDrawingContext::PushD2DLayer((CDrawingContext *)a2, v15, 0LL, v26[0], 0LL, 1.0, 0, 0);
  D2DGeometry = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1E1u, 0LL);
LABEL_15:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v26);
LABEL_16:
    CRegionShape::~CRegionShape((CRegionShape *)v32);
    return D2DGeometry;
  }
  v22 = CSpriteVisualContent::DrawAsDrawList(a1, a2, a3, a4);
  D2DGeometry = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1E4u, 0LL);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v26);
    CRegionShape::~CRegionShape((CRegionShape *)v32);
    goto LABEL_11;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v26);
  CRegionShape::~CRegionShape((CRegionShape *)v32);
  D2DGeometry = 0;
LABEL_10:
  if ( v12 )
LABEL_11:
    CDrawingContext::PopLayer((CDrawingContext *)a2);
  return D2DGeometry;
}
