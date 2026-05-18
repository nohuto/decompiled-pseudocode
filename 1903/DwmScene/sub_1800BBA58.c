/*
 * XREFs of sub_1800BBA58 @ 0x1800BBA58
 * Callers:
 *     sub_1800BBAC4 @ 0x1800BBAC4 (sub_1800BBAC4.c)
 * Callees:
 *     sub_1800BB584 @ 0x1800BB584 (sub_1800BB584.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1801273F2 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall sub_1800BBA58(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 result; // rax

  v3 = *(__int64 **)(a2 + 8);
  v6 = sub_1800BB584(a1, a2, (__int64)v3, a3);
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 == 0x555555555555554LL )
    std::_Xlength_error("list<T> too long");
  result = v7 + 1;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a2 + 8) = v6;
  *v3 = v6;
  return result;
}
