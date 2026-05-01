/*
 * XREFs of ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@_K@Z @ 0x18000EB34
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer______0___::_Buynode_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__&__::_1_::catch$1 @ 0x1800449E9 (_std--_Tree_comp_alloc_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_Microsoft--WRL--ComPt.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer______0___::_Buynode0_::_1_::catch$0 @ 0x180044A38 (_std--_Tree_comp_alloc_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_Microsof_ea_180044A38.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer______0___::_Buyheadnode_::_1_::catch$0 @ 0x18004509A (_std--_Tree_comp_alloc_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_Microsof_ea_18004509A.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x30);
}
