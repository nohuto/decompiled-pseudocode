/*
 * XREFs of sub_180080B34 @ 0x180080B34
 * Callers:
 *     sub_180080370 @ 0x180080370 (sub_180080370.c)
 * Callees:
 *     sub_180080B94 @ 0x180080B94 (sub_180080B94.c)
 */

__int64 __fastcall sub_180080B34(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rbx

  if ( a3 > 32 )
  {
    v7 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      a1 = sub_180080B94(a1, a1 + 512, a4);
      --v7;
    }
    while ( v7 );
  }
  return sub_180080B94(a1, a2, a4);
}
