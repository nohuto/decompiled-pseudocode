/*
 * XREFs of ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801B1AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x180020524 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x18008DA68 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CProxyGeometry::GetShapeDataCore(
        CProxyGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  CGeometry *v3; // rcx
  unsigned int v4; // ebx
  int ShapeData; // eax
  __int64 v7; // rcx
  CRectanglesShape *v8; // rax
  __int64 v9; // rcx
  CRectanglesShape *v10; // rsi

  v3 = (CGeometry *)*((_QWORD *)this + 17);
  v4 = 0;
  if ( v3 )
  {
    ShapeData = CGeometry::GetShapeData(v3, a2, a3);
    v4 = ShapeData;
    if ( ShapeData < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ShapeData, 0x23u);
  }
  else
  {
    v8 = (CRectanglesShape *)CRectanglesShape::operator new(0LL);
    if ( v8 )
      v10 = CRectanglesShape::CRectanglesShape(
              v8,
              (const struct MilRectF *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
    else
      v10 = 0LL;
    if ( v10 )
    {
      CShapePtr::Release(a3);
      *(_QWORD *)a3 = v10;
      *((_BYTE *)a3 + 8) = 1;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x2Bu);
    }
  }
  return v4;
}
