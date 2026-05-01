/*
 * XREFs of ??1?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x180211748
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo____0___::_Hash_std::_Umap_traits_unsigned_int_Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo____0____::_1_::dtor$0 @ 0x180210B1B (_std--_Hash_std--_Umap_traits_unsigned_int_Windows--Internal--OneCore--ViewEventHandlers--Compon.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x180220E78 (-clear@-$list@U-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@I.c)
 */

void __fastcall std::list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::~list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>(
        void **a1)
{
  std::list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x68);
}
