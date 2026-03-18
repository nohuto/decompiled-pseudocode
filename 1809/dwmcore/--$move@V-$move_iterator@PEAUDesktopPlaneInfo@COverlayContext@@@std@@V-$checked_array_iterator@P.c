/*
 * XREFs of ??$move@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x1800775BC
 * Callers:
 *     ?clear_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE568 (-clear_region@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneInf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<COverlayContext::DesktopPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  __int128 v4; // xmm2
  __int64 v5; // r9
  __int64 result; // rax

  v4 = *a4;
  v5 = *(_QWORD *)a4 + 120LL * *((_QWORD *)a4 + 2);
  while ( a2 != a3 )
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v5 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v5 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(v5 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(v5 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(v5 + 96) = *(_OWORD *)(a2 + 96);
    *(_QWORD *)(v5 + 112) = *(_QWORD *)(a2 + 112);
    v5 += 120LL;
    a2 += 120LL;
  }
  *(_OWORD *)a1 = v4;
  result = a1;
  *(_QWORD *)(a1 + 16) = (v5 - (__int64)v4) / 120;
  return result;
}
