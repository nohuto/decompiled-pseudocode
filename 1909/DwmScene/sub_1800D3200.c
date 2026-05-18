/*
 * XREFs of sub_1800D3200 @ 0x1800D3200
 * Callers:
 *     sub_1800D33D4 @ 0x1800D33D4 (sub_1800D33D4.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18007DEA0 @ 0x18007DEA0 (sub_18007DEA0.c)
 */

_QWORD *__fastcall sub_1800D3200(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  __int64 v7; // [rsp+48h] [rbp+10h]

  v3 = sub_18007DEA0(a1);
  v4 = v3;
  v7 = (__int64)v3;
  *((_WORD *)v3 + 12) = 0;
  v3[6] = 0LL;
  v3[7] = 0LL;
  try
  {
    sub_18000F444(v3 + 4, a2);
    *((_OWORD *)v4 + 4) = *(_OWORD *)(a2 + 32);
    *((_OWORD *)v4 + 5) = *(_OWORD *)(a2 + 48);
    result = v4;
  }
  catch ( ... )
  {
    sub_18007E58C((__int64)a1, v7);
    throw;
  }
  return result;
}
