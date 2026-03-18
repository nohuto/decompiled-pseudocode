/*
 * XREFs of ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800B4950
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043788 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180085E5C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800B55D8 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x1800B5684 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::TileImage(CDrawingContext *this, __int64 a2, float *a3, __int64 a4, int a5)
{
  unsigned int v6; // ebx
  const struct MilRectF *v7; // r8
  float v8; // xmm1_4
  bool v9; // r8
  signed int v10; // eax
  __int64 v11; // rcx
  _BYTE v13[80]; // [rsp+30h] [rbp-68h] BYREF

  v6 = 0;
  if ( !IsRectEmptyOrInvalid(a3) )
  {
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm);
    if ( v8 >= 0.0000011920929 )
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v13, v7);
      v10 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v13, v9);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x534u, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v13);
    }
  }
  return v6;
}
