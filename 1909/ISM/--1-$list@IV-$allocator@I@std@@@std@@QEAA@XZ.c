/*
 * XREFs of ??1?$list@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x180030FC4
 * Callers:
 *     _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0____::_1_::dtor$0 @ 0x180030CCA (_std--_Hash_std--_Uset_traits_unsigned_int_std--_Uhash_compare_unsigned_int_std--ha_ea_180030CCA.c)
 *     _SystemContextProvider::SystemContextProvider_::_1_::dtor$10 @ 0x18003B470 (_SystemContextProvider--SystemContextProvider_--_1_--dtor$10.c)
 *     _std::_Hash_std::_Uset_traits_enum__Button_std::_Uhash_compare_enum__Button_std::hash_enum__Button__std::equal_to_enum__Button____std::allocator_enum__Button__0___::_Hash_std::_Uset_traits_enum__Button_std::_Uhash_compare_enum__Button_std::hash_enum__Button__std::equal_to_enum__Button____std::allocator_enum__Button__0____::_1_::dtor$0 @ 0x18007450E (_std--_Hash_std--_Uset_traits_enum__Button_std--_Uhash_compare_enum__Button_std--hash_enum__Butt.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$12 @ 0x18007AB98 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$12.c)
 *     _CustomCursorApplication::CustomCursorApplication_::_1_::dtor$13 @ 0x1800C8CE1 (_CustomCursorApplication--CustomCursorApplication_--_1_--dtor$13.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$10 @ 0x180141C96 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$10.c)
 * Callees:
 *     ?clear@?$list@IV?$allocator@I@std@@@std@@QEAAXXZ @ 0x1800344C0 (-clear@-$list@IV-$allocator@I@std@@@std@@QEAAXXZ.c)
 */

void __fastcall std::list<unsigned int>::~list<unsigned int>(void **a1)
{
  std::list<unsigned int>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x18);
}
