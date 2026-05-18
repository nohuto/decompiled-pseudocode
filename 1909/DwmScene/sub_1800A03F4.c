/*
 * XREFs of sub_1800A03F4 @ 0x1800A03F4
 * Callers:
 *     sub_1800A0A5C @ 0x1800A0A5C (sub_1800A0A5C.c)
 *     sub_1800A68A0 @ 0x1800A68A0 (sub_1800A68A0.c)
 *     sub_1800BCEE0 @ 0x1800BCEE0 (sub_1800BCEE0.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18006DF5C @ 0x18006DF5C (sub_18006DF5C.c)
 */

_QWORD *__fastcall sub_1800A03F4(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  __int64 v7; // [rsp+48h] [rbp+10h]

  v3 = sub_18006DF5C(a1);
  v4 = v3;
  v7 = (__int64)v3;
  *((_WORD *)v3 + 12) = 0;
  v3[6] = 0LL;
  v3[7] = 0LL;
  try
  {
    sub_18000F444(v3 + 4, a2);
    result = v4;
  }
  catch ( ... )
  {
    sub_18006E0DC((__int64)a1, v7);
    throw;
  }
  return result;
}
