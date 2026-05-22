/*
 * XREFs of ??1?$list@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@2@@std@@QEAA@XZ @ 0x18006A3F4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::VelocityData_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::VelocityData____0___::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::VelocityData_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::VelocityData____0____::_1_::dtor$0 @ 0x18006A04A (_std--_Hash_std--_Umap_traits_unsigned_long_DragNDropProcessor--VelocityData_std--_Uhash_compare.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$17 @ 0x18006A366 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$17.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$17 @ 0x1800FE373 (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$17.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@2@@std@@QEAAXXZ @ 0x18006DC48 (-clear@-$list@U-$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKUVe.c)
 */

void __fastcall std::list<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>::~list<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>(
        void **a1)
{
  std::list<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
