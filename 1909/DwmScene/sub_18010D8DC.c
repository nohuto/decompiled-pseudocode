/*
 * XREFs of sub_18010D8DC @ 0x18010D8DC
 * Callers:
 *     sub_18010DB00 @ 0x18010DB00 (sub_18010DB00.c)
 * Callees:
 *     sub_18010D690 @ 0x18010D690 (sub_18010D690.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180127502 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall sub_18010D8DC(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v6; // r8
  __int64 v7; // rax
  __int64 result; // rax

  v3 = *(_QWORD **)(a2 + 8);
  v6 = sub_18010D690(a1, a2, (__int64)v3, a3);
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 == 0x492492492492491LL )
    std::_Xlength_error("list<T> too long");
  result = v7 + 1;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a2 + 8) = v6;
  *v3 = v6;
  return result;
}
