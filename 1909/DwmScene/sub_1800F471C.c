/*
 * XREFs of sub_1800F471C @ 0x1800F471C
 * Callers:
 *     sub_1800F436C @ 0x1800F436C (sub_1800F436C.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1800F471C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r10
  __int64 v6; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = 0LL;
      *(_QWORD *)&v5[v4] = 0LL;
      if ( *(_QWORD *)v4 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v4 + 8LL));
      *a3 = *(_QWORD *)(v4 - 8);
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      *(_QWORD *)&v5[v4 + 8] = 0LL;
      *(_QWORD *)&v5[v4 + 16] = 0LL;
      v6 = *(_QWORD *)(v4 + 16);
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      a3 += 5;
      *(_QWORD *)&v5[v4 + 8] = *(_QWORD *)(v4 + 8);
      *(_QWORD *)&v5[v4 + 16] = *(_QWORD *)(v4 + 16);
      *(_DWORD *)&v5[v4 + 24] = *(_DWORD *)(v4 + 24);
      v4 += 40LL;
    }
    while ( v4 - 8 != a2 );
  }
  return a3;
}
