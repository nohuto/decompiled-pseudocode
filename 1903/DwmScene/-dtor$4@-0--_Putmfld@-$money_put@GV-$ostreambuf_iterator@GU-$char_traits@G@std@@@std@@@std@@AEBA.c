/*
 * XREFs of ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA @ 0x180128647
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `std::money_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Putmfld'::`1'::dtor$4(
        __int64 a1,
        __int64 a2)
{
  std::string::_Tidy_deallocate((__int64 *)(a2 + 248));
}
