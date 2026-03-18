/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x1801AED28
 * Callers:
 *     ?AddLine@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z @ 0x1801ADB80 (-AddLine@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z.c)
 *     ?AddLines@CDrawListPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x1801ADBC0 (-AddLines@CDrawListPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?BeginFigure@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801ADC20 (-BeginFigure@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801B9D5C (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801AD864 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801AE8DC (-ensure_extra_capacity@-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 */

__int64 __fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        signed __int64 a3)
{
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // r9
  __int64 v10; // r8
  unsigned __int64 v11; // r10
  bool v12; // sf
  signed __int64 v13; // rcx
  _QWORD *v14; // rax
  bool v15; // sf
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  signed __int64 v20; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v8 = *a1;
  v9 = (_QWORD *)a1[1];
  *((_QWORD *)&v17 + 1) = a3;
  v18 = 0LL;
  v10 = ((__int64)v9 - v8) >> 3;
  v20 = 0LL;
  v11 = v10 - a2;
  *(_QWORD *)&v17 = v8 + 8 * v10;
  v19 = v17;
  v12 = a3 < 0;
  if ( a3 )
  {
    if ( !(v8 + 8 * v10) )
      goto LABEL_20;
    v12 = a3 < 0;
  }
  if ( v12 && a3 )
    goto LABEL_20;
  v20 = a3;
  v13 = a3;
  if ( a3 >= v11 )
    v13 = v10 - a2;
  v7 = 8 * v13;
  v14 = (_QWORD *)((char *)v9 - v7);
  v18 = a3;
  if ( v9 != (_QWORD *)((char *)v9 - v7) )
  {
    v6 = (_QWORD *)(v19 + 8 * a3);
    v7 = v18;
    do
    {
      --v9;
      if ( !(_QWORD)v17 )
        goto LABEL_20;
      if ( !v7 )
        goto LABEL_20;
      --v7;
      --v6;
      if ( v7 >= *((_QWORD *)&v17 + 1) )
        goto LABEL_20;
      *v6 = *v9;
    }
    while ( v9 != v14 );
  }
  if ( v11 > a3 )
  {
    *(_QWORD *)&v19 = v8;
    *((_QWORD *)&v19 + 1) = v10;
    v20 = 0LL;
    v15 = v10 < 0;
    if ( v10 )
    {
      if ( !v8 )
        goto LABEL_20;
      v15 = v10 < 0;
    }
    if ( v15 && v10 )
    {
LABEL_20:
      _o__invalid_parameter_noinfo_noreturn(v7, v6);
      __debugbreak();
    }
    v20 = v10;
    v17 = v19;
    v18 = v10;
    std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
      (__int64)&v19,
      (_QWORD *)(v8 + 8 * a2),
      (_QWORD *)(v8 + 8 * (v10 - a3)),
      (__int64 *)&v17);
  }
  a1[1] += 8 * a3;
  return v8 + 8 * a2;
}
