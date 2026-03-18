/*
 * XREFs of ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E547C
 * Callers:
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002B064 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180080FA0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?erase_unchecked@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@0@Z @ 0x1800E5424 (-erase_unchecked@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 * Callees:
 *     ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x1800E5508 (--$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180181590 (--$move@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_array_iterator@P.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  unsigned __int64 v6; // r9
  const char *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  bool v11; // sf
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v4 = *a1;
  v6 = (a1[1] - *a1) >> 8;
  v7 = (const char *)(a2 + a3);
  if ( a2 + a3 > v6 )
    std::_Xoverflow_error(v7);
  v13 = 0LL;
  v8 = v4 + (v6 << 8);
  *(_QWORD *)&v12 = v4;
  *((_QWORD *)&v12 + 1) = v6;
  if ( v7 != (const char *)v6 )
  {
    v11 = a2 < 0;
    if ( a2 )
    {
      if ( !v4 )
        goto LABEL_12;
      v11 = a2 < 0;
    }
    if ( (!v11 || !a2) && (a2 <= 0 || v6 >= a2) )
    {
      v13 = a2;
      v14 = v12;
      v15 = a2;
      std::move<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        &v12,
        ((_QWORD)v7 << 8) + v4,
        v8,
        &v14);
      goto LABEL_3;
    }
LABEL_12:
    _o__invalid_parameter_noinfo_noreturn(v7, a2);
    JUMPOUT(0x180151ED7LL);
  }
LABEL_3:
  v9 = a3 << 8;
  result = detail::destruct_range<COverlayContext::OverlayPlaneInfo>((COverlayContext::OverlayPlaneInfo *)(v8 - v9));
  a1[1] -= v9;
  return result;
}
