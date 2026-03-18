/*
 * XREFs of ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IK@@@@Z @ 0x1800D4C80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18003F594 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800427AC (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x180042858 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180042950 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004FC88 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawRectangle(CDrawingContext *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  const __m128i *v7; // rdx
  __int64 v8; // r9
  __m128i v9; // xmm0
  signed int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __m128i v16; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v17[80]; // [rsp+40h] [rbp-78h] BYREF

  v6 = 0;
  if ( CDrawingContext::IsBounding(this) )
  {
    v9 = _mm_loadu_si128(v7);
    if ( v8 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(a4, 138LL) )
      {
        v6 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x80070057, 0x32u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x80070057, 0x68u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x80070057, 0x3AFu, 0LL);
        return v6;
      }
      v9 = _mm_loadu_si128((const __m128i *)(a4 + 56));
    }
    v16 = v9;
    if ( !IsRectEmptyOrInvalid((float *)v16.m128i_i32) )
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v17, (const struct MilRectF *)&v16);
      v10 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v17);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x3BBu, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v17);
    }
  }
  return v6;
}
