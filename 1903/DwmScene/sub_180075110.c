/*
 * XREFs of sub_180075110 @ 0x180075110
 * Callers:
 *     sub_1800750B0 @ 0x1800750B0 (sub_1800750B0.c)
 * Callees:
 *     sub_1800744A4 @ 0x1800744A4 (sub_1800744A4.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180075110(__int64 a1, char a2)
{
  __int64 v3; // rsi

  v3 = a1 - 152;
  sub_1800744A4(a1);
  std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(v3);
  return v3;
}
