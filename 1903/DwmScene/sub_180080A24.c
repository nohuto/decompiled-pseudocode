/*
 * XREFs of sub_180080A24 @ 0x180080A24
 * Callers:
 *     sub_180080260 @ 0x180080260 (sub_180080260.c)
 * Callees:
 *     sub_180080A84 @ 0x180080A84 (sub_180080A84.c)
 */

__int64 __fastcall sub_180080A24(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rbx

  if ( a3 > 32 )
  {
    v7 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      a1 = sub_180080A84(a1, a1 + 512, a4);
      --v7;
    }
    while ( v7 );
  }
  return sub_180080A84(a1, a2, a4);
}
