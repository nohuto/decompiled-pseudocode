/*
 * XREFs of ?clear_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EFBDC
 * Callers:
 *     ?clear@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18000CBD0 (-clear@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_exp.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x18006F698 (--$move@V-$move_iterator@PEAURampPair@CoordMap@@@std@@V-$checked_array_iterator@PEAURampPair@Coo.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  const char *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r11
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]

  v4 = *(const char **)a1;
  v5 = (*(_QWORD *)(a1 + 8) - (_QWORD)v4) / 12LL;
  if ( a3 > v5 )
    std::_Xoverflow_error(v4);
  v9 = 0LL;
  v6 = 12 * a3;
  result = 3 * v5;
  *(_QWORD *)&v8 = v4;
  *((_QWORD *)&v8 + 1) = v5;
  if ( a3 != v5 )
  {
    v9 = 0LL;
    v11 = 0LL;
    v10 = v8;
    result = std::move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>(
               (__int64)&v8,
               (__int64)&v4[v6],
               (__int64)&v4[12 * v5],
               &v10);
  }
  *(_QWORD *)(a1 + 8) -= v6;
  return result;
}
