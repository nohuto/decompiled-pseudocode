/*
 * XREFs of sub_1800D9FF8 @ 0x1800D9FF8
 * Callers:
 *     sub_180130D07 @ 0x180130D07 (sub_180130D07.c)
 * Callees:
 *     sub_1800675A8 @ 0x1800675A8 (sub_1800675A8.c)
 */

__int64 *__fastcall sub_1800D9FF8(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800675A8(v4, 0);
      v4 += 6;
    }
    while ( v4 != a3 );
  }
  return result;
}
