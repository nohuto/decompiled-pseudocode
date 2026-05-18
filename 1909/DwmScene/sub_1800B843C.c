/*
 * XREFs of sub_1800B843C @ 0x1800B843C
 * Callers:
 *     sub_1800B8430 @ 0x1800B8430 (sub_1800B8430.c)
 * Callees:
 *     sub_1800B7F20 @ 0x1800B7F20 (sub_1800B7F20.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800B843C(__int64 a1, char a2)
{
  __int64 v3; // rsi

  v3 = a1 - 144;
  sub_1800B7F20(a1);
  std::ios::~ios<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(v3);
  return v3;
}
