/*
 * XREFs of sub_1800AB858 @ 0x1800AB858
 * Callers:
 *     sub_1800AA990 @ 0x1800AA990 (sub_1800AA990.c)
 *     sub_1800AB53C @ 0x1800AB53C (sub_1800AB53C.c)
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_BYTE *__fastcall sub_1800AB858(_QWORD *a1, _QWORD *a2, _BYTE *a3)
{
  _QWORD *v4; // r8
  _BYTE *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 5;
    v5 = (_BYTE *)(a3 - (_BYTE *)a1);
    do
    {
      *a3 = *((_BYTE *)v4 - 40);
      a3 += 48;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 32) = *(v4 - 4);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 24) = *(v4 - 3);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = *(v4 - 2);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = *(v4 - 1);
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = *v4;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4 += 6;
    }
    while ( v4 - 5 != a2 );
  }
  return a3;
}
