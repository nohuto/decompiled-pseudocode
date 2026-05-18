/*
 * XREFs of sub_1801069D8 @ 0x1801069D8
 * Callers:
 *     sub_18010764C @ 0x18010764C (sub_18010764C.c)
 * Callees:
 *     sub_180106CA8 @ 0x180106CA8 (sub_180106CA8.c)
 *     sub_1801071B0 @ 0x1801071B0 (sub_1801071B0.c)
 *     sub_18010780C @ 0x18010780C (sub_18010780C.c)
 */

__int64 __fastcall sub_1801069D8(void *Src, __int64 a2, __int64 a3, void *a4)
{
  __int64 result; // rax
  __int64 i; // rsi

  result = sub_1801071B0(Src);
  if ( a3 > 32 )
  {
    sub_18010780C(Src, a2, a4);
    result = sub_180106CA8(a4);
    for ( i = 128LL; a3 > i; i *= 4LL )
    {
      sub_180106CA8(Src);
      result = sub_180106CA8(a4);
    }
  }
  return result;
}
