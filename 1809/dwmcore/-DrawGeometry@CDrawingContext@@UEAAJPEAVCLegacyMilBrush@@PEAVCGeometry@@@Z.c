/*
 * XREFs of ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18008D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18008DAB4 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawGeometry(
        CDrawingContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  CGeometry *v6; // r9
  int ShapeData; // eax
  unsigned int v8; // ecx
  bool v9; // r8
  int v10; // eax
  unsigned int v11; // ecx
  struct CShape *v13; // [rsp+30h] [rbp-18h] BYREF
  char v14; // [rsp+38h] [rbp-10h]

  v3 = 0;
  v13 = 0LL;
  v14 = 0;
  if ( CDrawingContext::IsBounding(this) && v5 )
  {
    ShapeData = CGeometry::GetShapeData(v6, 0LL, (struct CShapePtr *)&v13);
    v3 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ShapeData, 0x478u);
    }
    else if ( v13 )
    {
      v10 = CDrawingContext::FillShapeForBounds(this, v13, v9);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x481u);
    }
  }
  CShapePtr::Release((CShapePtr *)&v13);
  return v3;
}
