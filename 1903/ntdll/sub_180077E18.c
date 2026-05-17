/*
 * XREFs of sub_180077E18 @ 0x180077E18
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180029888 @ 0x180029888 (sub_180029888.c)
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 */

__int64 __fastcall sub_180077E18(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // bx
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h] BYREF
  _WORD *v9; // [rsp+48h] [rbp-8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp+28h] BYREF

  result = sub_1800298C4((__int64)a1, &v7, &v11, &v6);
  if ( (int)result >= 0 )
  {
    result = sub_180029888(a2, &v9, &v8);
    if ( (int)result >= 0 )
    {
      v5 = v6;
      v10 = 0LL;
      result = sub_180029824(v7 + 2 * v6, v11 - v6, &v10, v9, v8);
      *a1 = 2 * (v10 + v5);
    }
  }
  return result;
}
