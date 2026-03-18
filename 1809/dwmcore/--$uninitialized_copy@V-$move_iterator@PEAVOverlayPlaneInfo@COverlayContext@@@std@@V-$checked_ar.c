/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18016812C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18016CA54 (-ensure_extra_capacity@-$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansi.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x1801681F0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r11
  __int64 v5; // r10
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a4;
  v5 = a3;
  v7 = (a4[2] << 8) + *a4;
  while ( a2 != v5 )
  {
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v7, a2);
    v7 = v9 + 256;
    a2 = v10 + 256;
  }
  result = a1;
  v4[2] = (v7 - *v4) >> 8;
  v12 = v4[2];
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
