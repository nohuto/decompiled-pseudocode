/*
 * XREFs of ??$move@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x18006F698
 * Callers:
 *     ?clear_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EFBDC (-clear_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vlibe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  __int128 v4; // xmm2
  __int64 v5; // r9
  __int64 result; // rax

  v4 = *a4;
  v5 = *(_QWORD *)a4 + 12LL * *((_QWORD *)a4 + 2);
  while ( a2 != a3 )
  {
    *(_QWORD *)v5 = *(_QWORD *)a2;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(a2 + 8);
    v5 += 12LL;
    a2 += 12LL;
  }
  *(_OWORD *)a1 = v4;
  result = a1;
  *(_QWORD *)(a1 + 16) = (v5 - (__int64)v4) / 12;
  return result;
}
