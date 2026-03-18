/*
 * XREFs of ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x180177BFC
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180198EA0 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800643B0 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180162D30 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x1801662DC (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180177EC4 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V?$com_ptr_t@UIDCompositionDirectInkWetStrokePartner@@Uerr_returncode_policy@wil@@@wil@@_NPEA_N@Z @ 0x180177F14 (-TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V-$com_ptr_t@UI.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180199210 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStroke.c)
 *     ?InflateRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAUMilPointAndSizeL@@@Z @ 0x1801E3504 (-InflateRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 */

__int64 __fastcall CWetInkManager::Draw(CWetInkManager *this, struct ID2DContext **a2, struct CGenericInk *a3)
{
  int DirectInkWetStroke; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  struct IDCompositionDirectInkWetStrokePartner *v7; // rbx
  char v8; // di
  int v9; // esi
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  int v14; // eax
  bool v16; // [rsp+30h] [rbp-79h] BYREF
  char v17; // [rsp+31h] [rbp-78h]
  CDrawingContext *v18; // [rsp+38h] [rbp-71h]
  int v19; // [rsp+40h] [rbp-69h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v20; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v21[64]; // [rsp+50h] [rbp-59h] BYREF
  int v22; // [rsp+90h] [rbp-19h]
  struct IDCompositionDirectInkWetStrokePartner *v23; // [rsp+A0h] [rbp-9h] BYREF
  float v24; // [rsp+A8h] [rbp-1h]
  float v25; // [rsp+ACh] [rbp+3h]
  __int128 v26; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v27; // [rsp+C0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v20 = 0LL;
  v18 = (CDrawingContext *)a2;
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke(a3, a2[48], &v20);
  v5 = DirectInkWetStroke;
  if ( DirectInkWetStroke < 0 )
  {
    v6 = 73LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
      (const char *)(unsigned int)DirectInkWetStroke);
    goto LABEL_41;
  }
  v7 = v20;
  v8 = 0;
  v16 = 0;
  v17 = 0;
  if ( CCommonRegistryData::m_fGammaBlendPencil )
  {
    DirectInkWetStroke = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, int *))(*(_QWORD *)v20 + 64LL))(
                           v20,
                           &v19);
    v5 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v6 = 83LL;
      goto LABEL_32;
    }
    v8 = v19 && CDrawingContext::IsHDRTarget(v18);
  }
  v23 = v7;
  if ( v7 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v7 + 8LL))(v7);
  v9 = CWetInkManager::TryDrawWetAsSuperWet(this, v8, &v16);
  if ( v8 )
  {
    v27 = 0uLL;
    DirectInkWetStroke = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, __int128 *))(*(_QWORD *)v7 + 32LL))(
                           v7,
                           &v27);
    v5 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v6 = 95LL;
      goto LABEL_32;
    }
    v22 = 0;
    v26 = v27;
    CMatrixStack::Top((CDrawingContext *)((char *)v18 + 480), (struct CMILMatrix *)v21);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v21, (__int64)&v26, (float *)&v23);
    CScopedClipStack::GetClipBoundsWorld((CDrawingContext *)((char *)v18 + 1008), (__int64)&v26);
    v10 = *(float *)&v23;
    if ( *(float *)&v26 > *(float *)&v23 )
    {
      LODWORD(v23) = v26;
      v10 = *(float *)&v26;
    }
    v11 = *((float *)&v23 + 1);
    if ( *((float *)&v26 + 1) > *((float *)&v23 + 1) )
    {
      HIDWORD(v23) = DWORD1(v26);
      v11 = *((float *)&v26 + 1);
    }
    v12 = v24;
    if ( v24 > *((float *)&v26 + 2) )
    {
      v24 = *((float *)&v26 + 2);
      v12 = *((float *)&v26 + 2);
    }
    v13 = v25;
    if ( v25 > *((float *)&v26 + 3) )
    {
      v25 = *((float *)&v26 + 3);
      v13 = *((float *)&v26 + 3);
    }
    if ( v12 <= v10 || v13 <= v11 )
    {
      v25 = 0.0;
      v24 = 0.0;
      v23 = 0LL;
    }
    DirectInkWetStroke = InflateRectFToPointAndSizeL(&v23, &v26);
    v5 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v6 = 114LL;
      goto LABEL_32;
    }
    if ( SDWORD2(v26) > 0 && SHIDWORD(v26) > 0 )
    {
      DirectInkWetStroke = CDrawingContext::PushGammaBlendLayer(v18, (const struct MilPointAndSizeL *)&v26);
      v5 = DirectInkWetStroke;
      if ( DirectInkWetStroke < 0 )
      {
        v6 = 118LL;
        goto LABEL_32;
      }
      v17 = 1;
    }
  }
  dword_180308094 |= 1u;
  v14 = CDrawingContext::DrawGenericInk(v18, v7, !v16);
  v5 = v14;
  if ( v14 >= 0 )
  {
    if ( v9 >= 0 )
    {
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
        (const char *)(unsigned int)v9);
      v5 = v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
      (const char *)(unsigned int)v14);
  }
  if ( v17 )
    CDrawingContext::PopLayerInternal((__int64)v18);
LABEL_41:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v20);
  return v5;
}
