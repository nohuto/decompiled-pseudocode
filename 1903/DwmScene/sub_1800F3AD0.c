/*
 * XREFs of sub_1800F3AD0 @ 0x1800F3AD0
 * Callers:
 *     sub_1801326BF @ 0x1801326BF (sub_1801326BF.c)
 * Callees:
 *     sub_1800DB274 @ 0x1800DB274 (sub_1800DB274.c)
 */

__int64 __fastcall sub_1800F3AD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800DB274(v4);
      v4 += 40LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
