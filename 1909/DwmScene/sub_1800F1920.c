/*
 * XREFs of sub_1800F1920 @ 0x1800F1920
 * Callers:
 *     sub_1800F13A8 @ 0x1800F13A8 (sub_1800F13A8.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1800F1920(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r10

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = 0LL;
      *(_QWORD *)&v5[v4] = 0LL;
      *a3 = *(_QWORD *)(v4 - 8);
      a3 += 5;
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      *(_QWORD *)(v4 - 8) = 0LL;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)&v5[v4 + 8] = 0LL;
      *(_QWORD *)&v5[v4 + 16] = 0LL;
      *(_QWORD *)&v5[v4 + 8] = *(_QWORD *)(v4 + 8);
      *(_QWORD *)&v5[v4 + 16] = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_DWORD *)&v5[v4 + 24] = *(_DWORD *)(v4 + 24);
      v4 += 40LL;
    }
    while ( v4 - 8 != a2 );
  }
  return a3;
}
