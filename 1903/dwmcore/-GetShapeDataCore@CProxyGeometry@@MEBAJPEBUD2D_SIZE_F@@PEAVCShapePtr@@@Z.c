/*
 * XREFs of ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801F4950
 * Callers:
 *     <none>
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800B55D8 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1801D62F4 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CProxyGeometry::GetShapeDataCore(
        CProxyGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  CGeometry *v3; // rcx
  unsigned int v4; // ebx
  signed int ShapeData; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ShapeData, 0x20u, 0LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x8007000E, 0x28u, 0LL);
    }
  }
  return v4;
}
