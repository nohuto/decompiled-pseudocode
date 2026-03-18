/*
 * XREFs of ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IK@@@@Z @ 0x1800B4760
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043788 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18007A99C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180085E5C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800B55D8 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x1800B5684 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawRectangle(CDrawingContext *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  const __m128i *v7; // rdx
  __int64 v8; // r9
  __m128i v9; // xmm0
  bool v10; // r8
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __m128i v17; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v18[80]; // [rsp+40h] [rbp-78h] BYREF

  v6 = 0;
  if ( CDrawingContext::IsBounding(this) )
  {
    v9 = _mm_loadu_si128(v7);
    if ( v8 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(a4, 138LL) )
      {
        v6 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x80070057, 0x32u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x80070057, 0x68u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x80070057, 0x3AFu, 0LL);
        return v6;
      }
      v9 = _mm_loadu_si128((const __m128i *)(a4 + 56));
    }
    v17 = v9;
    if ( !IsRectEmptyOrInvalid((float *)v17.m128i_i32) )
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v18, (const struct MilRectF *)&v17);
      v11 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v18, v10);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x3BBu, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v18);
    }
  }
  return v6;
}
