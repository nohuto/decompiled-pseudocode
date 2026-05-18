/*
 * XREFs of sub_1800F1878 @ 0x1800F1878
 * Callers:
 *     sub_1800F1208 @ 0x1800F1208 (sub_1800F1208.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_OWORD *__fastcall sub_1800F1878(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r10

  if ( a1 != a2 )
  {
    v4 = a1 + 24;
    v5 = (char *)a3 - a1;
    do
    {
      *(_QWORD *)&v5[v4 - 8] = 0LL;
      *(_QWORD *)&v5[v4] = 0LL;
      *a3 = *(_OWORD *)(v4 - 24);
      a3[1] = *(_OWORD *)(v4 - 8);
      *(_QWORD *)(v4 - 8) = 0LL;
      a3 = (_OWORD *)((char *)a3 + 56);
      *(_QWORD *)v4 = 15LL;
      *(_BYTE *)(v4 - 24) = 0;
      *(_WORD *)&v5[v4 + 8] = *(_WORD *)(v4 + 8);
      *(_DWORD *)&v5[v4 + 12] = *(_DWORD *)(v4 + 12);
      *(_DWORD *)&v5[v4 + 16] = *(_DWORD *)(v4 + 16);
      *(_DWORD *)&v5[v4 + 20] = *(_DWORD *)(v4 + 20);
      *(_DWORD *)&v5[v4 + 24] = *(_DWORD *)(v4 + 24);
      v4 += 56LL;
    }
    while ( v4 - 24 != a2 );
  }
  return a3;
}
