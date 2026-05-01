/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180011BD8
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues_::_1_::dtor$1 @ 0x1800442C0 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_LoadPropertyValues_--.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::dtor$6 @ 0x1800442F6 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--dtor$6.c)
 *     __lambda_4a5598c51892c1f8c3ff49449b4dbebf_::operator()_::_1_::dtor$4 @ 0x180044308 (__lambda_4a5598c51892c1f8c3ff49449b4dbebf_--operator()_--_1_--dtor$4.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$14 @ 0x180044359 (_JsonDocumentFromGameConfigValues_--_1_--dtor$14.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig_::_1_::dtor$5 @ 0x18004436B (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_AttachGameModeConfig_--_1_--d.c)
 *     __lambda_4a5598c51892c1f8c3ff49449b4dbebf_::operator()_::_1_::dtor$1 @ 0x18004437D (__lambda_4a5598c51892c1f8c3ff49449b4dbebf_--operator()_--_1_--dtor$1.c)
 *     _Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_9afbe6e87994f6867231074aca7528f3____Windows::Internal::CNoResult_::Run_::_1_::dtor$1 @ 0x1800445B8 (_Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_9afbe6e87994f6.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$0 @ 0x18004469F (_SerializeRelatedProcessArray_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$1 @ 0x1800446B1 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGameConfigStore.c)
 *     _Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_9afbe6e87994f6867231074aca7528f3____Windows::Internal::CNoResult_::Run_::_1_::dtor$0 @ 0x1800446C3 (_Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_9_ea_1800446C3.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileRemoved_::_1_::dtor$2 @ 0x1800446D5 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnTileRemoved_--_1_--dt.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_1_::dtor$1 @ 0x180044BC4 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeCatego_ea_180044BC4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeLaunchTarget_::_1_::dtor$0 @ 0x180044BFA (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeLaunchTarget_--_1_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$13 @ 0x180044C0C (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180044C0C.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$1 @ 0x180044C1E (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDisplayInfo_--_1.c)
 *     __lambda_672229d4a162f24ea0e3de44dcc55a21_::operator()_::_1_::dtor$6 @ 0x180044C54 (__lambda_672229d4a162f24ea0e3de44dcc55a21_--operator()_--_1_--dtor$6.c)
 *     __lambda_672229d4a162f24ea0e3de44dcc55a21_::operator()_::_1_::dtor$5 @ 0x180044C78 (__lambda_672229d4a162f24ea0e3de44dcc55a21_--operator()_--_1_--dtor$5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetAllLastRunProcessPaths_::_1_::dtor$1 @ 0x180044CE4 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetAllLastRunProcessPa.c)
 *     __lambda_21b8fbba22a3d8e1beadf144030eed52_::operator()_::_1_::dtor$0 @ 0x180044D2C (__lambda_21b8fbba22a3d8e1beadf144030eed52_--operator()_--_1_--dtor$0.c)
 *     __lambda_21b8fbba22a3d8e1beadf144030eed52_::operator()_::_1_::dtor$3 @ 0x180044D50 (__lambda_21b8fbba22a3d8e1beadf144030eed52_--operator()_--_1_--dtor$3.c)
 *     _Windows::Foundation::Collections::Internal::SimpleKeyValuePair_HSTRING_______ptr64_IInspectable_____ptr64_Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable_____ptr64__1_::Make_::_1_::dtor$5 @ 0x180044DE2 (_Windows--Foundation--Collections--Internal--SimpleKeyValuePair_HSTRING_______ptr64_ea_180044DE2.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
