/*
 * XREFs of sub_18000E00C @ 0x18000E00C
 * Callers:
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 *     sub_1800646C8 @ 0x1800646C8 (sub_1800646C8.c)
 *     sub_18007B430 @ 0x18007B430 (sub_18007B430.c)
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800CF9D8 @ 0x1800CF9D8 (sub_1800CF9D8.c)
 *     sub_1800DD73C @ 0x1800DD73C (sub_1800DD73C.c)
 *     sub_1800E1698 @ 0x1800E1698 (sub_1800E1698.c)
 *     sub_180114560 @ 0x180114560 (sub_180114560.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18000E00C(_QWORD *a1, int a2)
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
      sub_18000E118(a1, v9 - v3, 0LL, v3);
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
