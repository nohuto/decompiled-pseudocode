/*
 * XREFs of ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1801BA698
 * Callers:
 *     ?insert@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@2@V?$basic_iterator@$$CBW4D2D1_EDGE_FLAGS@@@2@_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1801BA468 (-insert@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_ex.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801B7768 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@detail@@YAXV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@0@0V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@Z @ 0x1801B7848 (--$move_backward_uninitialized@V-$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V-$checked_array_it.c)
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801B8A64 (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 */

__int64 __fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  __int128 v10; // rcx
  bool v11; // sf
  bool v12; // sf
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF
  __int64 v19; // [rsp+98h] [rbp+38h] BYREF

  *((_QWORD *)&v10 + 1) = a3;
  detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v15 = 0LL;
  v6 = *a1;
  v7 = a1[1];
  v8 = (v7 - *a1) >> 2;
  v15 = 0LL;
  v9 = v8 - a2;
  *(_QWORD *)&v10 = v6 + 4 * v8;
  v14 = v10;
  v11 = v10 < 0;
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( !(_QWORD)v10 )
      goto LABEL_14;
    v11 = v10 < 0;
  }
  if ( v11 )
  {
    *(_QWORD *)&v10 = -*((_QWORD *)&v10 + 1);
    if ( *((_QWORD *)&v10 + 1) )
      goto LABEL_14;
  }
  v18 = v7;
  v15 = *((_QWORD *)&v10 + 1);
  *(_QWORD *)&v10 = *((_QWORD *)&v10 + 1);
  v16 = v14;
  if ( *((_QWORD *)&v10 + 1) >= v9 )
    *(_QWORD *)&v10 = v8 - a2;
  v17 = *((_QWORD *)&v10 + 1);
  v19 = v7 - 4 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<enum D2D1_EDGE_FLAGS>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
    (unsigned __int64)&v19,
    &v18,
    (__int64 *)&v16);
  if ( v9 > *((_QWORD *)&v10 + 1) )
  {
    v15 = 0LL;
    *(_QWORD *)&v14 = v6;
    *((_QWORD *)&v14 + 1) = v8;
    v17 = 0LL;
    v12 = v8 < 0;
    if ( v8 )
    {
      if ( !v6 )
        goto LABEL_14;
      v12 = v8 < 0;
    }
    if ( v12 && v8 )
    {
LABEL_14:
      _o__invalid_parameter_noinfo_noreturn(v10, v5);
      __debugbreak();
    }
    v17 = v8;
    v15 = v8;
    std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
      (__int64)&v16,
      (_DWORD *)(v6 + 4 * a2),
      (_DWORD *)(v6 + 4 * (v8 - *((_QWORD *)&v10 + 1))),
      (__int64 *)&v14);
  }
  a1[1] += 4LL * *((_QWORD *)&v10 + 1);
  return v6 + 4 * a2;
}
