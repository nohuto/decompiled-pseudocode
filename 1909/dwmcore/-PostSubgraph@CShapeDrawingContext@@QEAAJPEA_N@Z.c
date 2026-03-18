/*
 * XREFs of ?PostSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x18025212C
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180251528 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18020DB20 (-clear_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_.c)
 */

__int64 __fastcall CShapeDrawingContext::PostSubgraph(CShapeDrawingContext *this, bool *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rdx
  __int64 *v5; // rcx
  unsigned __int64 v6; // rdx

  v2 = (_QWORD *)*((_QWORD *)this + 1);
  *a2 = 1;
  if ( v2[7] )
  {
    v4 = *((_QWORD *)this + 9);
    v5 = (__int64 *)((char *)this + 64);
    v6 = (__int64)((unsigned __int128)((v4 - 24 - *v5) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
    detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear_region(
      v5,
      (v6 >> 63) + v6,
      1LL);
    *((_BYTE *)this + 528) = 1;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v2 + 48LL))(v2, 174LL) )
      *((_BYTE *)this + 529) = 1;
  }
  return 0LL;
}
