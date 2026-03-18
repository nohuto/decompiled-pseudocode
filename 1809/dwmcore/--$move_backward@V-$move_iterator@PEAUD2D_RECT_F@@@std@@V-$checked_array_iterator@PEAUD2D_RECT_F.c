/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x18022A750
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000AEE8 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000D434 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        _QWORD *a4)
{
  _OWORD *v4; // r10
  __int64 result; // rax
  __int64 v6; // xmm1_8

  v4 = (_OWORD *)(*a4 + 16LL * a4[2]);
  while ( a2 != a3 )
    *--v4 = *--a3;
  result = a1;
  a4[2] = ((__int64)v4 - *a4) >> 4;
  v6 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
