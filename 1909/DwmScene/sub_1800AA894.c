/*
 * XREFs of sub_1800AA894 @ 0x1800AA894
 * Callers:
 *     sub_1800AAA08 @ 0x1800AAA08 (sub_1800AAA08.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180069494 @ 0x180069494 (sub_180069494.c)
 */

_QWORD *__fastcall sub_1800AA894(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  __int64 v7; // [rsp+58h] [rbp+10h]

  v3 = sub_180069494(a1);
  v4 = v3;
  v7 = (__int64)v3;
  *((_WORD *)v3 + 12) = 0;
  *((_DWORD *)v3 + 8) = *(_DWORD *)a2;
  v3[7] = 0LL;
  v3[8] = 0LL;
  try
  {
    sub_18000F444(v3 + 5, a2 + 8);
    *(_OWORD *)(v4 + 9) = *(_OWORD *)(a2 + 40);
    result = v4;
  }
  catch ( ... )
  {
    sub_1800698A8((__int64)a1, v7);
    throw;
  }
  return result;
}
