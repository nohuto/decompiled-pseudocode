/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180011958
 * Callers:
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$14 @ 0x18004462E (_JsonDocumentFromGameConfigValues_--_1_--dtor$14.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetAllLastRunProcessPaths_::_1_::dtor$1 @ 0x180044652 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetAllLastRunProcessPa.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig_::_1_::dtor$5 @ 0x180044688 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_AttachGameModeConfig_--_1_--d.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeLaunchTarget_::_1_::dtor$0 @ 0x18004469A (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeLaunchTarget_--_1_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$13 @ 0x1800446BE (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_1800446BE.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_1_::dtor$1 @ 0x1800446E2 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeCategoryFromStateRe.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues_::_1_::dtor$1 @ 0x180044733 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_LoadPropertyValues_--.c)
 *     __lambda_dee6256d89e21afd53df920967b40113_::operator()_::_1_::dtor$1 @ 0x180044745 (__lambda_dee6256d89e21afd53df920967b40113_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$9 @ 0x180044980 (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFi_ea_180044980.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$0 @ 0x180044A67 (_SerializeRelatedProcessArray_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$1 @ 0x180044A79 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGameConfigStore.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$5 @ 0x180044A8B (_SerializeRelatedProcessArray_--_1_--dtor$5.c)
 *     _DeserializeRelatedProcessArray_::_1_::dtor$0 @ 0x180044A9D (_DeserializeRelatedProcessArray_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$1 @ 0x180044FE2 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDisplayInfo_--_1.c)
 *     __lambda_672229d4a162f24ea0e3de44dcc55a21_::operator()_::_1_::dtor$6 @ 0x180045018 (__lambda_672229d4a162f24ea0e3de44dcc55a21_--operator()_--_1_--dtor$6.c)
 *     __lambda_672229d4a162f24ea0e3de44dcc55a21_::operator()_::_1_::dtor$5 @ 0x18004503C (__lambda_672229d4a162f24ea0e3de44dcc55a21_--operator()_--_1_--dtor$5.c)
 *     __lambda_21b8fbba22a3d8e1beadf144030eed52_::operator()_::_1_::dtor$0 @ 0x1800450DE (__lambda_21b8fbba22a3d8e1beadf144030eed52_--operator()_--_1_--dtor$0.c)
 *     __lambda_21b8fbba22a3d8e1beadf144030eed52_::operator()_::_1_::dtor$3 @ 0x180045102 (__lambda_21b8fbba22a3d8e1beadf144030eed52_--operator()_--_1_--dtor$3.c)
 *     _Windows::Foundation::Collections::Internal::SimpleKeyValuePair_HSTRING_____IInspectable___Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____1_::Make_::_1_::dtor$5 @ 0x180045198 (_Windows--Foundation--Collections--Internal--SimpleKeyValuePair_HSTRING_____IInspec_ea_180045198.c)
 *     __lambda_dee6256d89e21afd53df920967b40113_::operator()_::_1_::dtor$4 @ 0x1800452E5 (__lambda_dee6256d89e21afd53df920967b40113_--operator()_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
