/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800373DC
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId_::_1_::dtor$0 @ 0x180044BD6 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeTitleId_--_1_--dtor.c)
 *     __lambda_4a5598c51892c1f8c3ff49449b4dbebf_::operator()_::_1_::dtor$0 @ 0x180044BE8 (__lambda_4a5598c51892c1f8c3ff49449b4dbebf_--operator()_--_1_--dtor$0.c)
 *     __lambda_672229d4a162f24ea0e3de44dcc55a21_::operator()_::_1_::dtor$4 @ 0x180044C66 (__lambda_672229d4a162f24ea0e3de44dcc55a21_--operator()_--_1_--dtor$4.c)
 *     __lambda_21b8fbba22a3d8e1beadf144030eed52_::operator()_::_1_::dtor$1 @ 0x180044D3E (__lambda_21b8fbba22a3d8e1beadf144030eed52_--operator()_--_1_--dtor$1.c)
 *     _Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_9afbe6e87994f6867231074aca7528f3____Windows::Internal::CNoResult_::Run_::_1_::dtor$2 @ 0x180044DF4 (_Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_9_ea_180044DF4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$0 @ 0x180044E96 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGa_ea_180044E96.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync_::_1_::dtor$0 @ 0x180044F2F (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateAsync_--_1_--dtor$0.c)
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
