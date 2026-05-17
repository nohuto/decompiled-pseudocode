/*
 * XREFs of sub_18002979C @ 0x18002979C
 * Callers:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_1800DDE98 @ 0x1800DDE98 (sub_1800DDE98.c)
 * Callees:
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180029888 @ 0x180029888 (sub_180029888.c)
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 */

__int64 __fastcall sub_18002979C(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // r11
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  result = sub_1800298C4(a1, v8, &v7, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = 0LL;
    result = sub_180029888(a2, &v6, &v10);
    if ( (int)result >= 0 )
    {
      result = sub_180029824(v8[0], v7, (unsigned int)&v9, v6, v10);
      v5 = v9;
    }
    *a1 = 2 * v5;
  }
  return result;
}
