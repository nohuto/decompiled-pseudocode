/*
 * XREFs of ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180162558
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18002B8C8 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18006CBF4 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180163988 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x1801B6834 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801B6890 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1801B7298 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801BF684 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBspPolygonList(CDrawingContext *this, struct CVisual *a2, struct CVisual *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // r12d
  struct CVisual *v6; // r11
  char v7; // di
  char v8; // si
  __int64 v9; // rsi
  _QWORD *BspPolygonList; // rax
  const struct CVisual *v11; // rdx
  __int64 v12; // r15
  struct CVisual *v13; // r13
  CD3DDeviceManager *v14; // rcx
  int D2DFactoryNoRef; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _DWORD *v19; // r12
  const struct CMILMatrix *TopByReference; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  struct ID2D1PathGeometry *v34; // [rsp+48h] [rbp-59h] BYREF
  unsigned int BspPolygonListCount; // [rsp+50h] [rbp-51h]
  struct CD2DFactory *v36; // [rsp+58h] [rbp-49h] BYREF
  __int64 v37; // [rsp+60h] [rbp-41h]
  _OWORD v38[4]; // [rsp+68h] [rbp-39h] BYREF
  int v39; // [rsp+A8h] [rbp+7h]
  unsigned int v42; // [rsp+120h] [rbp+7Fh]

  v4 = 0;
  v36 = 0LL;
  v34 = 0LL;
  v5 = 0;
  BspPolygonListCount = CVisual::GetBspPolygonListCount(a2);
  v7 = 0;
  v42 = 0;
  v8 = 0;
  if ( !BspPolygonListCount )
    goto LABEL_28;
  v7 = 1;
  v9 = 0LL;
  v37 = 0LL;
  while ( 1 )
  {
    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList(v6);
    v11 = a3;
    v12 = *(_QWORD *)(v9 + *BspPolygonList);
    v13 = *(struct CVisual **)(v12 + 216);
    if ( v13 != v6 )
      v11 = (const struct CVisual *)*((_QWORD *)v13 + 10);
    if ( !*(_BYTE *)(v12 + 240) && *((_DWORD *)this + 66) )
      goto LABEL_19;
    if ( CVisual::IsSimple3DRootOrHasEffects(*(CVisual **)(v12 + 216), v11) )
      break;
    CDrawingContext::DrawPolygon(this, (struct CPolygon *)v12);
LABEL_18:
    v6 = a2;
LABEL_19:
    ++v5;
    v9 += 8LL;
    v42 = v5;
    v37 = v9;
    if ( v5 >= BspPolygonListCount )
    {
      v7 = 0;
      v8 = 0;
      goto LABEL_28;
    }
  }
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v14, &v36);
  v8 = 0;
  v4 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v36 + 3) + 80LL))(
            *((_QWORD *)v36 + 3),
            &v34);
    v4 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x86Eu);
      goto LABEL_27;
    }
    v19 = (_DWORD *)((char *)this + 480);
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    v21 = CPolygon::D2DGeometryFromPolygon((CPolygon *)v12, v34, TopByReference);
    v4 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x872u);
      goto LABEL_27;
    }
    v23 = CDrawingContext::PushD2DLayer(this, v13, 0LL, v34, 0LL, 1.0, 0, 0);
    v4 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x874u);
      goto LABEL_27;
    }
    v25 = *(_OWORD *)(v12 + 160);
    v26 = *(_OWORD *)(v12 + 144);
    v39 = *(_DWORD *)(v12 + 208);
    v38[1] = v25;
    v27 = *(_OWORD *)(v12 + 192);
    LOBYTE(v39) = v39 | 0xF;
    v8 = 1;
    v38[0] = v26;
    v38[3] = v27;
    v38[2] = 0LL;
    v28 = CMatrixStack::Push((CDrawingContext *)((char *)this + 480), (const struct CMILMatrix *)v38, 1);
    v4 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x886u);
      v7 = 0;
      goto LABEL_28;
    }
    v30 = CDrawingContext::DrawVisual((struct CComposition **)this, v13, 0);
    v4 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x889u);
      goto LABEL_28;
    }
    if ( *v19 )
      --*v19;
    CDrawingContext::PopLayer(this);
    ReleaseInterface<ID2D1Geometry>((__int64 *)&v34);
    v9 = v37;
    v5 = v42;
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, D2DFactoryNoRef, 0x86Du);
LABEL_27:
  v7 = 0;
LABEL_28:
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v34);
  if ( v7 )
  {
    v32 = *((_DWORD *)this + 120);
    if ( v32 )
      *((_DWORD *)this + 120) = v32 - 1;
  }
  if ( v8 )
    CDrawingContext::PopLayer(this);
  return v4;
}
