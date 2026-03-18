/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@UD2D_VECTOR_2F@@@detail@@V?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_VECTOR_2F@@@0@0V?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@@Z @ 0x1801846D0
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_VECTOR_2F@@_K0@Z @ 0x180185914 (-reserve_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_ex.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<D2D_VECTOR_2F>,stdext::checked_array_iterator<D2D_VECTOR_2F *>>(
        _QWORD *a1,
        _QWORD **a2,
        __int64 *a3)
{
  _QWORD *result; // rax
  _QWORD *i; // r10
  __int64 v5; // r9
  __int64 v6; // rax

  result = *a2;
  for ( i = a1; *a2 != (_QWORD *)*i; result = *a2 )
  {
    *a2 = result - 1;
    v5 = *a3;
    if ( !*a3 || (v6 = a3[2]) == 0 || (a1 = (_QWORD *)(v6 - 1), a3[2] = v6 - 1, v6 - 1 >= (unsigned __int64)a3[1]) )
    {
      _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, v5);
      JUMPOUT(0x180184725LL);
    }
    *(_QWORD *)(v5 + 8LL * (_QWORD)a1) = **a2;
  }
  return result;
}
