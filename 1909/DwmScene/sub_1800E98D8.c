/*
 * XREFs of sub_1800E98D8 @ 0x1800E98D8
 * Callers:
 *     sub_1800E9728 @ 0x1800E9728 (sub_1800E9728.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

char *__fastcall sub_1800E98D8(_QWORD *a1, _QWORD *a2, char *a3)
{
  _QWORD *v4; // r8
  char *v5; // r10

  if ( a1 != a2 )
  {
    v4 = a1 + 4;
    v5 = (char *)(a3 - (char *)a1);
    do
    {
      *(_DWORD *)a3 = *((_DWORD *)v4 - 8);
      a3 += 56;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
      *(_OWORD *)((char *)v4 + (_QWORD)v5 - 24) = *(_OWORD *)(v4 - 3);
      *(_OWORD *)((char *)v4 + (_QWORD)v5 - 8) = *(_OWORD *)(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = 15LL;
      *((_BYTE *)v4 - 24) = 0;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 8) = v4[1];
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 16) = v4[2];
      v4 += 7;
    }
    while ( v4 - 4 != a2 );
  }
  return a3;
}
