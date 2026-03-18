/*
 * XREFs of ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800D5544
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x1800D5208 (-PushCandidates@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800D539C (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 * Callees:
 *     ??$swap_helper@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800D5594 (--$swap_helper@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@Q.c)
 */

char __fastcall detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 + 3 || (_QWORD *)*a2 == a2 + 3 )
  {
    if ( !(unsigned __int8)detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap_helper<16>(a1, a2) )
      return detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap_helper<16>(a2, a1);
  }
  else
  {
    *a1 = *a2;
    *a2 = v3;
    v6 = a1[1];
    a1[1] = a2[1];
    a2[1] = v6;
    v7 = a1[2];
    a1[2] = a2[2];
    a2[2] = v7;
  }
  return 1;
}
