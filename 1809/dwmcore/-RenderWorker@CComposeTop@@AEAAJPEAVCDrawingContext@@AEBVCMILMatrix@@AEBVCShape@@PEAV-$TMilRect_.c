/*
 * XREFs of ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDEDC
 * Callers:
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18015B2EC (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDC5C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180014BE0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18003066C (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180055A60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180165BA0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CComposeTop::RenderWorker(
        struct IImageSource **a1,
        CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CShape *a4,
        _OWORD *a5)
{
  char v8; // si
  char v9; // r14
  __int64 (__fastcall *v10)(struct CShape *, __int128 *, _BYTE *); // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v23; // [rsp+30h] [rbp-91h] BYREF
  _DWORD v24[11]; // [rsp+34h] [rbp-8Dh] BYREF
  _BYTE v25[64]; // [rsp+60h] [rbp-61h] BYREF
  int v26; // [rsp+A0h] [rbp-21h]
  __int128 v27; // [rsp+B0h] [rbp-11h] BYREF

  v26 = 0;
  v8 = 0;
  v9 = 0;
  CMILMatrix::Multiply((const struct CMILMatrix *)(a1 + 2), a3, (struct CMILMatrix *)v25);
  v10 = *(__int64 (__fastcall **)(struct CShape *, __int128 *, _BYTE *))(*(_QWORD *)a4 + 32LL);
  v27 = 0uLL;
  v11 = v10(a4, &v27, v25);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x16Du);
LABEL_14:
    if ( !v8 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( !*a1 )
  {
LABEL_12:
    v9 = v8;
    goto LABEL_14;
  }
  memset_0(v24, 0, 0x24uLL);
  v24[0] = 0;
  v23 = 2;
  v14 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v23, 1);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x17Bu);
    goto LABEL_18;
  }
  v9 = 1;
  v16 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v25, 0, 1);
  v13 = v16;
  if ( v16 >= 0 )
  {
    v8 = 1;
    v18 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
    v13 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x182u);
LABEL_15:
      CDrawingContext::PopTransformInternal(a2, 1);
LABEL_16:
      if ( !v9 )
        goto LABEL_18;
      goto LABEL_17;
    }
    v20 = CDrawingContext::FillShapeWithBitmap(a2, *a1, (struct CMILMatrix *)&CMILMatrix::Identity, a4, 1);
    v13 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x187u);
      goto LABEL_15;
    }
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x17Eu);
LABEL_17:
  CDrawingContext::PopRenderOptionsInternal(a2, 1);
LABEL_18:
  if ( a5 )
    *a5 = v27;
  return v13;
}
