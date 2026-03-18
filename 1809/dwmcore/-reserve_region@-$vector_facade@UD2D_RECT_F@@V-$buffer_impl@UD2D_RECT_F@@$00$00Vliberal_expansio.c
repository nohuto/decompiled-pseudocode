/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000D434
 * Callers:
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18000D3BC (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000ADDC (-ensure_extra_capacity@-$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x18000D584 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x18022A750 (--$move_backward@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_RECT_F.c)
 */

__int64 __fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        signed __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  signed __int64 v13; // rcx
  unsigned __int64 v14; // r12
  bool v15; // sf
  signed __int64 v16; // rcx
  bool v17; // sf
  __int64 v18; // rsi
  __int64 result; // rax
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  signed __int64 v21; // [rsp+30h] [rbp-30h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  signed __int64 v23; // [rsp+50h] [rbp-10h]
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF
  signed __int64 v26; // [rsp+B0h] [rbp+50h]

  detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v21 = 0LL;
  v9 = *a1;
  v10 = a1[1];
  v11 = v10 - *a1;
  *((_QWORD *)&v20 + 1) = a3;
  v12 = v11 >> 4;
  v21 = 0LL;
  v13 = v9 + 16 * v12;
  v14 = v12 - a2;
  *(_QWORD *)&v20 = v13;
  v26 = v13;
  v15 = a3 < 0;
  if ( a3 )
  {
    if ( !v13 )
      goto LABEL_14;
    v15 = a3 < 0;
  }
  if ( v15 )
  {
    v13 = -a3;
    if ( a3 )
      goto LABEL_14;
  }
  v24 = v10;
  v21 = a3;
  v16 = v12 - a2;
  v22 = v20;
  if ( a3 < v14 )
    v16 = a3;
  v23 = a3;
  v25 = v10 - 16 * v16;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v25,
    &v24,
    &v22);
  if ( v14 <= a3 )
  {
    v18 = 16 * a2;
  }
  else
  {
    v21 = 0LL;
    *(_QWORD *)&v20 = v9;
    *((_QWORD *)&v20 + 1) = v12;
    v23 = 0LL;
    v17 = v12 < 0;
    if ( v12 )
    {
      if ( !v9 )
        goto LABEL_14;
      v17 = v12 < 0;
    }
    if ( v17 && v12 )
    {
LABEL_14:
      _o__invalid_parameter_noinfo_noreturn(v13, v6, v7, v8);
      __debugbreak();
    }
    v23 = v12;
    v18 = 16 * a2;
    v21 = v12;
    std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>(
      &v22,
      v18 + v9,
      v9 + 16 * (v12 - a3),
      &v20);
  }
  result = v18 + v9;
  a1[1] += 16 * a3;
  return result;
}
