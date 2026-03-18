/*
 * XREFs of ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18016B6F4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18002407C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180038D08 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x180078EE4 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800AF024 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2600 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18016C44C (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801BD600 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801C1890 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1801C2260 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
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
  signed int D2DFactoryNoRef; // eax
  __int64 v16; // rcx
  _DWORD *v17; // r12
  const struct CMILMatrix *TopByReference; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  signed int v22; // eax
  __int64 v23; // rcx
  signed int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v28; // [rsp+28h] [rbp-79h]
  struct ID2D1PathGeometry *v29; // [rsp+48h] [rbp-59h] BYREF
  unsigned int BspPolygonListCount; // [rsp+50h] [rbp-51h]
  struct CD2DFactory *v31; // [rsp+58h] [rbp-49h] BYREF
  __int64 v32; // [rsp+60h] [rbp-41h]
  _OWORD v33[4]; // [rsp+68h] [rbp-39h] BYREF
  int v34; // [rsp+A8h] [rbp+7h]
  unsigned int v37; // [rsp+120h] [rbp+7Fh]

  v4 = 0;
  v31 = 0LL;
  v29 = 0LL;
  v5 = 0;
  BspPolygonListCount = CVisual::GetBspPolygonListCount(a2);
  v7 = 0;
  v37 = 0;
  v8 = 0;
  if ( !BspPolygonListCount )
    goto LABEL_29;
  v7 = 1;
  v9 = 0LL;
  v32 = 0LL;
  while ( 1 )
  {
    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList((__int64)v6);
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
    v37 = v5;
    v32 = v9;
    if ( v5 >= BspPolygonListCount )
    {
      v7 = 0;
      v8 = 0;
      goto LABEL_29;
    }
  }
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v14, &v31);
  v8 = 0;
  v4 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef >= 0 )
  {
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v31 + 3) + 80LL))(
                        *((_QWORD *)v31 + 3),
                        &v29);
    v4 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v28 = 2219;
      goto LABEL_27;
    }
    v17 = (_DWORD *)((char *)this + 480);
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    D2DFactoryNoRef = CPolygon::D2DGeometryFromPolygon((CPolygon *)v12, v29, TopByReference);
    v4 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v28 = 2223;
      goto LABEL_27;
    }
    D2DFactoryNoRef = CDrawingContext::PushD2DLayer(this, v13, 0LL, v29, 0LL, 1.0, 0, 0);
    v4 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v28 = 2225;
      goto LABEL_27;
    }
    v19 = *(_OWORD *)(v12 + 160);
    v20 = *(_OWORD *)(v12 + 144);
    v34 = *(_DWORD *)(v12 + 208);
    v33[1] = v19;
    v21 = *(_OWORD *)(v12 + 192);
    LOBYTE(v34) = v34 | 0xF;
    v8 = 1;
    v33[0] = v20;
    v33[3] = v21;
    v33[2] = 0LL;
    v22 = CMatrixStack::Push((CDrawingContext *)((char *)this + 480), (const struct CMILMatrix *)v33, 1);
    v4 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x8C3u, 0LL);
      goto LABEL_28;
    }
    v24 = CDrawingContext::DrawVisual((struct CComposition **)this, v13, 0);
    v4 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x8C6u, 0LL);
      goto LABEL_29;
    }
    if ( *v17 )
      --*v17;
    CDrawingContext::PopLayer(this);
    ReleaseInterface<IBitmapLock>((__int64 *)&v29);
    v9 = v32;
    v5 = v37;
    goto LABEL_18;
  }
  v28 = 2218;
LABEL_27:
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, D2DFactoryNoRef, v28, 0LL);
LABEL_28:
  v7 = 0;
LABEL_29:
  ReleaseInterface<IBitmapLock>((__int64 *)&v29);
  if ( v7 )
  {
    v26 = *((_DWORD *)this + 120);
    if ( v26 )
      *((_DWORD *)this + 120) = v26 - 1;
  }
  if ( v8 )
    CDrawingContext::PopLayer(this);
  return v4;
}
