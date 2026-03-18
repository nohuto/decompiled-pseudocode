/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@M@detail@@V?$checked_array_iterator@PEAM@stdext@@@detail@@YAXV?$basic_iterator@M@0@0V?$checked_array_iterator@PEAM@stdext@@@Z @ 0x18000BFF8
 * Callers:
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18000BEC8 (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<float>,stdext::checked_array_iterator<float *>>(
        _QWORD *a1,
        _DWORD **a2,
        __int64 *a3)
{
  _DWORD *result; // rax
  __int64 v4; // r10
  __int64 v5; // rax

  for ( result = *a2; *a2 != (_DWORD *)*a1; result = *a2 )
  {
    *a2 = result - 1;
    v4 = *a3;
    if ( !*a3 || (v5 = a3[2]) == 0 || (a3[2] = v5 - 1, v5 - 1 >= (unsigned __int64)a3[1]) )
    {
      _o__invalid_parameter_noinfo_noreturn();
      JUMPOUT(0x1800F390ELL);
    }
    *(_DWORD *)(v4 + 4 * (v5 - 1)) = **a2;
  }
  return result;
}
