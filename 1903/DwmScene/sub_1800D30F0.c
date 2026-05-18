/*
 * XREFs of sub_1800D30F0 @ 0x1800D30F0
 * Callers:
 *     sub_1800D32C4 @ 0x1800D32C4 (sub_1800D32C4.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18007DD90 @ 0x18007DD90 (sub_18007DD90.c)
 */

_QWORD *__fastcall sub_1800D30F0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  __int64 v7; // [rsp+48h] [rbp+10h]

  v3 = sub_18007DD90(a1);
  v4 = v3;
  v7 = (__int64)v3;
  *((_WORD *)v3 + 12) = 0;
  v3[6] = 0LL;
  v3[7] = 0LL;
  try
  {
    sub_18000F3F4(v3 + 4, a2);
    *((_OWORD *)v4 + 4) = *(_OWORD *)(a2 + 32);
    *((_OWORD *)v4 + 5) = *(_OWORD *)(a2 + 48);
    result = v4;
  }
  catch ( ... )
  {
    sub_18007E47C((__int64)a1, v7);
    throw;
  }
  return result;
}
