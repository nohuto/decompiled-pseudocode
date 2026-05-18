/*
 * XREFs of sub_18000E05C @ 0x18000E05C
 * Callers:
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_1800647D8 @ 0x1800647D8 (sub_1800647D8.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 *     sub_1800CFAE8 @ 0x1800CFAE8 (sub_1800CFAE8.c)
 *     sub_1800DD84C @ 0x1800DD84C (sub_1800DD84C.c)
 *     sub_1800E17A8 @ 0x1800E17A8 (sub_1800E17A8.c)
 *     sub_180114670 @ 0x180114670 (sub_180114670.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18000E05C(_QWORD *a1, int a2)
{
  unsigned int v2; // r8d
  _BYTE *v3; // r9
  unsigned int v5; // r8d
  _BYTE *v6; // rdi
  void *v7; // rsi
  _BYTE v9[3]; // [rsp+3Dh] [rbp-1Bh] BYREF

  v2 = a2;
  v3 = v9;
  if ( a2 >= 0 )
  {
    do
    {
      *--v3 = v2 % 0xA + 48;
      v2 /= 0xAu;
    }
    while ( v2 );
  }
  else
  {
    v5 = -a2;
    do
    {
      *--v3 = v5 % 0xA + 48;
      v5 /= 0xAu;
    }
    while ( v5 );
    *--v3 = 45;
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( v3 != v9 )
  {
    v6 = (_BYTE *)(v9 - v3);
    if ( (unsigned __int64)(v9 - v3) > a1[3] )
    {
      sub_18000E168(a1, v9 - v3, 0LL, v3);
    }
    else
    {
      v7 = a1;
      if ( a1[3] >= 0x10uLL )
        v7 = (void *)*a1;
      a1[2] = v6;
      memmove(v7, v3, v9 - v3);
      v6[(_QWORD)v7] = 0;
    }
  }
  return a1;
}
