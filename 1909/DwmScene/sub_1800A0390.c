/*
 * XREFs of sub_1800A0390 @ 0x1800A0390
 * Callers:
 *     sub_1800A21FC @ 0x1800A21FC (sub_1800A21FC.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18002B85C @ 0x18002B85C (sub_18002B85C.c)
 */

_QWORD *__fastcall sub_1800A0390(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  _QWORD *result; // rax
  __int64 v9; // [rsp+68h] [rbp+20h]

  v4 = sub_18002B85C(a1);
  v5 = v4;
  v9 = (__int64)v4;
  *((_WORD *)v4 + 12) = 0;
  v6 = *a3;
  v4[6] = 0LL;
  v4[7] = 0LL;
  try
  {
    sub_18000F444(v4 + 4, v6);
    *((_WORD *)v5 + 32) = 0;
    result = v5;
  }
  catch ( ... )
  {
    sub_18002B8AC((__int64)a1, v9);
    throw;
  }
  return result;
}
