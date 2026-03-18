/*
 * XREFs of ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18008BDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008CF64 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x18008DA68 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18008DAB4 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::TileImage(CDrawingContext *this, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // ebx
  const struct MilRectF *v7; // r8
  float v8; // xmm1_4
  bool v9; // r8
  int v10; // eax
  unsigned int v11; // ecx
  _BYTE v13[80]; // [rsp+30h] [rbp-68h] BYREF

  v6 = 0;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(a3) )
  {
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm);
    if ( v8 >= 0.0000011920929 )
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v13, v7);
      v10 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v13, v9);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x537u);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v13);
    }
  }
  return v6;
}
