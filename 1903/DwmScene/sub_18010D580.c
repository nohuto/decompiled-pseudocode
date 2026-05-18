/*
 * XREFs of sub_18010D580 @ 0x18010D580
 * Callers:
 *     sub_18010D7CC @ 0x18010D7CC (sub_18010D7CC.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180111ADC @ 0x180111ADC (sub_180111ADC.c)
 */

_QWORD *__fastcall sub_18010D580(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *result; // rax
  __int64 v9; // [rsp+58h] [rbp+20h]

  v5 = (_QWORD *)sub_180111ADC(a1);
  v6 = v5;
  v9 = (__int64)v5;
  v5[4] = 0LL;
  v5[5] = 0LL;
  try
  {
    sub_18000F3F4(v5 + 2, a4);
    *((_BYTE *)v6 + 48) = *(_BYTE *)(a4 + 32);
    result = v6;
  }
  catch ( ... )
  {
    sub_180038CDC(a1, v9, 1LL);
    throw;
  }
  return result;
}
