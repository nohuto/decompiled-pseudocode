/*
 * XREFs of sub_180106AC0 @ 0x180106AC0
 * Callers:
 *     sub_18010772C @ 0x18010772C (sub_18010772C.c)
 * Callees:
 *     sub_180106D24 @ 0x180106D24 (sub_180106D24.c)
 *     sub_180107210 @ 0x180107210 (sub_180107210.c)
 *     sub_180107898 @ 0x180107898 (sub_180107898.c)
 */

__int64 __fastcall sub_180106AC0(void *Src, __int64 a2, __int64 a3, void *a4)
{
  __int64 result; // rax
  __int64 i; // rsi

  result = sub_180107210(Src);
  if ( a3 > 32 )
  {
    sub_180107898(Src, a2, a4);
    result = sub_180106D24(a4);
    for ( i = 128LL; a3 > i; i *= 4LL )
    {
      sub_180106D24(Src);
      result = sub_180106D24(a4);
    }
  }
  return result;
}
