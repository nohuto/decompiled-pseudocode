/*
 * XREFs of ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE634
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?erase_unchecked@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@0@Z @ 0x180049630 (-erase_unchecked@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D7F38 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18005E334 (--$move@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_array_iterator@P.c)
 *     ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x180067760 (--$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

void __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  unsigned __int64 v6; // r9
  const char *v7; // rcx
  COverlayContext::OverlayPlaneInfo *v8; // rbx
  bool v9; // sf
  __int64 v10; // rdi
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  v4 = *a1;
  v6 = (a1[1] - *a1) >> 8;
  v7 = (const char *)(a2 + a3);
  if ( a2 + a3 > v6 )
    std::_Xoverflow_error(v7);
  v12 = 0LL;
  v8 = (COverlayContext::OverlayPlaneInfo *)(v4 + (v6 << 8));
  *(_QWORD *)&v11 = v4;
  *((_QWORD *)&v11 + 1) = v6;
  if ( v7 != (const char *)v6 )
  {
    v9 = a2 < 0;
    if ( a2 )
    {
      if ( !v4 )
        goto LABEL_10;
      v9 = a2 < 0;
    }
    if ( v9 && a2 || a2 > 0 && v6 < a2 )
    {
LABEL_10:
      _o__invalid_parameter_noinfo_noreturn(v7, a2, v4, v6);
      __debugbreak();
    }
    v12 = a2;
    v13 = v11;
    v14 = a2;
    std::move<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
      (__int64)&v11,
      ((_QWORD)v7 << 8) + v4,
      (__int64)v8,
      &v13);
  }
  v10 = a3 << 8;
  detail::destruct_range<COverlayContext::OverlayPlaneInfo>((COverlayContext::OverlayPlaneInfo *)((char *)v8 - v10), v8);
  a1[1] -= v10;
}
