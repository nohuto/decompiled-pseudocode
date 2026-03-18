/*
 * XREFs of ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1801BA548
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801B92EC (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801B9008 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@detail@@YAXV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@0@0V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@Z @ 0x1801B90E8 (--$move_backward_uninitialized@V-$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V-$checked_array_it.c)
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801BA304 (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 */

__int64 __fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbx
  unsigned __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // sf
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+40h] BYREF

  v22 = a3;
  detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v18 = 0LL;
  v8 = *a1;
  v9 = a1[1];
  v10 = v9 - *a1;
  *((_QWORD *)&v17 + 1) = 1LL;
  v11 = v10 >> 2;
  v18 = 0LL;
  v12 = v11 - a2;
  v13 = v8 + 4 * v11;
  *(_QWORD *)&v17 = v13;
  if ( !v13 )
    goto LABEL_12;
  v22 = v9;
  v18 = 1LL;
  v14 = 1LL;
  v19 = v17;
  if ( v12 <= 1 )
    v14 = v11 - a2;
  v20 = 1LL;
  v21 = v9 - 4 * v14;
  detail::move_backward_uninitialized<detail::basic_iterator<enum D2D1_EDGE_FLAGS>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
    (unsigned __int64)&v21,
    &v22,
    (__int64 *)&v19);
  if ( v12 > 1 )
  {
    v18 = 0LL;
    *(_QWORD *)&v17 = v8;
    *((_QWORD *)&v17 + 1) = v11;
    v20 = 0LL;
    v15 = v11 < 0;
    if ( v11 )
    {
      if ( !v8 )
        goto LABEL_12;
      v15 = v11 < 0;
    }
    if ( !v15 || !v11 )
    {
      v20 = v11;
      v18 = v11;
      std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        (__int64)&v19,
        (_DWORD *)(v8 + 4 * a2),
        (_DWORD *)(v8 - 4 + 4 * v11),
        (__int64 *)&v17);
      goto LABEL_11;
    }
LABEL_12:
    _o__invalid_parameter_noinfo_noreturn(v13, v5, v6, v7);
    JUMPOUT(0x1801BA67FLL);
  }
LABEL_11:
  a1[1] += 4LL;
  return v8 + 4 * a2;
}
