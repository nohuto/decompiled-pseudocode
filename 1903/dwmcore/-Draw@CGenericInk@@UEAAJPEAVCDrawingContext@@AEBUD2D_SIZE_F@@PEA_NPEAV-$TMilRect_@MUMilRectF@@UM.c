/*
 * XREFs of ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180215040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003BBBC (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InflateRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAUMilPointAndSizeL@@@Z @ 0x18015B08C (-InflateRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x18016D600 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x1801708F8 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18020F150 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1802157A4 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStroke.c)
 *     ?TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180251FD4 (-TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA.c)
 */

__int64 __fastcall CGenericInk::Draw(__int64 a1, struct ID2DContext **a2)
{
  int DirectInkWetStroke; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  struct IDCompositionDirectInkWetStrokePartner *v6; // rbx
  bool v7; // r15
  bool v8; // di
  int v9; // esi
  int v10; // eax
  __int64 v11; // r8
  float v12; // xmm4_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  int v16; // eax
  bool v18[8]; // [rsp+30h] [rbp-81h] BYREF
  CDrawingContext *v19; // [rsp+38h] [rbp-79h]
  int v20; // [rsp+40h] [rbp-71h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v21; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v22[64]; // [rsp+50h] [rbp-61h] BYREF
  int v23; // [rsp+90h] [rbp-21h]
  float v24; // [rsp+A0h] [rbp-11h] BYREF
  float v25; // [rsp+A4h] [rbp-Dh]
  float v26; // [rsp+A8h] [rbp-9h]
  float v27; // [rsp+ACh] [rbp-5h]
  __int128 v28; // [rsp+B0h] [rbp-1h] BYREF
  __int128 v29; // [rsp+C0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  v21 = 0LL;
  v19 = (CDrawingContext *)a2;
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke((CGenericInk *)a1, a2[48], &v21);
  v4 = DirectInkWetStroke;
  if ( DirectInkWetStroke < 0 )
  {
    v5 = 187LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)DirectInkWetStroke);
    goto LABEL_41;
  }
  v6 = v21;
  v7 = 0;
  v8 = 0;
  v18[0] = 0;
  v18[1] = 0;
  if ( CCommonRegistryData::m_fGammaBlendPencil )
  {
    DirectInkWetStroke = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, int *))(*(_QWORD *)v21 + 64LL))(
                           v21,
                           &v20);
    v4 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v5 = 197LL;
      goto LABEL_32;
    }
    v8 = v20 && CDrawingContext::IsHDRTarget(v19);
  }
  v9 = 0;
  if ( *(_QWORD *)(a1 + 224) )
  {
    v10 = CWetInkManager::TryRegisterSuperWetForDraw(
            *(CWetInkManager **)(*(_QWORD *)(a1 + 16) + 104LL),
            (struct ISuperWetSource *)((a1 + 64) & -(__int64)(a1 != 0)),
            v19,
            v8,
            v18);
    v7 = v18[0];
    v9 = v10;
  }
  if ( v8 )
  {
    v29 = 0uLL;
    DirectInkWetStroke = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, __int128 *))(*(_QWORD *)v6 + 32LL))(
                           v6,
                           &v29);
    v4 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v5 = 215LL;
      goto LABEL_32;
    }
    v23 = 0;
    v28 = v29;
    CMatrixStack::Top((CDrawingContext *)((char *)v19 + 480), (struct CMILMatrix *)v22);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v22, (__int64)&v28, &v24);
    CScopedClipStack::GetClipBoundsWorld((__int64)v19 + 1008, (__int64)&v28);
    v12 = v24;
    if ( *(float *)&v28 > v24 )
    {
      v24 = *(float *)&v28;
      v12 = *(float *)&v28;
    }
    v13 = v25;
    if ( *((float *)&v28 + 1) > v25 )
    {
      v25 = *((float *)&v28 + 1);
      v13 = *((float *)&v28 + 1);
    }
    v14 = v26;
    if ( v26 > *((float *)&v28 + 2) )
    {
      v26 = *((float *)&v28 + 2);
      v14 = *((float *)&v28 + 2);
    }
    v15 = v27;
    if ( v27 > *((float *)&v28 + 3) )
    {
      v27 = *((float *)&v28 + 3);
      v15 = *((float *)&v28 + 3);
    }
    if ( v14 <= v12 || v15 <= v13 )
    {
      v27 = 0.0;
      v26 = 0.0;
      v25 = 0.0;
      v24 = 0.0;
    }
    DirectInkWetStroke = InflateRectFToPointAndSizeL(
                           &v24,
                           (__int64)&v28,
                           v11,
                           COERCE_DOUBLE((unsigned __int64)HIDWORD(v28)));
    v4 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v5 = 234LL;
      goto LABEL_32;
    }
    if ( SDWORD2(v28) > 0 && SHIDWORD(v28) > 0 )
    {
      DirectInkWetStroke = CDrawingContext::PushGammaBlendLayer(v19, (const struct MilPointAndSizeL *)&v28);
      v4 = DirectInkWetStroke;
      if ( DirectInkWetStroke < 0 )
      {
        v5 = 238LL;
        goto LABEL_32;
      }
      v18[1] = 1;
    }
  }
  dword_18033C774 |= 1u;
  v16 = CDrawingContext::DrawGenericInk(v19, v6, !v7);
  v4 = v16;
  if ( v16 >= 0 )
  {
    if ( v9 >= 0 )
    {
      **(_DWORD **)(a1 + 232) = 0;
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x102,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v9);
      v4 = v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x100,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v16);
  }
  if ( v18[1] )
    CDrawingContext::PopLayerInternal((__int64)v19);
LABEL_41:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v21);
  return v4;
}
