/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18003761C
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId_::_1_::dtor$0 @ 0x180045150 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeTitleId_--_1_--dtor.c)
 *     __lambda_dee6256d89e21afd53df920967b40113_::operator()_::_1_::dtor$0 @ 0x180045162 (__lambda_dee6256d89e21afd53df920967b40113_--operator()_--_1_--dtor$0.c)
 *     __lambda_672229d4a162f24ea0e3de44dcc55a21_::operator()_::_1_::dtor$4 @ 0x1800451E0 (__lambda_672229d4a162f24ea0e3de44dcc55a21_--operator()_--_1_--dtor$4.c)
 *     __lambda_21b8fbba22a3d8e1beadf144030eed52_::operator()_::_1_::dtor$1 @ 0x1800452B8 (__lambda_21b8fbba22a3d8e1beadf144030eed52_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$0 @ 0x180045426 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGa_ea_180045426.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync_::_1_::dtor$0 @ 0x1800454BF (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateAsync_--_1_--dtor$0.c)
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
