/*
 * XREFs of sub_18006318C @ 0x18006318C
 * Callers:
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_1 @ 0x18012CB0B (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_18012CB0B.c)
 *     unknown_libname_49 @ 0x18012DE78 (unknown_libname_49.c)
 *     sub_18012DEC2 @ 0x18012DEC2 (sub_18012DEC2.c)
 *     sub_18012DF46 @ 0x18012DF46 (sub_18012DF46.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_2 @ 0x18012DF5E (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012DF5E.c)
 *     sub_18012E04E @ 0x18012E04E (sub_18012E04E.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_8 @ 0x18012E1B3 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_8.c)
 *     sub_18012E1BF @ 0x18012E1BF (sub_18012E1BF.c)
 *     sub_18013026B @ 0x18013026B (sub_18013026B.c)
 * Callees:
 *     sub_180062F60 @ 0x180062F60 (sub_180062F60.c)
 */

__int64 __fastcall sub_18006318C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return sub_180062F60(*(_QWORD *)a1, 0);
  return result;
}
