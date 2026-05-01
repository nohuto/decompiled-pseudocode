/*
 * XREFs of ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@_K@Z @ 0x18000EFCC
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer______0___::_Buynode_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__&___ptr64__::_1_::catch$1 @ 0x1800444E9 (_std--_Tree_comp_alloc_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_Microsoft--WRL--ComPt.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer______0___::_Buynode0_::_1_::catch$0 @ 0x180044538 (_std--_Tree_comp_alloc_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_Microsof_ea_180044538.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer______0___::_Buyheadnode_::_1_::catch$0 @ 0x180044B0E (_std--_Tree_comp_alloc_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_Microsof_ea_180044B0E.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, 0x30uLL);
}
