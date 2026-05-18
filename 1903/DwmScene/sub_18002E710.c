/*
 * XREFs of sub_18002E710 @ 0x18002E710
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_3 @ 0x180128F49 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_3.c)
 *     sub_180128F55 @ 0x180128F55 (sub_180128F55.c)
 * Callees:
 *     sub_18002E070 @ 0x18002E070 (sub_18002E070.c)
 */

__int64 __fastcall sub_18002E710(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_18002E070(a1 + 152);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
