/*
 * XREFs of ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18000E5BC
 * Callers:
 *     ??1CoordMap@@QEAA@XZ @ 0x18000FF30 (--1CoordMap@@QEAA@XZ.c)
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180010230 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180010478 (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 * Callees:
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x1801CA070 (--$uninitialized_copy@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 */

unsigned __int64 __fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdx
  const char *v5; // rcx
  unsigned __int64 result; // rax
  __int64 v7; // rbx
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 8);
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
    result = ((__int64 (__fastcall *)(__int128 *, const char *, const char *, __int128 *))std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>)(
               &v8,
               &v5[v7],
               &v5[16 * result],
               &v10);
    v3 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v3 - v7;
  return result;
}
