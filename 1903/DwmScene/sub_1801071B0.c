/*
 * XREFs of sub_1801071B0 @ 0x1801071B0
 * Callers:
 *     sub_1801069D8 @ 0x1801069D8 (sub_1801069D8.c)
 * Callees:
 *     sub_180107270 @ 0x180107270 (sub_180107270.c)
 */

__int64 __fastcall sub_1801071B0(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_180107270(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_180107270(Src);
}
