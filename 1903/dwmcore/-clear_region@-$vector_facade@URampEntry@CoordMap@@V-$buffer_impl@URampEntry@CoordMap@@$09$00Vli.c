/*
 * XREFs of ?clear_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180010004
 * Callers:
 *     ??1CoordMap@@QEAA@XZ @ 0x18000FF30 (--1CoordMap@@QEAA@XZ.c)
 * Callees:
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x1801CA070 (--$uninitialized_copy@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  const char *v4; // rcx
  unsigned __int64 result; // rax
  __int64 v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-10h]

  v4 = *(const char **)a1;
  result = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v4) >> 4;
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
    result = ((__int64 (__fastcall *)(__int128 *, const char *, const char *, __int128 *))std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>)(
               &v7,
               &v4[v6],
               &v4[16 * result],
               &v9);
  }
  *(_QWORD *)(a1 + 8) -= v6;
  return result;
}
