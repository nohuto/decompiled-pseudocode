/*
 * XREFs of sub_1800D8644 @ 0x1800D8644
 * Callers:
 *     sub_1800D7414 @ 0x1800D7414 (sub_1800D7414.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

char *__fastcall sub_1800D8644(_QWORD *a1, _QWORD *a2, char *a3)
{
  char *result; // rax
  _QWORD *v4; // r8
  char *v5; // r9

  result = a3;
  if ( a1 != a2 )
  {
    v4 = a1 + 3;
    v5 = (char *)(result - (char *)a1);
    do
    {
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
      *(_OWORD *)result = *(_OWORD *)(v4 - 3);
      *((_OWORD *)result + 1) = *(_OWORD *)(v4 - 1);
      *(v4 - 1) = 0LL;
      result += 48;
      *v4 = 15LL;
      *((_BYTE *)v4 - 24) = 0;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 8) = v4[1];
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 16) = v4[2];
      v4 += 6;
    }
    while ( v4 - 3 != a2 );
  }
  return result;
}
