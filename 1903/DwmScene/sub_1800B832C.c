/*
 * XREFs of sub_1800B832C @ 0x1800B832C
 * Callers:
 *     sub_1800B8320 @ 0x1800B8320 (sub_1800B8320.c)
 * Callees:
 *     sub_1800B7E10 @ 0x1800B7E10 (sub_1800B7E10.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_1800B832C(__int64 a1, char a2)
{
  __int64 v3; // rsi

  v3 = a1 - 144;
  sub_1800B7E10(a1);
  std::ios::~ios<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(v3);
  return v3;
}
