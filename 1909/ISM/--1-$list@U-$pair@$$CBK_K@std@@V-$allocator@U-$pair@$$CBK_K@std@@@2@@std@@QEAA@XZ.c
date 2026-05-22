/*
 * XREFs of ??1?$list@U?$pair@$$CBK_K@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800535B8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DeviceInfo___std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DeviceInfo______0___::_Hash_std::_Umap_traits_unsigned_long_DeviceInfo___std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DeviceInfo______0____::_1_::dtor$0 @ 0x18003B3DC (_std--_Hash_std--_Umap_traits_unsigned_long_DeviceInfo___std--_Uhash_compare_unsign_ea_18003B3DC.c)
 *     _InputStateManager::InputStateManager_::_1_::dtor$17 @ 0x18003C69E (_InputStateManager--InputStateManager_--_1_--dtor$17.c)
 *     _MPCInputRouter::MPCInputRouter_::_1_::dtor$16 @ 0x18003CC53 (_MPCInputRouter--MPCInputRouter_--_1_--dtor$16.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$15 @ 0x18003D0BA (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$15.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator::PointerState_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState____0___::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator::PointerState_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState____0____::_1_::dtor$0 @ 0x18006A1D6 (_std--_Hash_std--_Umap_traits_unsigned_long_InputInfoValidator--PointerState_std--__ea_18006A1D6.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXXZ @ 0x1800564BC (-clear@-$list@U-$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V-$allocator@U-$pair@$$CBKUPo.c)
 */

void __fastcall std::list<std::pair<unsigned long const,unsigned __int64>>::~list<std::pair<unsigned long const,unsigned __int64>>(
        void **a1)
{
  std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
