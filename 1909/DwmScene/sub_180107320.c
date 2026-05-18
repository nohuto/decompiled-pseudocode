/*
 * XREFs of sub_180107320 @ 0x180107320
 * Callers:
 *     sub_180106BD0 @ 0x180106BD0 (sub_180106BD0.c)
 * Callees:
 *     sub_18010741C @ 0x18010741C (sub_18010741C.c)
 */

__int64 __fastcall sub_180107320(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_18010741C(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_18010741C(Src);
}
