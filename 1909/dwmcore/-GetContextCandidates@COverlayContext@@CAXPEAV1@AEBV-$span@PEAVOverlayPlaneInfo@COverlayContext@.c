/*
 * XREFs of ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180184BA4
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800E5DA4 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x1801834F8 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AEB.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x180186844 (-reserve_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlay.c)
 */

_QWORD *__fastcall COverlayContext::GetContextCandidates(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  _QWORD *result; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rbp

  v3 = (_QWORD *)a2[1];
  v4 = 0LL;
  result = &v3[*a2];
  v8 = *a2 & 0x1FFFFFFFFFFFFFFFLL;
  if ( v3 > result )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      v9 = (_QWORD *)*v3;
      if ( *(_QWORD *)*v3 == a1 )
      {
        result = (_QWORD *)detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                             a3,
                             (__int64)(a3[1] - *a3) >> 3);
        *result = v9;
      }
      ++v3;
      ++v4;
    }
    while ( v4 != v8 );
  }
  return result;
}
