/*
 * XREFs of ?clear@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18020DAE0
 * Callers:
 *     ??1CShapeDrawingContext@@QEAA@XZ @ 0x18020CB98 (--1CShapeDrawingContext@@QEAA@XZ.c)
 *     ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x18025E140 (-Clear@CMatrixStack2D@@QEAAXXZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18020DB20 (-clear_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_.c)
 */

unsigned __int64 __fastcall detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  unsigned __int64 result; // rax

  result = (unsigned __int64)((unsigned __int128)((__int64)(a1[1] - *a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  if ( (a1[1] - *a1) / 24LL )
    return detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL,
             (a1[1] - *a1) / 24LL);
  return result;
}
