/*
 * XREFs of ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18016B2B4
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800708B0 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180026618 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18016BC54 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 */

__int64 __fastcall COverlayContext::FindLowestPriorityOverlayCandidateIndex(__int64 *a1)
{
  int v1; // edi
  unsigned int i; // ebp
  const struct COverlayContext::OverlayPlaneInfo *v4; // rbx
  const struct COverlayContext::OverlayPlaneInfo **v5; // rax

  v1 = -1;
  if ( *a1 )
  {
    v1 = 0;
    for ( i = 1; i < *(_DWORD *)a1; ++i )
    {
      v4 = *(const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                 a1,
                                                                 v1);
      v5 = (const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                a1,
                                                                i);
      if ( !COverlayContext::IsHigherProprity(*v5, v4) )
        v1 = i;
    }
  }
  return (unsigned int)v1;
}
