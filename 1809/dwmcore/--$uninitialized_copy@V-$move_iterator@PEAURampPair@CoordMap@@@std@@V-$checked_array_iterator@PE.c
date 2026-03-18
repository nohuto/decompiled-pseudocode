/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x18022CF68
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000CE34 (-ensure_extra_capacity@-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r11
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v5 = 12LL * a4[2] + *a4;
  while ( a2 != a3 )
  {
    *(_QWORD *)v5 = *(_QWORD *)a2;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(a2 + 8);
    v5 += 12LL;
    a2 += 12LL;
  }
  result = a1;
  a4[2] = (v5 - *a4) / 12;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
