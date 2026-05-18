/*
 * XREFs of sub_180120D38 @ 0x180120D38
 * Callers:
 *     sub_180121C7C @ 0x180121C7C (sub_180121C7C.c)
 * Callees:
 *     sub_18012088C @ 0x18012088C (sub_18012088C.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180127502 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall sub_180120D38(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 *v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax

  v6 = *(__int64 **)(a2 + 8);
  v8 = sub_18012088C(a1, a2, (__int64)v6, a3, a4, a5);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 == 0x1745D1745D1745CLL )
    std::_Xlength_error("list<T> too long");
  result = v9 + 1;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a2 + 8) = v8;
  *v6 = v8;
  return result;
}
