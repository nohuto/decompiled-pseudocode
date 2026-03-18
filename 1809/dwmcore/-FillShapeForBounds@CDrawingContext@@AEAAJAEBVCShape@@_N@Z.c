/*
 * XREFs of ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18008DAB4
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180014BE0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180018470 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18005FB00 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HJ@@@@Z @ 0x18008B6F0 (-DrawRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18008BDF0 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18008D4E0 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HJ@@@@Z @ 0x18008D560 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18008D9AC (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180162430 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180163220 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801650A4 (-FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18008DBB0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800C2D88 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z @ 0x1801E42B0 (-Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z.c)
 */

__int64 __fastcall CDrawingContext::FillShapeForBounds(CDrawingContext *this, const struct CShape *a2)
{
  char v4; // si
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  const struct CMILMatrix *TopByReference; // rsi
  int v13; // eax
  unsigned int v14; // ecx
  struct D2D_RECT_F v15; // xmm0
  int v16; // eax
  unsigned int v17; // ecx
  struct D2D_RECT_F v18; // [rsp+30h] [rbp-49h] BYREF
  struct D2D_RECT_F v19; // [rsp+40h] [rbp-39h] BYREF
  struct D2D_RECT_F v20; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-19h] BYREF
  int v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+84h] [rbp+Bh]
  int v24; // [rsp+88h] [rbp+Fh]
  _BYTE v25[16]; // [rsp+90h] [rbp+17h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+27h]

  v21[1] = 0LL;
  v24 = 0;
  v26 = 0LL;
  v21[0] = &CRectanglesShape::`vftable';
  v22 = 1;
  v21[2] = v25;
  v4 = 0;
  v23 = 1;
  v21[3] = v25;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    v13 = (*(__int64 (__fastcall **)(const struct CShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)a2 + 32LL))(
            a2,
            &v20,
            0LL);
    v7 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x4A4u);
      goto LABEL_8;
    }
    if ( IsEmpty(&v20) )
    {
      v15 = v20;
    }
    else
    {
      Transform2DBounds(TopByReference, &v20, *((_DWORD *)this + 63) == 0, &v18);
      v15 = v18;
    }
    v19 = v15;
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v21, (const struct MilRectF *)&v19);
    a2 = (const struct CShape *)v21;
    v16 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v7 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x4B7u);
      goto LABEL_8;
    }
    v4 = 1;
  }
  v5 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x4BBu);
  }
  else
  {
    v8 = *((_QWORD *)this + 45);
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, char *, const struct CShape *))(*(_QWORD *)v8 + 232LL))(
             v8,
             (char *)this + 72,
             a2);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x4C0u);
    }
  }
  if ( v4 )
    CDrawingContext::PopTransformInternal(this, 1);
LABEL_8:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v21);
  return v7;
}
