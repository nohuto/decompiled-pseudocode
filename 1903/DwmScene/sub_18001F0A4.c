/*
 * XREFs of sub_18001F0A4 @ 0x18001F0A4
 * Callers:
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 * Callees:
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18001F0A4(_QWORD *a1, int a2)
{
  _WORD *v2; // r9
  unsigned int v3; // r8d
  unsigned int v5; // r8d
  _BYTE v7[6]; // [rsp+52h] [rbp-16h] BYREF

  v2 = v7;
  v3 = a2;
  if ( a2 >= 0 )
  {
    do
    {
      *--v2 = v3 % 0xA + 48;
      v3 /= 0xAu;
    }
    while ( v3 );
  }
  else
  {
    v5 = -a2;
    do
    {
      *--v2 = v5 % 0xA + 48;
      v5 /= 0xAu;
    }
    while ( v5 );
    *--v2 = 45;
  }
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  if ( v2 != (_WORD *)v7 )
    sub_180026168(a1, v2);
  return a1;
}
