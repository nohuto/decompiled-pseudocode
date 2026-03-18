/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x180182314
 * Callers:
 *     ?AddLines@CDrawListPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180181B80 (-AddLines@CDrawListPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?push_back@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUD2D_POINT_2F@@@Z @ 0x1801822E0 (-push_back@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansi.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801820DC (-ensure_extra_capacity@-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 */

__int64 __fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        signed __int64 a3)
{
  _QWORD *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rcx
  bool v12; // sf
  signed __int64 v13; // rcx
  _QWORD *v14; // r10
  _QWORD *v15; // rax
  bool v16; // sf
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  unsigned __int64 v20; // [rsp+20h] [rbp-40h]

  detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v7 = *a1;
  v8 = a1[1];
  v9 = (v8 - *a1) >> 3;
  v10 = v9 - a2;
  v11 = *a1 + 8 * v9;
  v20 = v11;
  v12 = a3 < 0;
  if ( a3 )
  {
    if ( !v11 )
      goto LABEL_21;
    v12 = a3 < 0;
  }
  if ( v12 )
  {
    v11 = -a3;
    if ( a3 )
      goto LABEL_21;
  }
  v13 = v9 - a2;
  if ( a3 < v10 )
    v13 = a3;
  v11 = 8 * v13;
  v14 = (_QWORD *)(v8 - v11);
  if ( v8 != v8 - v11 )
  {
    v11 = *a1 + 8 * v9;
    v15 = (_QWORD *)(v8 - 8);
    if ( v20 )
    {
      v6 = (_QWORD *)(v20 + 8 * a3);
      v11 = a3;
      while ( v11 )
      {
        --v11;
        --v6;
        if ( v11 >= a3 )
          break;
        *v6 = *v15;
        if ( v15 == v14 )
          goto LABEL_15;
        --v15;
      }
    }
    goto LABEL_21;
  }
LABEL_15:
  if ( v10 > a3 )
  {
    v16 = v9 < 0;
    if ( v9 )
    {
      if ( !v7 )
        goto LABEL_21;
      v16 = v9 < 0;
    }
    if ( v16 && v9 )
    {
LABEL_21:
      _o__invalid_parameter_noinfo_noreturn(v11, v6, v9, v7);
      __debugbreak();
    }
    v17 = (_QWORD *)(v7 + 8 * (v9 - a3));
    v18 = (_QWORD *)(8 * (v9 - a3) + v7 + 8 * a3);
    while ( (_QWORD *)(v7 + 8 * a2) != v17 )
      *--v18 = *--v17;
  }
  a1[1] += 8 * a3;
  return v7 + 8 * a2;
}
