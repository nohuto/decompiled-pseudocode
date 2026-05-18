/*
 * XREFs of sub_1801074C0 @ 0x1801074C0
 * Callers:
 *     sub_180107B74 @ 0x180107B74 (sub_180107B74.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1801074C0(_QWORD *a1, _OWORD *a2, _OWORD *a3)
{
  _OWORD *i; // rax
  __int128 v5; // xmm1
  _OWORD *v6; // r9
  _OWORD *k; // rcx
  _OWORD *j; // rcx

  if ( a2 != a3 )
  {
    for ( i = a2 + 1; i != a3; ++i )
    {
      v5 = *i;
      v6 = i;
      if ( COERCE_FLOAT(*i) <= *(float *)a2 )
      {
        for ( j = i - 1; *(float *)&v5 > *(float *)j; --j )
        {
          *v6 = *j;
          v6 = j;
        }
        *v6 = v5;
      }
      else
      {
        for ( k = i; k != a2; k[1] = *k )
          --k;
        *a2 = v5;
      }
    }
  }
  *a1 = a3;
  return a1;
}
