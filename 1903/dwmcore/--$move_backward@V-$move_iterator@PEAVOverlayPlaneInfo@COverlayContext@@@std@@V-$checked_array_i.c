/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180182EDC
 * Callers:
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1801881F4 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     ??4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x180183750 (--4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v6 = a3;
  v8 = -((a3 - a2) >> 8);
  if ( v8 < 0 && a4[2] < (unsigned __int64)-v8 || v8 > 0 && a4[1] - a4[2] < (unsigned __int64)v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v8, a3, a4);
    __debugbreak();
  }
  v9 = *a4 + (a4[2] << 8);
  while ( a2 != v6 )
  {
    v6 -= 256LL;
    v9 -= 256LL;
    COverlayContext::OverlayPlaneInfo::operator=(v9, v6);
  }
  result = a1;
  a4[2] = (v9 - *a4) >> 8;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
