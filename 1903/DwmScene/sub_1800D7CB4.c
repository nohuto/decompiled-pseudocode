/*
 * XREFs of sub_1800D7CB4 @ 0x1800D7CB4
 * Callers:
 *     sub_1800D7864 @ 0x1800D7864 (sub_1800D7864.c)
 * Callees:
 *     sub_180017CD4 @ 0x180017CD4 (sub_180017CD4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1800D7CB4(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rcx

  if ( a2 != a1 )
  {
    v5 = a2 - 2;
    do
    {
      a3 -= 6;
      sub_180017CD4(a3, (__int64)(v5 - 4));
      v6 = *v5;
      v5 -= 6;
      a3[4] = v6;
      a3[5] = v5[7];
    }
    while ( v5 + 2 != a1 );
  }
  return a3;
}
