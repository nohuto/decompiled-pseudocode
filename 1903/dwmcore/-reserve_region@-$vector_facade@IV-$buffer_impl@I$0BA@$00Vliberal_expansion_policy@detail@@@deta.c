/*
 * XREFs of ?reserve_region@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAI_K0@Z @ 0x1801BBCD8
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801BB4FC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801B9008 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801BA304 (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 */

__int64 __fastcall detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  unsigned int *v5; // r9
  __int64 v6; // rbx
  unsigned int *v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r11
  bool v13; // sf
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-30h]
  _BYTE v18[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v6 = *a1;
  v17 = 0LL;
  v7 = (unsigned int *)a1[1];
  v16 = 1LL;
  v8 = ((__int64)v7 - v6) >> 2;
  v19 = 0LL;
  v9 = v8 - a2;
  v10 = v6 + 4 * v8;
  v15 = v10;
  if ( !v10 )
    goto LABEL_18;
  v19 = 1LL;
  v11 = 1LL;
  if ( v9 <= 1 )
    v11 = v8 - a2;
  v10 = 4 * v11;
  v5 = (unsigned int *)((char *)v7 - v10);
  v17 = 1LL;
  if ( v7 != (unsigned int *)((char *)v7 - v10) )
  {
    v12 = v15;
    v4 = v17;
    do
    {
      --v7;
      if ( !v12 )
        goto LABEL_18;
      if ( !v4 )
        goto LABEL_18;
      if ( --v4 >= v16 )
        goto LABEL_18;
      v10 = *v7;
      *(_DWORD *)(v12 + 4 * v4) = v10;
    }
    while ( v7 != v5 );
  }
  if ( v9 > 1 )
  {
    v17 = 0LL;
    v15 = v6;
    v16 = v8;
    v19 = 0LL;
    v13 = v8 < 0;
    if ( v8 )
    {
      if ( !v6 )
        goto LABEL_18;
      v13 = v8 < 0;
    }
    if ( v13 && v8 )
    {
LABEL_18:
      _o__invalid_parameter_noinfo_noreturn(v10, v4, v8, v5);
      JUMPOUT(0x1801BBE31LL);
    }
    v19 = v8;
    v17 = v8;
    std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
      (__int64)v18,
      (_DWORD *)(v6 + 4 * a2),
      (_DWORD *)(v6 + 4 * (v8 - 1)),
      &v15);
  }
  a1[1] += 4LL;
  return v6 + 4 * a2;
}
