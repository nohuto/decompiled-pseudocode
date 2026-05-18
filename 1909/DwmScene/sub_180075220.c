/*
 * XREFs of sub_180075220 @ 0x180075220
 * Callers:
 *     sub_1800751C0 @ 0x1800751C0 (sub_1800751C0.c)
 * Callees:
 *     sub_1800745B4 @ 0x1800745B4 (sub_1800745B4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180075220(__int64 a1, char a2)
{
  __int64 v3; // rsi

  v3 = a1 - 152;
  sub_1800745B4(a1);
  std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(v3);
  return v3;
}
