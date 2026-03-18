/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@W4D2D1_EDGE_FLAGS@@@detail@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@detail@@YAXV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@0@0V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@Z @ 0x18018472C
 * Callers:
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x180185A44 (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibe.c)
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x180187294 (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vli.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<enum D2D1_EDGE_FLAGS>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        unsigned int **a1,
        unsigned int **a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned int *result; // rax
  unsigned int **i; // r11
  __int64 v6; // r10
  __int64 v7; // rax

  result = *a2;
  for ( i = a1; *a2 != *i; result = *a2 )
  {
    *a2 = result - 1;
    v6 = *a3;
    if ( !*a3 || (v7 = a3[2]) == 0 || (a4 = v7 - 1, a3[2] = v7 - 1, v7 - 1 >= (unsigned __int64)a3[1]) )
    {
      _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, a4);
      JUMPOUT(0x18018477DLL);
    }
    a1 = (unsigned int **)**a2;
    *(_DWORD *)(v6 + 4 * a4) = (_DWORD)a1;
  }
  return result;
}
