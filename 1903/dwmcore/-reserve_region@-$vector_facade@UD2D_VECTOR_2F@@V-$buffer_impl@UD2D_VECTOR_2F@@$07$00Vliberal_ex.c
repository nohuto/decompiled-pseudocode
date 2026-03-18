/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_VECTOR_2F@@_K0@Z @ 0x1801BA408
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801B92EC (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801BB4FC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801AF124 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801B019C (-ensure_extra_capacity@-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_VECTOR_2F@@@detail@@V?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_VECTOR_2F@@@0@0V?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@@Z @ 0x1801B9090 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_VECTOR_2F@@@detail@@V-$checked_array_itera.c)
 */

__int64 __fastcall detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
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
  detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v18 = 0LL;
  v8 = *a1;
  v9 = a1[1];
  v10 = v9 - *a1;
  *((_QWORD *)&v17 + 1) = 1LL;
  v11 = v10 >> 3;
  v18 = 0LL;
  v12 = v11 - a2;
  v13 = v8 + 8 * v11;
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
  v21 = v9 - 8 * v14;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_VECTOR_2F>,stdext::checked_array_iterator<D2D_VECTOR_2F *>>(
    &v21,
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
      std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
        (__int64)&v19,
        (_QWORD *)(v8 + 8 * a2),
        (_QWORD *)(v8 - 8 + 8 * v11),
        (__int64 *)&v17);
      goto LABEL_11;
    }
LABEL_12:
    _o__invalid_parameter_noinfo_noreturn(v13, v5, v6, v7);
    JUMPOUT(0x1801BA53FLL);
  }
LABEL_11:
  a1[1] += 8LL;
  return v8 + 8 * a2;
}
