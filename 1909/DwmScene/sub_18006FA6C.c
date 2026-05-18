/*
 * XREFs of sub_18006FA6C @ 0x18006FA6C
 * Callers:
 *     sub_1800762E4 @ 0x1800762E4 (sub_1800762E4.c)
 *     sub_1800A8660 @ 0x1800A8660 (sub_1800A8660.c)
 * Callees:
 *     sub_18006F400 @ 0x18006F400 (sub_18006F400.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180127502 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall sub_18006FA6C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 result; // rax

  v3 = *(__int64 **)(a2 + 8);
  v6 = sub_18006F400(a1, a2, (__int64)v3, a3);
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  result = v7 + 1;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a2 + 8) = v6;
  *v3 = v6;
  return result;
}
