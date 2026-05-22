/*
 * XREFs of ??1?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x18006A684
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::MessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo____0___::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::MessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo____0____::_1_::dtor$0 @ 0x18006A392 (_std--_Hash_std--_Umap_traits_unsigned_long_DragNDropProcessor--MessageInfo_std--_U_ea_18006A392.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAXXZ @ 0x18006DF5C (-clear@-$list@U-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKVMes.c)
 */

void __fastcall std::list<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>::~list<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>(
        void **a1)
{
  std::list<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x50);
}
