/*
 * XREFs of sub_1800E2B28 @ 0x1800E2B28
 * Callers:
 *     sub_18013115C @ 0x18013115C (sub_18013115C.c)
 * Callees:
 *     sub_18010BB94 @ 0x18010BB94 (sub_18010BB94.c)
 */

__int64 __fastcall sub_1800E2B28(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_18010BB94(v4);
      v4 += 128LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
