/*
 * XREFs of ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EF36C
 * Callers:
 *     ??1CoordMap@@QEAA@XZ @ 0x18000D110 (--1CoordMap@@QEAA@XZ.c)
 *     ?clear@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18000D5A4 (-clear@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x180070050 (--$move@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@PEAURampEntry@C.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r11
  const char *v5; // rcx
  unsigned __int64 result; // rax
  __int64 v7; // r10
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a1;
  v5 = *(const char **)a1;
  result = (v3 - (__int64)v5) >> 4;
  if ( a3 > result )
    std::_Xoverflow_error(v5);
  v9 = 0LL;
  v7 = 16 * a3;
  *(_QWORD *)&v8 = v5;
  *((_QWORD *)&v8 + 1) = (v3 - (__int64)v5) >> 4;
  if ( a3 != result )
  {
    v9 = 0LL;
    v11 = 0LL;
    v10 = v8;
    result = std::move<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>(
               (__int64)&v8,
               &v5[v7],
               &v5[16 * result],
               &v10);
    v3 = *(_QWORD *)(v4 + 8);
  }
  *(_QWORD *)(v4 + 8) = v3 - v7;
  return result;
}
