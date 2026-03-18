/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x180184614
 * Callers:
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18000BEC8 (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x180185A44 (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibe.c)
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x180187294 (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vli.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  _DWORD *v4; // r11
  __int64 result; // rax
  __int64 v6; // xmm1_8

  v4 = (_DWORD *)(*a4 + 4LL * a4[2]);
  while ( a2 != a3 )
    *--v4 = *--a3;
  result = a1;
  a4[2] = ((__int64)v4 - *a4) >> 2;
  v6 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
