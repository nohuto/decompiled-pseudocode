/*
 * XREFs of sub_18010754C @ 0x18010754C
 * Callers:
 *     sub_180107C64 @ 0x180107C64 (sub_180107C64.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18010754C(_QWORD *a1, _OWORD *a2, _OWORD *a3)
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
      if ( *(float *)a2 <= COERCE_FLOAT(*i) )
      {
        for ( j = i - 1; *(float *)j > *(float *)&v5; --j )
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
