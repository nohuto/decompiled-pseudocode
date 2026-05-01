/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800375DC
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId_::_1_::dtor$0 @ 0x180044FAC (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeTitleId_--_1_--dtor.c)
 *     __lambda_dee6256d89e21afd53df920967b40113_::operator()_::_1_::dtor$0 @ 0x180044FBE (__lambda_dee6256d89e21afd53df920967b40113_--operator()_--_1_--dtor$0.c)
 *     __lambda_672229d4a162f24ea0e3de44dcc55a21_::operator()_::_1_::dtor$4 @ 0x18004502A (__lambda_672229d4a162f24ea0e3de44dcc55a21_--operator()_--_1_--dtor$4.c)
 *     __lambda_21b8fbba22a3d8e1beadf144030eed52_::operator()_::_1_::dtor$1 @ 0x1800450F0 (__lambda_21b8fbba22a3d8e1beadf144030eed52_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$0 @ 0x18004524C (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGa_ea_18004524C.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync_::_1_::dtor$0 @ 0x1800452F7 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateAsync_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
