/*
 * XREFs of sub_18002E750 @ 0x18002E750
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031C90 @ 0x180031C90 (sub_180031C90.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002E750(_QWORD *a1, char a2)
{
  *a1 = &std::stringbuf::`vftable';
  sub_180031C90(a1);
  std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
