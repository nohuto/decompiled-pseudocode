/*
 * XREFs of ?RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E6020
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800E5DA4 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 * Callees:
 *     ??$?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180180FC0 (--$-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo@.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x1801822A0 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x180186678 (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 */

void __fastcall COverlayContext::RemoveUnbackedSurfaces(__int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // r14
  unsigned int v4; // edi
  _DWORD v5[10]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  while ( v1 != a1[1] )
  {
    if ( !*(_BYTE *)(*(_QWORD *)v1 + 185LL) || !*(_BYTE *)(*(_QWORD *)v1 + 189LL) )
      goto LABEL_9;
    gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v5, a1);
    v3 = *(_QWORD **)v1;
    v4 = 0;
    if ( !v5[0] )
      goto LABEL_11;
    while ( *v3 != **(_QWORD **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](v5, v4)
         || v3[24] != *(_QWORD *)(*(_QWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](v5, v4) + 8LL) )
    {
      if ( ++v4 >= v5[0] )
        goto LABEL_11;
    }
    if ( v4 == -1 )
    {
LABEL_11:
      v6 = v1;
      v1 = *(_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                        a1,
                        &v7,
                        &v6);
    }
    else
    {
LABEL_9:
      v1 += 8LL;
    }
  }
}
