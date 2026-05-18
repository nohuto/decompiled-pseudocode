/*
 * XREFs of sub_1800D7DC4 @ 0x1800D7DC4
 * Callers:
 *     sub_1800D7974 @ 0x1800D7974 (sub_1800D7974.c)
 * Callees:
 *     sub_180017D44 @ 0x180017D44 (sub_180017D44.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1800D7DC4(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rcx

  if ( a2 != a1 )
  {
    v5 = a2 - 2;
    do
    {
      a3 -= 6;
      sub_180017D44(a3, (__int64)(v5 - 4));
      v6 = *v5;
      v5 -= 6;
      a3[4] = v6;
      a3[5] = v5[7];
    }
    while ( v5 + 2 != a1 );
  }
  return a3;
}
