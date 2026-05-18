/*
 * XREFs of sub_1800BB644 @ 0x1800BB644
 * Callers:
 *     sub_1800BB6E4 @ 0x1800BB6E4 (sub_1800BB6E4.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_1800CAE68 @ 0x1800CAE68 (sub_1800CAE68.c)
 */

_QWORD *__fastcall sub_1800BB644(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax
  __int64 v9; // [rsp+58h] [rbp+20h]

  v5 = (_QWORD *)sub_1800CAE68(a1);
  v6 = v5;
  v9 = (__int64)v5;
  v5[4] = 0LL;
  v5[5] = 0LL;
  try
  {
    sub_18001115C(v5 + 2, a4);
    result = v6;
  }
  catch ( ... )
  {
    sub_18002BCA4(a1, v9, 1LL);
    throw;
  }
  return result;
}
