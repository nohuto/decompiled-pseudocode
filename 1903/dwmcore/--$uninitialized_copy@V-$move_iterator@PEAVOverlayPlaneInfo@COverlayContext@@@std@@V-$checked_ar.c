/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x1801830C8
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180187C44 (-ensure_extra_capacity@-$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansi.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18018319C (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r8
  bool v7; // cc
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a3;
  v5 = a1;
  v6 = (a3 - a2) >> 8;
  v7 = v6 <= 0;
  if ( v6 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v6 )
      goto LABEL_6;
    v7 = v6 <= 0;
  }
  if ( !v7 && a4[1] - a4[2] < (unsigned __int64)v6 )
  {
LABEL_6:
    _o__invalid_parameter_noinfo_noreturn(a1, a2, v6, a4);
    __debugbreak();
  }
  v8 = *a4 + (a4[2] << 8);
  while ( a2 != v4 )
  {
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v8, a2);
    v8 = v9 + 256;
    a2 = v10 + 256;
  }
  result = v5;
  a4[2] = (v8 - *a4) >> 8;
  v12 = a4[2];
  *(_OWORD *)v5 = *(_OWORD *)a4;
  *(_QWORD *)(v5 + 16) = v12;
  return result;
}
