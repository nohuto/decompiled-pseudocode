/*
 * XREFs of ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18000BEC8
 * Callers:
 *     ?push_back@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBM@Z @ 0x18000BE9C (-push_back@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@de.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@M@detail@@V?$checked_array_iterator@PEAM@stdext@@@detail@@YAXV?$basic_iterator@M@0@0V?$checked_array_iterator@PEAM@stdext@@@Z @ 0x18000BFF8 (--$move_backward_uninitialized@V-$basic_iterator@M@detail@@V-$checked_array_iterator@PEAM@stdext.c)
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000C018 (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x180184614 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 */

__int64 __fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  bool v11; // sf
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h]
  __int64 v19; // [rsp+B0h] [rbp+50h] BYREF

  v19 = a3;
  detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v14 = 0LL;
  v5 = *a1;
  v6 = a1[1];
  v7 = v6 - *a1;
  *((_QWORD *)&v13 + 1) = 1LL;
  v8 = v7 >> 2;
  v14 = 0LL;
  v9 = v8 - a2;
  *(_QWORD *)&v13 = v5 + 4 * v8;
  v18 = v13;
  if ( !(_QWORD)v13 )
    goto LABEL_12;
  v19 = v6;
  v14 = 1LL;
  v10 = v8 - a2;
  v15 = v13;
  if ( v9 > 1 )
    v10 = 1LL;
  v16 = 1LL;
  v17 = v6 - 4 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<float>,stdext::checked_array_iterator<float *>>(
    &v17,
    &v19,
    &v15);
  if ( v9 > 1 )
  {
    v14 = 0LL;
    *(_QWORD *)&v13 = v5;
    *((_QWORD *)&v13 + 1) = v8;
    v16 = 0LL;
    v11 = v8 < 0;
    if ( v8 )
    {
      if ( !v5 )
        goto LABEL_12;
      v11 = v8 < 0;
    }
    if ( !v11 || !v8 )
    {
      v16 = v8;
      v14 = v8;
      std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        &v15,
        v5 + 4 * a2,
        v5 - 4 + 4 * v8,
        &v13);
      goto LABEL_11;
    }
LABEL_12:
    _o__invalid_parameter_noinfo_noreturn();
    JUMPOUT(0x18000BFF1LL);
  }
LABEL_11:
  a1[1] += 4LL;
  return v5 + 4 * a2;
}
