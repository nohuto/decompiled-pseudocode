/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180182DE0
 * Callers:
 *     ?reserve_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDesktopPlaneInfo@COverlayContext@@_K0@Z @ 0x180188088 (-reserve_region@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<COverlayContext::DesktopPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v6 = (__int64)(((unsigned __int128)((a3 - a2) * (__int128)0x7777777777777777LL) >> 64) - (a3 - a2)) >> 6;
  v7 = (v6 >> 63) + v6;
  if ( v7 < 0 && a4[2] < (unsigned __int64)-v7 || v7 > 0 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v7, a3, a4);
    __debugbreak();
  }
  v8 = *a4 + 120LL * a4[2];
  while ( a2 != a3 )
  {
    v8 -= 120LL;
    a3 -= 120LL;
    *(_OWORD *)v8 = *(_OWORD *)a3;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(v8 + 64) = *(_OWORD *)(a3 + 64);
    *(_OWORD *)(v8 + 80) = *(_OWORD *)(a3 + 80);
    *(_OWORD *)(v8 + 96) = *(_OWORD *)(a3 + 96);
    *(_QWORD *)(v8 + 112) = *(_QWORD *)(a3 + 112);
  }
  result = a1;
  a4[2] = (v8 - *a4) / 120;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
