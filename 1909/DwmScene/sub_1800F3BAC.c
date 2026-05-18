/*
 * XREFs of sub_1800F3BAC @ 0x1800F3BAC
 * Callers:
 *     sub_18013278D @ 0x18013278D (sub_18013278D.c)
 * Callees:
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 */

__int64 *__fastcall sub_1800F3BAC(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800676B8(v4, 0);
      v4 += 7;
    }
    while ( v4 != a3 );
  }
  return result;
}
