/*
 * XREFs of ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x180187294
 * Callers:
 *     ?insert@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@2@V?$basic_iterator@$$CBW4D2D1_EDGE_FLAGS@@@2@_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x180186FFC (-insert@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_ex.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000C018 (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x180184614 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@detail@@YAXV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@0@0V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@Z @ 0x18018472C (--$move_backward_uninitialized@V-$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V-$checked_array_it.c)
 */

__int64 __fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  unsigned int *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r15
  __int128 v12; // rcx
  bool v13; // sf
  bool v14; // sf
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]
  unsigned int *v20; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int *v21; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+50h]

  *((_QWORD *)&v12 + 1) = a3;
  detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v17 = 0LL;
  v8 = *a1;
  v9 = (unsigned int *)a1[1];
  v10 = ((__int64)v9 - *a1) >> 2;
  v17 = 0LL;
  v11 = v10 - a2;
  *(_QWORD *)&v12 = v8 + 4 * v10;
  v16 = v12;
  v22 = v12;
  v13 = v12 < 0;
  if ( *((_QWORD *)&v12 + 1) )
  {
    if ( !(_QWORD)v12 )
      goto LABEL_14;
    v13 = v12 < 0;
  }
  if ( v13 )
  {
    *(_QWORD *)&v12 = -*((_QWORD *)&v12 + 1);
    if ( *((_QWORD *)&v12 + 1) )
      goto LABEL_14;
  }
  v20 = v9;
  v17 = *((_QWORD *)&v12 + 1);
  *(_QWORD *)&v12 = v10 - a2;
  v18 = v16;
  if ( *((_QWORD *)&v12 + 1) < v11 )
    *(_QWORD *)&v12 = *((_QWORD *)&v12 + 1);
  v19 = *((_QWORD *)&v12 + 1);
  v21 = &v9[-v12];
  detail::move_backward_uninitialized<detail::basic_iterator<enum D2D1_EDGE_FLAGS>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
    &v21,
    &v20,
    (__int64 *)&v18,
    v7);
  if ( v11 > *((_QWORD *)&v12 + 1) )
  {
    v17 = 0LL;
    *(_QWORD *)&v16 = v8;
    *((_QWORD *)&v16 + 1) = v10;
    v19 = 0LL;
    v14 = v10 < 0;
    if ( v10 )
    {
      if ( !v8 )
        goto LABEL_14;
      v14 = v10 < 0;
    }
    if ( v14 && v10 )
    {
LABEL_14:
      _o__invalid_parameter_noinfo_noreturn(v12, v5, v6, v7);
      __debugbreak();
    }
    v19 = v10;
    v17 = v10;
    std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
      (__int64)&v18,
      (_DWORD *)(v8 + 4 * a2),
      (_DWORD *)(v8 + 4 * (v10 - *((_QWORD *)&v12 + 1))),
      &v16);
  }
  a1[1] += 4LL * *((_QWORD *)&v12 + 1);
  return v8 + 4 * a2;
}
