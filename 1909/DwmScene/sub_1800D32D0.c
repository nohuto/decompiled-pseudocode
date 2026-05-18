/*
 * XREFs of sub_1800D32D0 @ 0x1800D32D0
 * Callers:
 *     sub_1800D4190 @ 0x1800D4190 (sub_1800D4190.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18007DEA0 @ 0x18007DEA0 (sub_18007DEA0.c)
 */

_QWORD *__fastcall sub_1800D32D0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  _QWORD *result; // rax
  __int64 v9; // [rsp+58h] [rbp+20h]

  v4 = sub_18007DEA0(a1);
  v5 = v4;
  v9 = (__int64)v4;
  *((_WORD *)v4 + 12) = 0;
  v6 = *a3;
  v4[6] = 0LL;
  v4[7] = 0LL;
  try
  {
    sub_18000F444(v4 + 4, v6);
    v5[8] = 0LL;
    v5[9] = 0LL;
    result = v5;
  }
  catch ( ... )
  {
    sub_18007E58C((__int64)a1, v9);
    throw;
  }
  return result;
}
