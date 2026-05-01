/*
 * XREFs of ??1?$MakeAllocator@VFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18000EA7C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_WindowsInternal::Shell::UnifiedTile::IUnifiedTile___WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager___Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler____::_1_::dtor$0 @ 0x180044931 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_180044931.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__GUID_const_&_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__std::shared_ptr_ExecutionModel::IGameConfigStore__Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler____::_1_::dtor$0 @ 0x180044943 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_180044943.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180044CCD (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassInitialize_--_1_.c)
 *     __lambda_363ecfaa426a2d345ca41bd67db72fc0_::operator()_::_1_::dtor$2 @ 0x180044DBB (__lambda_363ecfaa426a2d345ca41bd67db72fc0_--operator()_--_1_--dtor$2.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry_::_1_::dtor$1 @ 0x180044F10 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_AddGameCon_ea_180044F10.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer_Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer__GUID_&_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__std::shared_ptr_ExecutionModel::IGameConfigStore__const_&__::_1_::dtor$0 @ 0x1800452DC (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumeration--GameMode.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>::~MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
