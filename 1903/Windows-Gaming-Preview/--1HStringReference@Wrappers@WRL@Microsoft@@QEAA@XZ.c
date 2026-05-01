/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18001194C
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$0 @ 0x180044938 (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFileDescription.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$15 @ 0x180044AD3 (_JsonDocumentFromGameConfigValues_--_1_--dtor$15.c)
 *     __lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator()_::_1_::dtor$3 @ 0x180044D48 (__lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator()_--_1_--dtor$3.c)
 *     __lambda_2bb0be94c8b34b0b06b3ace075c36ca6_::operator()_::_1_::dtor$6 @ 0x180044D6C (__lambda_2bb0be94c8b34b0b06b3ace075c36ca6_--operator()_--_1_--dtor$6.c)
 *     __lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator()_::_1_::dtor$1 @ 0x180044DA2 (__lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath_::_1_::dtor$2 @ 0x18004504E (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_CreateStorageFil_ea_18004504E.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$5 @ 0x180045072 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180045072.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
