/*
 * XREFs of sub_1800A02E4 @ 0x1800A02E4
 * Callers:
 *     sub_1800A094C @ 0x1800A094C (sub_1800A094C.c)
 *     sub_1800A6790 @ 0x1800A6790 (sub_1800A6790.c)
 *     sub_1800BCDD0 @ 0x1800BCDD0 (sub_1800BCDD0.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18006DE4C @ 0x18006DE4C (sub_18006DE4C.c)
 */

_QWORD *__fastcall sub_1800A02E4(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  __int64 v7; // [rsp+48h] [rbp+10h]

  v3 = sub_18006DE4C(a1);
  v4 = v3;
  v7 = (__int64)v3;
  *((_WORD *)v3 + 12) = 0;
  v3[6] = 0LL;
  v3[7] = 0LL;
  try
  {
    sub_18000F3F4(v3 + 4, a2);
    result = v4;
  }
  catch ( ... )
  {
    sub_18006DFCC((__int64)a1, v7);
    throw;
  }
  return result;
}
