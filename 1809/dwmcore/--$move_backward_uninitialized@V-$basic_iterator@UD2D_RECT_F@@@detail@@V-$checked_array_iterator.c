/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x18000D584
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000AEE8 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000D434 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansio.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
        unsigned __int64 a1,
        _OWORD **a2,
        __int64 *a3)
{
  _OWORD *result; // rax
  _QWORD *i; // r10
  __int64 v5; // r9

  result = *a2;
  for ( i = (_QWORD *)a1; *a2 != (_OWORD *)*i; result = *a2 )
  {
    *a2 = result - 1;
    v5 = *a3;
    if ( !*a3 || (a1 = a3[2]) == 0 || (--a1, a3[2] = a1, a1 >= a3[1]) )
    {
      _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, v5);
      JUMPOUT(0x1800F3C2FLL);
    }
    a1 *= 2LL;
    *(_OWORD *)(v5 + 8 * a1) = **a2;
  }
  return result;
}
