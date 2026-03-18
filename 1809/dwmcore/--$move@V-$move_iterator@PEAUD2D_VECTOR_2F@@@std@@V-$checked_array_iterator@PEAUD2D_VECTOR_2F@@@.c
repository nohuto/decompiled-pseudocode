/*
 * XREFs of ??$move@V?$move_iterator@PEAUD2D_VECTOR_2F@@@std@@V?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@V?$move_iterator@PEAUD2D_VECTOR_2F@@@0@0V12@@Z @ 0x180059BAC
 * Callers:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEAD8 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEBAC (-clear_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<D2D_VECTOR_2F *>,stdext::checked_array_iterator<D2D_VECTOR_2F *>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int128 *a4)
{
  __int128 v4; // xmm2
  _QWORD *v5; // r9
  __int64 result; // rax

  v4 = *a4;
  v5 = (_QWORD *)(*(_QWORD *)a4 + 8LL * *((_QWORD *)a4 + 2));
  while ( a2 != a3 )
    *v5++ = *a2++;
  result = a1;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 16) = (__int64)((__int64)v5 - v4) >> 3;
  return result;
}
