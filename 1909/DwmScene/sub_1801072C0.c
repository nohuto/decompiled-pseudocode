/*
 * XREFs of sub_1801072C0 @ 0x1801072C0
 * Callers:
 *     sub_180106AE8 @ 0x180106AE8 (sub_180106AE8.c)
 * Callees:
 *     sub_180107380 @ 0x180107380 (sub_180107380.c)
 */

__int64 __fastcall sub_1801072C0(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_180107380(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_180107380(Src);
}
