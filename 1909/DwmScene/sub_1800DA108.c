/*
 * XREFs of sub_1800DA108 @ 0x1800DA108
 * Callers:
 *     sub_180130E17 @ 0x180130E17 (sub_180130E17.c)
 * Callees:
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 */

__int64 *__fastcall sub_1800DA108(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800676B8(v4, 0);
      v4 += 6;
    }
    while ( v4 != a3 );
  }
  return result;
}
