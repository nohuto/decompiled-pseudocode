/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@Z @ 0x1800FDEF8
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBIUComboButtonRegistration@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@AEAU?$pair@$$CBIUComboButtonRegistration@@@1@1@Z @ 0x1800FBF8C (--$_Insert_at@AEAU-$pair@$$CBIUComboButtonRegistration@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUCom.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_ComboButtonRegistration_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__ComboButtonRegistration____0___::_Insert_hint_std::pair_unsigned_int_const__ComboButtonRegistration__&_std::_Tree_node_std::pair_unsigned_int_const__ComboButtonRegistration__void_______::_1_::catch$41 @ 0x1800FC31A (_std--_Tree_std--_Tmap_traits_unsigned_int_ComboButtonRegistration_std--less_unsigned_int__std--.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_ComboButtonRegistration_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__ComboButtonRegistration____0___::_Insert_nohint_std::pair_unsigned_int_const__ComboButtonRegistration__&_std::_Tree_node_std::pair_unsigned_int_const__ComboButtonRegistration__void_______::_1_::catch$22 @ 0x1800FC47F (_std--_Tree_std--_Tmap_traits_unsigned_int_ComboButtonRegistration_std--less_unsign_ea_1800FC47F.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B0AC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Destroy_if_node(
        __int64 a1,
        void *a2)
{
  std::vector<Windows::UI::Color>::_Tidy((__int64)a2 + 48);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x70);
}
