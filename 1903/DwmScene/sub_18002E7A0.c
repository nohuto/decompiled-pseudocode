/*
 * XREFs of sub_18002E7A0 @ 0x18002E7A0
 * Callers:
 *     sub_18002E740 @ 0x18002E740 (sub_18002E740.c)
 * Callees:
 *     sub_18002E070 @ 0x18002E070 (sub_18002E070.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_18002E7A0(__int64 a1, char a2)
{
  __int64 v3; // rsi

  v3 = a1 - 152;
  sub_18002E070(a1);
  std::ios::~ios<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(v3);
  return v3;
}
