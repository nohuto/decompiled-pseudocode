/*
 * XREFs of ??$move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18005E334
 * Callers:
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE634 (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 * Callees:
 *     ??4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801687A4 (--4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  __int64 v7; // rsi
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-58h]

  v9 = *a4;
  v7 = *(_QWORD *)a4 + (*((_QWORD *)a4 + 2) << 8);
  while ( a2 != a3 )
  {
    COverlayContext::OverlayPlaneInfo::operator=(v7, a2);
    v7 += 256LL;
    a2 += 256LL;
  }
  result = a1;
  *(_OWORD *)a1 = v9;
  *(_QWORD *)(a1 + 16) = (v7 - (__int64)v9) >> 8;
  return result;
}
