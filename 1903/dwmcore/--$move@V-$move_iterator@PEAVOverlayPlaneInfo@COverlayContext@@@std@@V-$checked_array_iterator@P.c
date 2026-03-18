/*
 * XREFs of ??$move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180182C90
 * Callers:
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E45CC (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 * Callees:
 *     ??4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x180183750 (--4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  bool v9; // cc
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v8 = (a3 - a2) >> 8;
  v9 = v8 <= 0;
  if ( v8 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v8 )
      goto LABEL_6;
    v9 = v8 <= 0;
  }
  if ( !v9 && a4[1] - a4[2] < (unsigned __int64)v8 )
  {
LABEL_6:
    _o__invalid_parameter_noinfo_noreturn(a1, v8, a3, a4);
    __debugbreak();
  }
  v10 = *a4 + (a4[2] << 8);
  while ( v4 != a3 )
  {
    COverlayContext::OverlayPlaneInfo::operator=(v10, v4);
    v10 += 256LL;
    v4 += 256LL;
  }
  result = a1;
  a4[2] = (v10 - *a4) >> 8;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
