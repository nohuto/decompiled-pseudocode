/*
 * XREFs of sub_1800AB8E8 @ 0x1800AB8E8
 * Callers:
 *     sub_1800AAB2C @ 0x1800AAB2C (sub_1800AAB2C.c)
 *     sub_1800B2B50 @ 0x1800B2B50 (sub_1800B2B50.c)
 *     sub_180121624 @ 0x180121624 (sub_180121624.c)
 *     sub_180124744 @ 0x180124744 (sub_180124744.c)
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

char *__fastcall sub_1800AB8E8(_QWORD *a1, _QWORD *a2, char *a3)
{
  _QWORD *v3; // rax
  char *v4; // r9

  if ( a1 != a2 )
  {
    v3 = a1 + 3;
    v4 = (char *)(a3 - (char *)a1);
    do
    {
      *(_QWORD *)((char *)v3 + (_QWORD)v4 - 8) = 0LL;
      *(_QWORD *)((char *)v3 + (_QWORD)v4) = 0LL;
      *(_OWORD *)a3 = *(_OWORD *)(v3 - 3);
      *((_OWORD *)a3 + 1) = *(_OWORD *)(v3 - 1);
      *(v3 - 1) = 0LL;
      a3 += 32;
      *v3 = 7LL;
      *((_WORD *)v3 - 12) = 0;
      v3 += 4;
    }
    while ( v3 - 3 != a2 );
  }
  return a3;
}
