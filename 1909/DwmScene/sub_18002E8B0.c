/*
 * XREFs of sub_18002E8B0 @ 0x18002E8B0
 * Callers:
 *     sub_18002E850 @ 0x18002E850 (sub_18002E850.c)
 * Callees:
 *     sub_18002E180 @ 0x18002E180 (sub_18002E180.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_18002E8B0(__int64 a1, char a2)
{
  __int64 v3; // rsi

  v3 = a1 - 152;
  sub_18002E180(a1);
  std::ios::~ios<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(v3);
  return v3;
}
