/*
 * XREFs of ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HJ@@@@Z @ 0x18008B6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008CF64 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x18008DA68 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18008DAB4 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawRectangle(CDrawingContext *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  const __m128i *v7; // rdx
  __int64 v8; // r9
  __m128i v9; // xmm0
  bool v10; // r8
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __m128i v17; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v18[80]; // [rsp+40h] [rbp-78h] BYREF

  v6 = 0;
  if ( CDrawingContext::IsBounding(this) )
  {
    v9 = _mm_loadu_si128(v7);
    if ( v8 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(a4, 121LL) )
      {
        v6 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024809, 0x32u);
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024809, 0x68u);
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024809, 0x3B2u);
        return v6;
      }
      v9 = _mm_loadu_si128((const __m128i *)(a4 + 56));
    }
    v17 = v9;
    if ( !(unsigned __int8)IsRectEmptyOrInvalid(&v17) )
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v18, (const struct MilRectF *)&v17);
      v11 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v18, v10);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x3BEu);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v18);
    }
  }
  return v6;
}
