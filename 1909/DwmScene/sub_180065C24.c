/*
 * XREFs of sub_180065C24 @ 0x180065C24
 * Callers:
 *     sub_1800682B4 @ 0x1800682B4 (sub_1800682B4.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18002B85C @ 0x18002B85C (sub_18002B85C.c)
 */

double *__fastcall sub_180065C24(_QWORD *a1, __int64 a2, int *a3)
{
  double *v5; // rax
  double *v6; // rbx
  double *result; // rax
  __int64 v9; // [rsp+58h] [rbp+10h]

  v5 = (double *)sub_18002B85C(a1);
  v6 = v5;
  v9 = (__int64)v5;
  *((_WORD *)v5 + 12) = 0;
  v5[6] = 0.0;
  v5[7] = 0.0;
  try
  {
    sub_18000F444((_QWORD *)v5 + 4, a2);
    v6[8] = (double)*a3;
    result = v6;
  }
  catch ( ... )
  {
    sub_18002B8AC((__int64)a1, v9);
    throw;
  }
  return result;
}
