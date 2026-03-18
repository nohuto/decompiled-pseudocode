/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x18022CEE0
 * Callers:
 *     ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x18000CC78 (-reserve_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vli.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // xmm1_8

  v5 = *a4 + 12LL * a4[2];
  while ( a2 != a3 )
  {
    v5 -= 12LL;
    a3 -= 12LL;
    *(_QWORD *)v5 = *(_QWORD *)a3;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(a3 + 8);
  }
  result = a1;
  a4[2] = (v5 - *a4) / 12;
  v7 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v7;
  return result;
}
