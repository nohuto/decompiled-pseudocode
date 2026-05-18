/*
 * XREFs of sub_180106AE8 @ 0x180106AE8
 * Callers:
 *     sub_18010775C @ 0x18010775C (sub_18010775C.c)
 * Callees:
 *     sub_180106DB8 @ 0x180106DB8 (sub_180106DB8.c)
 *     sub_1801072C0 @ 0x1801072C0 (sub_1801072C0.c)
 *     sub_18010791C @ 0x18010791C (sub_18010791C.c)
 */

__int64 __fastcall sub_180106AE8(void *Src, __int64 a2, __int64 a3, void *a4)
{
  __int64 result; // rax
  __int64 i; // rsi

  result = sub_1801072C0(Src);
  if ( a3 > 32 )
  {
    sub_18010791C(Src, a2, a4);
    result = sub_180106DB8(a4);
    for ( i = 128LL; a3 > i; i *= 4LL )
    {
      sub_180106DB8(Src);
      result = sub_180106DB8(a4);
    }
  }
  return result;
}
