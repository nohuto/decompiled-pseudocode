/*
 * XREFs of ?clear_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EF404
 * Callers:
 *     ??1CoordMap@@QEAA@XZ @ 0x18000D110 (--1CoordMap@@QEAA@XZ.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x180070050 (--$move@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@PEAURampEntry@C.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::clear_region(
        const char **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  const char **v3; // r11
  const char *v4; // rcx
  unsigned __int64 result; // rax
  __int64 v6; // r10
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-10h]

  v3 = a1;
  v4 = *a1;
  result = (v3[1] - v4) >> 4;
  if ( a3 > result )
    std::_Xoverflow_error(v4);
  v8 = 0LL;
  v6 = 16 * a3;
  *(_QWORD *)&v7 = v4;
  *((_QWORD *)&v7 + 1) = result;
  if ( a3 != result )
  {
    v8 = 0LL;
    v10 = 0LL;
    v9 = v7;
    result = std::move<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>(
               (__int64)&v7,
               &v4[v6],
               &v4[16 * result],
               &v9);
  }
  v3[1] -= v6;
  return result;
}
