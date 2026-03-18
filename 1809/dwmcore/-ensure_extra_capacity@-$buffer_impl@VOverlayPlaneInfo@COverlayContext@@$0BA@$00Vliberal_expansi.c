/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18016CA54
 * Callers:
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x18016CD68 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x180067760 (--$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18016812C (--$uninitialized_copy@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_ar.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

void __fastcall detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  const char *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  LPVOID v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  LPVOID v10; // rbx
  COverlayContext::OverlayPlaneInfo *v11; // rcx
  bool v12; // zf
  unsigned __int64 v13; // rsi
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = *(const char **)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  if ( (__int64)&v3[-v4] >> 8 < a2 )
  {
    v5 = (v4 - *(_QWORD *)a1) >> 8;
    if ( v5 + a2 < v5 )
      std::_Xoverflow_error(v3);
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((__int64)&v3[-*(_QWORD *)a1] >> 8),
           (__int64)&v3[-*(_QWORD *)a1] >> 8,
           v5 + a2);
    v7 = operator new(saturated_mul(v6, 0x100uLL));
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)a1;
    *(_QWORD *)&v14 = v7;
    *((_QWORD *)&v14 + 1) = v5;
    v10 = v7;
    v15 = 0LL;
    v16 = v14;
    v17 = 0LL;
    std::uninitialized_copy<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
      (__int64)&v14,
      v9,
      v8,
      &v16);
    detail::destruct_range<COverlayContext::OverlayPlaneInfo>(
      *(COverlayContext::OverlayPlaneInfo **)a1,
      *(COverlayContext::OverlayPlaneInfo **)(a1 + 8));
    v11 = *(COverlayContext::OverlayPlaneInfo **)a1;
    v12 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v10;
    if ( v12 )
      v11 = 0LL;
    WPF::ProcessHeapImpl::Free(v11);
    v13 = *(_QWORD *)a1 + (v5 << 8);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + (v6 << 8);
    *(_QWORD *)(a1 + 8) = v13;
  }
}
