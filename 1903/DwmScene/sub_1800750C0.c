/*
 * XREFs of sub_1800750C0 @ 0x1800750C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E5C4 @ 0x18007E5C4 (sub_18007E5C4.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800750C0(_QWORD *a1, char a2)
{
  *a1 = &std::wstringbuf::`vftable';
  sub_18007E5C4(a1);
  std::wstreambuf::~wstreambuf<wchar_t,std::char_traits<wchar_t>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
