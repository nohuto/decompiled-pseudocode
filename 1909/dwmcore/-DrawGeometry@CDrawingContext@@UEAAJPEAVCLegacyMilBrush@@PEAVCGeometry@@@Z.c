/*
 * XREFs of ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800D04E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18003F594 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x180042858 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawGeometry(
        CDrawingContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  CGeometry *v6; // r9
  signed int ShapeData; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  struct CShape *v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+38h] [rbp-10h]

  v3 = 0;
  v12 = 0LL;
  v13 = 0;
  if ( CDrawingContext::IsBounding(this) && v5 )
  {
    ShapeData = CGeometry::GetShapeData(v6, 0LL, (struct CShapePtr *)&v12);
    v3 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ShapeData, 0x475u, 0LL);
    }
    else if ( v12 )
    {
      v9 = CDrawingContext::FillShapeForBounds(this, v12);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x47Eu, 0LL);
    }
  }
  CShapePtr::Release((CShapePtr *)&v12);
  return v3;
}
