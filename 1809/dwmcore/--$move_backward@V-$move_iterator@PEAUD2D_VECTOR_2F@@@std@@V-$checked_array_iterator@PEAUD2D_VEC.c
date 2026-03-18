/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUD2D_VECTOR_2F@@@std@@V?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@V?$move_iterator@PEAUD2D_VECTOR_2F@@@0@0V12@@Z @ 0x180184670
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_VECTOR_2F@@_K0@Z @ 0x180185914 (-reserve_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_ex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<D2D_VECTOR_2F *>,stdext::checked_array_iterator<D2D_VECTOR_2F *>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // r11
  __int64 result; // rax
  __int64 v6; // xmm1_8

  v4 = (_QWORD *)(*a4 + 8LL * a4[2]);
  while ( a2 != a3 )
    *--v4 = *--a3;
  result = a1;
  a4[2] = ((__int64)v4 - *a4) >> 3;
  v6 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
