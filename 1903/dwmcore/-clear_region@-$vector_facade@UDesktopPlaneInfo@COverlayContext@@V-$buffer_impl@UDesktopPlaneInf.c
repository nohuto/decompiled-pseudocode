/*
 * XREFs of ?clear_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180187928
 * Callers:
 *     ?clear@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D801C (-clear@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneInfo@COver.c)
 * Callees:
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180182B8C (--$uninitialized_copy@V-$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V-$checked_ar.c)
 */

unsigned __int64 __fastcall detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::clear_region(
        const char *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // r9
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]

  v3 = *((_QWORD *)a1 + 1);
  v4 = *(_QWORD *)a1;
  v5 = v3 - *(_QWORD *)a1;
  result = (unsigned __int64)(v5 + ((unsigned __int128)(v5 * (__int128)(__int64)0x8888888888888889uLL) >> 64)) >> 63;
  v8 = v5 / 120;
  if ( a3 > v5 / 120 )
    std::_Xoverflow_error(a1);
  v11 = 0LL;
  v9 = 120 * a3;
  *(_QWORD *)&v10 = v4;
  *((_QWORD *)&v10 + 1) = v5 / 120;
  if ( a3 != v8 )
  {
    v11 = 0LL;
    v13 = 0LL;
    v12 = v10;
    result = std::uninitialized_copy<std::move_iterator<COverlayContext::DesktopPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
               (__int64)&v10,
               v9 + v4,
               v4 + 120 * v8,
               &v12);
    v3 = *((_QWORD *)a1 + 1);
  }
  *((_QWORD *)a1 + 1) = v3 - v9;
  return result;
}
