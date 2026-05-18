/*
 * XREFs of sub_180124464 @ 0x180124464
 * Callers:
 *     sub_1801244DC @ 0x1801244DC (sub_1801244DC.c)
 * Callees:
 *     sub_1801243FC @ 0x1801243FC (sub_1801243FC.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180127502 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall sub_180124464(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  _QWORD *v6; // rsi
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax

  v6 = (_QWORD *)a2[1];
  v8 = sub_1801243FC(a1, a2, v6, a3, a4, a5);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 == 0x1745D1745D1745CLL )
    std::_Xlength_error("list<T> too long");
  result = v9 + 1;
  *(_QWORD *)(a1 + 8) = result;
  a2[1] = v8;
  *v6 = v8;
  return result;
}
