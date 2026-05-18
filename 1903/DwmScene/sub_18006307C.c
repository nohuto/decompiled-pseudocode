/*
 * XREFs of sub_18006307C @ 0x18006307C
 * Callers:
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_1 @ 0x18012C9FB (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_18012C9FB.c)
 *     unknown_libname_49 @ 0x18012DD68 (unknown_libname_49.c)
 *     sub_18012DDB2 @ 0x18012DDB2 (sub_18012DDB2.c)
 *     sub_18012DE36 @ 0x18012DE36 (sub_18012DE36.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_2 @ 0x18012DE4E (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012DE4E.c)
 *     sub_18012DF3E @ 0x18012DF3E (sub_18012DF3E.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_8 @ 0x18012E0A3 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_8.c)
 *     sub_18012E0AF @ 0x18012E0AF (sub_18012E0AF.c)
 *     sub_18013015B @ 0x18013015B (sub_18013015B.c)
 * Callees:
 *     sub_180062E50 @ 0x180062E50 (sub_180062E50.c)
 */

__int64 __fastcall sub_18006307C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return sub_180062E50(*(_QWORD *)a1, 0);
  return result;
}
