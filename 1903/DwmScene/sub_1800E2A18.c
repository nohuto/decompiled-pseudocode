/*
 * XREFs of sub_1800E2A18 @ 0x1800E2A18
 * Callers:
 *     sub_18013104C @ 0x18013104C (sub_18013104C.c)
 * Callees:
 *     sub_18010BA84 @ 0x18010BA84 (sub_18010BA84.c)
 */

__int64 __fastcall sub_1800E2A18(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_18010BA84(v4);
      v4 += 128LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
