/*
 * XREFs of ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x18001DCD8
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003B380 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180163988 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002B47C (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::ShapeDataFromGeometry(
        const struct D2D_SIZE_F *a1,
        struct CGeometry *this,
        struct CShapePtr *a3)
{
  unsigned int v6; // esi
  int ShapeData; // eax
  unsigned int v8; // ecx
  int v9; // ebp
  int TightBounds; // eax
  unsigned int v11; // ecx
  char v12; // di
  __int64 v13; // rbx
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  char v16; // [rsp+38h] [rbp-50h]
  char v17[16]; // [rsp+40h] [rbp-48h] BYREF

  CShapePtr::Release(a3);
  v6 = 0;
  v15 = 0LL;
  v16 = 0;
  ShapeData = CGeometry::GetShapeData(this, a1, (struct CShapePtr *)&v15);
  v9 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ShapeData, 0xBF9u);
  }
  else
  {
    TightBounds = CShapePtr::GetTightBounds(&v15, v17, 0LL);
    v9 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, TightBounds, 0xBFAu);
    }
    else
    {
      v12 = v16;
      v13 = v15;
      CShapePtr::Release(a3);
      *(_QWORD *)a3 = v13;
      *((_BYTE *)a3 + 8) = v12;
      v15 = 0LL;
      v16 = 0;
    }
  }
  if ( v9 != -2003304438 )
    v6 = v9;
  CShapePtr::Release((CShapePtr *)&v15);
  return v6;
}
