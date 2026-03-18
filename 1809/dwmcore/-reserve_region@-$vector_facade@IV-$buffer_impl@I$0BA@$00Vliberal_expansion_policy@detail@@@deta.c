/*
 * XREFs of ?reserve_region@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAI_K0@Z @ 0x180187128
 * Callers:
 *     ?push_back@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAI@Z @ 0x1801870CC (-push_back@-$vector_facade@IV-$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000C018 (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 */

__int64 __fastcall detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  unsigned int *v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int *v11; // r11
  bool v12; // sf
  _DWORD *i; // rax
  _DWORD *v15; // [rsp+20h] [rbp-40h]

  detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v5 = *a1;
  v6 = (unsigned int *)a1[1];
  v7 = ((__int64)v6 - *a1) >> 2;
  v8 = v7 - a2;
  v9 = 4 * v7 + *a1;
  v15 = (_DWORD *)v9;
  if ( !v9 )
    goto LABEL_20;
  v10 = v7 - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v9 = 4 * v10;
  v11 = (unsigned int *)((char *)v6 - v9);
  if ( v6 != (unsigned int *)((char *)v6 - v9) )
  {
    v4 = 1LL;
    do
    {
      --v6;
      if ( !v15 )
        goto LABEL_20;
      if ( !v4 )
        goto LABEL_20;
      if ( --v4 )
        goto LABEL_20;
      v9 = *v6;
      *v15 = v9;
    }
    while ( v6 != v11 );
  }
  if ( v8 > 1 )
  {
    v12 = v7 < 0;
    if ( v7 )
    {
      if ( !v5 )
        goto LABEL_20;
      v12 = v7 < 0;
    }
    if ( v12 && v7 )
    {
LABEL_20:
      _o__invalid_parameter_noinfo_noreturn(v9, v4, v7, v5);
      JUMPOUT(0x18018728CLL);
    }
    for ( i = (_DWORD *)(v5 - 4 + 4 * v7); (_DWORD *)(v5 + 4 * a2) != i; i[1] = *i )
      --i;
  }
  a1[1] += 4LL;
  return v5 + 4 * a2;
}
