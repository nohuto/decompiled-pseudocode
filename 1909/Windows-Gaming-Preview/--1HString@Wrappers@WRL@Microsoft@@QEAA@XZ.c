/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180011B78
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues_::_1_::dtor$1 @ 0x1800447C0 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_LoadPropertyValues_--.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::dtor$6 @ 0x1800447F6 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--dtor$6.c)
 *     __lambda_dee6256d89e21afd53df920967b40113_::operator()_::_1_::dtor$4 @ 0x180044808 (__lambda_dee6256d89e21afd53df920967b40113_--operator()_--_1_--dtor$4.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$14 @ 0x180044859 (_JsonDocumentFromGameConfigValues_--_1_--dtor$14.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig_::_1_::dtor$5 @ 0x18004486B (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_AttachGameModeConfig_--_1_--d.c)
 *     __lambda_dee6256d89e21afd53df920967b40113_::operator()_::_1_::dtor$1 @ 0x18004487D (__lambda_dee6256d89e21afd53df920967b40113_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$9 @ 0x180044AB8 (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFi_ea_180044AB8.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$0 @ 0x180044B9F (_SerializeRelatedProcessArray_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$1 @ 0x180044BB1 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGameConfigStore.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$5 @ 0x180044BC3 (_SerializeRelatedProcessArray_--_1_--dtor$5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileRemoved_::_1_::dtor$2 @ 0x180044BD5 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnTileRemoved_--_1_--dt.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_1_::dtor$1 @ 0x18004512C (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeCategoryFromStateRe.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeLaunchTarget_::_1_::dtor$0 @ 0x180045174 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeLaunchTarget_--_1_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$13 @ 0x180045186 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180045186.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$1 @ 0x180045198 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDisplayInfo_--_1.c)
 *     __lambda_672229d4a162f24ea0e3de44dcc55a21_::operator()_::_1_::dtor$6 @ 0x1800451CE (__lambda_672229d4a162f24ea0e3de44dcc55a21_--operator()_--_1_--dtor$6.c)
 *     __lambda_672229d4a162f24ea0e3de44dcc55a21_::operator()_::_1_::dtor$5 @ 0x1800451F2 (__lambda_672229d4a162f24ea0e3de44dcc55a21_--operator()_--_1_--dtor$5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetAllLastRunProcessPaths_::_1_::dtor$1 @ 0x18004525E (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetAllLastRunProcessPa.c)
 *     __lambda_21b8fbba22a3d8e1beadf144030eed52_::operator()_::_1_::dtor$0 @ 0x1800452A6 (__lambda_21b8fbba22a3d8e1beadf144030eed52_--operator()_--_1_--dtor$0.c)
 *     __lambda_21b8fbba22a3d8e1beadf144030eed52_::operator()_::_1_::dtor$3 @ 0x1800452CA (__lambda_21b8fbba22a3d8e1beadf144030eed52_--operator()_--_1_--dtor$3.c)
 *     _Windows::Foundation::Collections::Internal::SimpleKeyValuePair_HSTRING_____IInspectable___Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____1_::Make_::_1_::dtor$5 @ 0x180045372 (_Windows--Foundation--Collections--Internal--SimpleKeyValuePair_HSTRING_____IInspec_ea_180045372.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
