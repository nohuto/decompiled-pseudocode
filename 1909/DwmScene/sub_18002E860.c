/*
 * XREFs of sub_18002E860 @ 0x18002E860
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031DA0 @ 0x180031DA0 (sub_180031DA0.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002E860(_QWORD *a1, char a2)
{
  *a1 = &std::stringbuf::`vftable';
  sub_180031DA0(a1);
  std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
