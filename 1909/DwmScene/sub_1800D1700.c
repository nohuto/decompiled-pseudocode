/*
 * XREFs of sub_1800D1700 @ 0x1800D1700
 * Callers:
 *     sub_180130A4F @ 0x180130A4F (sub_180130A4F.c)
 * Callees:
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 */

__int64 *__fastcall sub_1800D1700(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx
  __int64 *result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 6 )
    result = sub_1800676B8(i, 0);
  return result;
}
