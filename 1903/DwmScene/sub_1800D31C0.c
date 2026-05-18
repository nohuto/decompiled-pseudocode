/*
 * XREFs of sub_1800D31C0 @ 0x1800D31C0
 * Callers:
 *     sub_1800D4080 @ 0x1800D4080 (sub_1800D4080.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18007DD90 @ 0x18007DD90 (sub_18007DD90.c)
 */

_QWORD *__fastcall sub_1800D31C0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  _QWORD *result; // rax
  __int64 v9; // [rsp+58h] [rbp+20h]

  v4 = sub_18007DD90(a1);
  v5 = v4;
  v9 = (__int64)v4;
  *((_WORD *)v4 + 12) = 0;
  v6 = *a3;
  v4[6] = 0LL;
  v4[7] = 0LL;
  try
  {
    sub_18000F3F4(v4 + 4, v6);
    v5[8] = 0LL;
    v5[9] = 0LL;
    result = v5;
  }
  catch ( ... )
  {
    sub_18007E47C((__int64)a1, v9);
    throw;
  }
  return result;
}
