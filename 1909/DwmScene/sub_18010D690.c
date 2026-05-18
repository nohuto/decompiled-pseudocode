/*
 * XREFs of sub_18010D690 @ 0x18010D690
 * Callers:
 *     sub_18010D8DC @ 0x18010D8DC (sub_18010D8DC.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180111BEC @ 0x180111BEC (sub_180111BEC.c)
 */

_QWORD *__fastcall sub_18010D690(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *result; // rax
  __int64 v9; // [rsp+58h] [rbp+20h]

  v5 = (_QWORD *)sub_180111BEC(a1);
  v6 = v5;
  v9 = (__int64)v5;
  v5[4] = 0LL;
  v5[5] = 0LL;
  try
  {
    sub_18000F444(v5 + 2, a4);
    *((_BYTE *)v6 + 48) = *(_BYTE *)(a4 + 32);
    result = v6;
  }
  catch ( ... )
  {
    sub_180038DEC(a1, v9, 1LL);
    throw;
  }
  return result;
}
