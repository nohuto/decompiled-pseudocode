/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000AEE8
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x18000D5C8 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000ADDC (-ensure_extra_capacity@-$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x18000D584 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x18022A750 (--$move_backward@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_RECT_F.c)
 */

__int64 __fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  bool v10; // sf
  __int64 v11; // rbx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h]
  __int64 v19; // [rsp+B0h] [rbp+50h] BYREF

  v19 = a3;
  detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v5 = *a1;
  v6 = a1[1];
  v7 = (v6 - *a1) >> 4;
  *((_QWORD *)&v13 + 1) = 1LL;
  v14 = 0LL;
  v8 = v7 - a2;
  *(_QWORD *)&v13 = v5 + 16 * ((v6 - v5) >> 4);
  v18 = v13;
  if ( !(_QWORD)v13 )
    goto LABEL_13;
  v19 = v6;
  v14 = 1LL;
  v9 = v7 - a2;
  v15 = v13;
  if ( v8 > 1 )
    v9 = 1LL;
  v16 = 1LL;
  v17 = v6 - 16 * v9;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v17,
    &v19,
    &v15);
  if ( v8 <= 1 )
  {
    v11 = 16 * a2;
    goto LABEL_12;
  }
  v14 = 0LL;
  *(_QWORD *)&v13 = v5;
  *((_QWORD *)&v13 + 1) = v7;
  v16 = 0LL;
  v10 = v7 < 0;
  if ( v7 )
  {
    if ( !v5 )
      goto LABEL_13;
    v10 = v7 < 0;
  }
  if ( v10 && v7 )
  {
LABEL_13:
    _o__invalid_parameter_noinfo_noreturn();
    JUMPOUT(0x18000B024LL);
  }
  v16 = v7;
  v11 = 16 * a2;
  v14 = v7;
  std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v15,
    v11 + v5,
    16 * v7 + v5 - 16,
    &v13);
LABEL_12:
  a1[1] += 16LL;
  return v11 + v5;
}
