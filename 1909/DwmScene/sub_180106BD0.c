/*
 * XREFs of sub_180106BD0 @ 0x180106BD0
 * Callers:
 *     sub_18010783C @ 0x18010783C (sub_18010783C.c)
 * Callees:
 *     sub_180106E34 @ 0x180106E34 (sub_180106E34.c)
 *     sub_180107320 @ 0x180107320 (sub_180107320.c)
 *     sub_1801079A8 @ 0x1801079A8 (sub_1801079A8.c)
 */

__int64 __fastcall sub_180106BD0(void *Src, __int64 a2, __int64 a3, void *a4)
{
  __int64 result; // rax
  __int64 i; // rsi

  result = sub_180107320(Src);
  if ( a3 > 32 )
  {
    sub_1801079A8(Src, a2, a4);
    result = sub_180106E34(a4);
    for ( i = 128LL; a3 > i; i *= 4LL )
    {
      sub_180106E34(Src);
      result = sub_180106E34(a4);
    }
  }
  return result;
}
