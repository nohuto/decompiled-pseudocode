/*
 * XREFs of ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1801B8CA8
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801B7A4C (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801B7768 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@detail@@YAXV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@0@0V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@Z @ 0x1801B7848 (--$move_backward_uninitialized@V-$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V-$checked_array_it.c)
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801B8A64 (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 */

__int64 __fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  bool v13; // sf
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF

  v20 = a3;
  detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v16 = 0LL;
  v6 = *a1;
  v7 = a1[1];
  v8 = v7 - *a1;
  *((_QWORD *)&v15 + 1) = 1LL;
  v9 = v8 >> 2;
  v16 = 0LL;
  v10 = v9 - a2;
  v11 = v6 + 4 * v9;
  *(_QWORD *)&v15 = v11;
  if ( !v11 )
    goto LABEL_12;
  v20 = v7;
  v16 = 1LL;
  v12 = 1LL;
  v17 = v15;
  if ( v10 <= 1 )
    v12 = v9 - a2;
  v18 = 1LL;
  v19 = v7 - 4 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<enum D2D1_EDGE_FLAGS>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
    (unsigned __int64)&v19,
    &v20,
    (__int64 *)&v17);
  if ( v10 > 1 )
  {
    v16 = 0LL;
    *(_QWORD *)&v15 = v6;
    *((_QWORD *)&v15 + 1) = v9;
    v18 = 0LL;
    v13 = v9 < 0;
    if ( v9 )
    {
      if ( !v6 )
        goto LABEL_12;
      v13 = v9 < 0;
    }
    if ( !v13 || !v9 )
    {
      v18 = v9;
      v16 = v9;
      std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        (__int64)&v17,
        (_DWORD *)(v6 + 4 * a2),
        (_DWORD *)(v6 - 4 + 4 * v9),
        (__int64 *)&v15);
      goto LABEL_11;
    }
LABEL_12:
    _o__invalid_parameter_noinfo_noreturn(v11, v5);
    JUMPOUT(0x1801B8DDFLL);
  }
LABEL_11:
  a1[1] += 4LL;
  return v6 + 4 * a2;
}
