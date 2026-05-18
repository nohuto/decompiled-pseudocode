/*
 * XREFs of sub_1800F3A9C @ 0x1800F3A9C
 * Callers:
 *     sub_18013267D @ 0x18013267D (sub_18013267D.c)
 * Callees:
 *     sub_1800675A8 @ 0x1800675A8 (sub_1800675A8.c)
 */

__int64 *__fastcall sub_1800F3A9C(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800675A8(v4, 0);
      v4 += 7;
    }
    while ( v4 != a3 );
  }
  return result;
}
