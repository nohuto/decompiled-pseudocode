/*
 * XREFs of ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800A0620
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800427AC (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x180042858 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180042950 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004FC88 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::TileImage(CDrawingContext *this, __int64 a2, float *a3, __int64 a4, int a5)
{
  unsigned int v6; // ebx
  const struct MilRectF *v7; // r8
  float v8; // xmm1_4
  signed int v9; // eax
  __int64 v10; // rcx
  _BYTE v12[80]; // [rsp+30h] [rbp-68h] BYREF

  v6 = 0;
  if ( !IsRectEmptyOrInvalid(a3) )
  {
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm);
    if ( v8 >= 0.0000011920929 )
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v12, v7);
      v9 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v12);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x534u, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v12);
    }
  }
  return v6;
}
