/*
 * XREFs of ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x18025E140
 * Callers:
 *     ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18025197C (--0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?clear@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18020DAE0 (-clear@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansi.c)
 *     ??$emplace_back@VMatrix3x2F@D2D1@@@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXVMatrix3x2F@D2D1@@@Z @ 0x18025E0F4 (--$emplace_back@VMatrix3x2F@D2D1@@@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@.c)
 */

void __fastcall CMatrixStack2D::Clear(CMatrixStack2D *this)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v3; // [rsp+30h] [rbp-18h]

  detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear(this);
  v2 = _xmm;
  v3 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::emplace_back<D2D1::Matrix3x2F>(
    this,
    (__int64)&v2);
}
