/*
 * XREFs of sub_1800D7A0C @ 0x1800D7A0C
 * Callers:
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 *     sub_18010FED4 @ 0x18010FED4 (sub_18010FED4.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 *__fastcall sub_1800D7A0C(__int64 *a1, unsigned int a2)
{
  _BYTE *v4; // r9
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  _BYTE v8[3]; // [rsp+3Dh] [rbp-1Bh] BYREF

  v4 = v8;
  do
  {
    *--v4 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( v4 != v8 )
  {
    v5 = (_BYTE *)(v8 - v4);
    if ( v8 - v4 > (unsigned __int64)a1[3] )
    {
      sub_18000E118(a1, v8 - v4, 0LL, v4);
    }
    else
    {
      v6 = (__int64)a1;
      if ( (unsigned __int64)a1[3] >= 0x10 )
        v6 = *a1;
      a1[2] = (__int64)v5;
      memmove((void *)v6, v4, v8 - v4);
      v5[v6] = 0;
    }
  }
  return a1;
}
