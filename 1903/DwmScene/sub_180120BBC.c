/*
 * XREFs of sub_180120BBC @ 0x180120BBC
 * Callers:
 *     sub_180121BF8 @ 0x180121BF8 (sub_180121BF8.c)
 *     sub_180121CA4 @ 0x180121CA4 (sub_180121CA4.c)
 * Callees:
 *     sub_180120710 @ 0x180120710 (sub_180120710.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1801273F2 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall sub_180120BBC(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v6; // r8
  __int64 v7; // rax
  __int64 result; // rax

  v3 = *(_QWORD **)(a2 + 8);
  v6 = sub_180120710(a1, a2, (__int64)v3, a3);
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 == 0x1745D1745D1745CLL )
    std::_Xlength_error("list<T> too long");
  result = v7 + 1;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a2 + 8) = v6;
  *v3 = v6;
  return result;
}
