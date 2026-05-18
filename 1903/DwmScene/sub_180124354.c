/*
 * XREFs of sub_180124354 @ 0x180124354
 * Callers:
 *     sub_1801243CC @ 0x1801243CC (sub_1801243CC.c)
 * Callees:
 *     sub_1801242EC @ 0x1801242EC (sub_1801242EC.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1801273F2 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall sub_180124354(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  _QWORD *v6; // rsi
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax

  v6 = (_QWORD *)a2[1];
  v8 = sub_1801242EC(a1, a2, v6, a3, a4, a5);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 == 0x1745D1745D1745CLL )
    std::_Xlength_error("list<T> too long");
  result = v9 + 1;
  *(_QWORD *)(a1 + 8) = result;
  a2[1] = v8;
  *v6 = v8;
  return result;
}
