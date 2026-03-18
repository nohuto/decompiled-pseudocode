/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@PEAVCDrawListEntry@@@detail@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCDrawListEntry@@@0@0V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@Z @ 0x1801818B4
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x1800E6734 (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vli.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<CDrawListEntry *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
        _QWORD *a1,
        _QWORD **a2,
        __int64 *a3,
        __int64 a4)
{
  _QWORD *result; // rax
  _QWORD *i; // r11
  __int64 v6; // r10
  __int64 v7; // rax

  result = *a2;
  for ( i = a1; *a2 != (_QWORD *)*i; result = *a2 )
  {
    *a2 = result - 1;
    v6 = *a3;
    if ( !*a3 || (v7 = a3[2]) == 0 || (a4 = v7 - 1, a3[2] = v7 - 1, v7 - 1 >= (unsigned __int64)a3[1]) )
    {
      _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, a4);
      JUMPOUT(0x180181906LL);
    }
    a1 = (_QWORD *)**a2;
    *(_QWORD *)(v6 + 8 * a4) = a1;
  }
  return result;
}
