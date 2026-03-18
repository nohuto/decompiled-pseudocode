/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180167E48
 * Callers:
 *     ?reserve_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDesktopPlaneInfo@COverlayContext@@_K0@Z @ 0x18016CC24 (-reserve_region@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<COverlayContext::DesktopPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v6; // xmm1_8

  v4 = *a4 + 120LL * a4[2];
  while ( a2 != a3 )
  {
    v4 -= 120LL;
    a3 -= 120LL;
    *(_OWORD *)v4 = *(_OWORD *)a3;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(a3 + 64);
    *(_OWORD *)(v4 + 80) = *(_OWORD *)(a3 + 80);
    *(_OWORD *)(v4 + 96) = *(_OWORD *)(a3 + 96);
    *(_QWORD *)(v4 + 112) = *(_QWORD *)(a3 + 112);
  }
  result = a1;
  a4[2] = (v4 - *a4) / 120;
  v6 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
