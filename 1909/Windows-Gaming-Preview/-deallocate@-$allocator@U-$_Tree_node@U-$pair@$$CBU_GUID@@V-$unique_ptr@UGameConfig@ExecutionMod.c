/*
 * XREFs of ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@_K@Z @ 0x18001DA9C
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__Windows::Gaming::Preview::GamesEnumeration::GameIdLess_std::allocator_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete______0___::_Buyheadnode_::_1_::catch$0 @ 0x180044FA0 (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_std--unique_ptr_ExecutionModel--GameConfig_gameco.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__Windows::Gaming::Preview::GamesEnumeration::GameIdLess_std::allocator_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete______0___::_Buynode__GUID_&_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete____::_1_::catch$1 @ 0x180045438 (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_std--unique_ptr_ExecutionModel--Game_ea_180045438.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__Windows::Gaming::Preview::GamesEnumeration::GameIdLess_std::allocator_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete______0___::_Buynode0_::_1_::catch$0 @ 0x180045487 (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_std--unique_ptr_ExecutionModel--Game_ea_180045487.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x38);
}
