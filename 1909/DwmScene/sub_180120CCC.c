/*
 * XREFs of sub_180120CCC @ 0x180120CCC
 * Callers:
 *     sub_180121D08 @ 0x180121D08 (sub_180121D08.c)
 *     sub_180121DB4 @ 0x180121DB4 (sub_180121DB4.c)
 * Callees:
 *     sub_180120820 @ 0x180120820 (sub_180120820.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180127502 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall sub_180120CCC(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v6; // r8
  __int64 v7; // rax
  __int64 result; // rax

  v3 = *(_QWORD **)(a2 + 8);
  v6 = sub_180120820(a1, a2, (__int64)v3, a3);
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 == 0x1745D1745D1745CLL )
    std::_Xlength_error("list<T> too long");
  result = v7 + 1;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a2 + 8) = v6;
  *v3 = v6;
  return result;
}
