/*
 * XREFs of ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x1800E5508
 * Callers:
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E547C (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180186564 (-ensure_extra_capacity@-$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansi.c)
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x180186B14 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     ??1OverlayPlaneInfo@COverlayContext@@QEAA@XZ @ 0x180181FE0 (--1OverlayPlaneInfo@COverlayContext@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<COverlayContext::OverlayPlaneInfo>(
        COverlayContext::OverlayPlaneInfo *this,
        COverlayContext::OverlayPlaneInfo *a2)
{
  COverlayContext::OverlayPlaneInfo *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      COverlayContext::OverlayPlaneInfo::~OverlayPlaneInfo(v3);
      v3 = (COverlayContext::OverlayPlaneInfo *)((char *)v3 + 256);
    }
    while ( v3 != a2 );
  }
}
