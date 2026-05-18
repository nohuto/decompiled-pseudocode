/*
 * XREFs of sub_18002E820 @ 0x18002E820
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_3 @ 0x180129059 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_3.c)
 *     sub_180129065 @ 0x180129065 (sub_180129065.c)
 * Callees:
 *     sub_18002E180 @ 0x18002E180 (sub_18002E180.c)
 */

__int64 __fastcall sub_18002E820(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_18002E180(a1 + 152);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
