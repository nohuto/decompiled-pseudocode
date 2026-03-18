/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180167F08
 * Callers:
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x18016CD68 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     ??4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801687A4 (--4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = *a4 + (a4[2] << 8);
  while ( a2 != a3 )
  {
    v8 -= 256LL;
    a3 -= 256LL;
    COverlayContext::OverlayPlaneInfo::operator=(v8, a3);
  }
  result = a1;
  a4[2] = (v8 - *a4) >> 8;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
