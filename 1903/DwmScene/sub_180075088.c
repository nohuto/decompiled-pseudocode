/*
 * XREFs of sub_180075088 @ 0x180075088
 * Callers:
 *     sub_18012DE42 @ 0x18012DE42 (sub_18012DE42.c)
 * Callees:
 *     sub_1800744A4 @ 0x1800744A4 (sub_1800744A4.c)
 */

__int64 __fastcall sub_180075088(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_1800744A4(a1 + 152);
  return std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v1);
}
