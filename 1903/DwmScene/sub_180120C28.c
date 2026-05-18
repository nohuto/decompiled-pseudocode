/*
 * XREFs of sub_180120C28 @ 0x180120C28
 * Callers:
 *     sub_180121B6C @ 0x180121B6C (sub_180121B6C.c)
 * Callees:
 *     sub_18012077C @ 0x18012077C (sub_18012077C.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1801273F2 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall sub_180120C28(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 *v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax

  v6 = *(__int64 **)(a2 + 8);
  v8 = sub_18012077C(a1, a2, (__int64)v6, a3, a4, a5);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 == 0x1745D1745D1745CLL )
    std::_Xlength_error("list<T> too long");
  result = v9 + 1;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a2 + 8) = v8;
  *v6 = v8;
  return result;
}
