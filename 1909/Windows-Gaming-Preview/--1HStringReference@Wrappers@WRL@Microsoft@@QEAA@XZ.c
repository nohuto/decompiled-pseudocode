/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180011B6C
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$0 @ 0x180044A5E (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFileDescription.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$15 @ 0x180044C1D (_JsonDocumentFromGameConfigValues_--_1_--dtor$15.c)
 *     __lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator()_::_1_::dtor$3 @ 0x180044EB6 (__lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator()_--_1_--dtor$3.c)
 *     __lambda_2bb0be94c8b34b0b06b3ace075c36ca6_::operator()_::_1_::dtor$6 @ 0x180044EDA (__lambda_2bb0be94c8b34b0b06b3ace075c36ca6_--operator()_--_1_--dtor$6.c)
 *     __lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator()_::_1_::dtor$1 @ 0x180044F46 (__lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath_::_1_::dtor$2 @ 0x180045204 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_CreateStorageFil_ea_180045204.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$5 @ 0x180045228 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180045228.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
