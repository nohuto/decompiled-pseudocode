/*
 * XREFs of sub_180075198 @ 0x180075198
 * Callers:
 *     sub_18012DF52 @ 0x18012DF52 (sub_18012DF52.c)
 * Callees:
 *     sub_1800745B4 @ 0x1800745B4 (sub_1800745B4.c)
 */

__int64 __fastcall sub_180075198(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_1800745B4(a1 + 152);
  return std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v1);
}
