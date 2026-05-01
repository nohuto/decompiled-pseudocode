/*
 * XREFs of ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ @ 0x1800179DC
 * Callers:
 *     __lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator()_::_1_::dtor$10 @ 0x180044ACA (__lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator()_--_1_--dtor$10.c)
 *     _DoWorkOnGameConfigStore_::_1_::dtor$0 @ 0x180044B1B (_DoWorkOnGameConfigStore_--_1_--dtor$0.c)
 *     _DoWorkOnGameConfigStore_::_1_::dtor$2 @ 0x180044B3F (_DoWorkOnGameConfigStore_--_1_--dtor$2.c)
 *     _GetRelatedProcessesFromGameConfigStore_::_1_::dtor$0 @ 0x180044BE7 (_GetRelatedProcessesFromGameConfigStore_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry_::_1_::dtor$0 @ 0x180044EFE (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_AddGameConfigsToGameLis.c)
 *     _CQueryKnownGameList::GetGameEntryFromGameConfig_::_1_::dtor$0 @ 0x1800455D0 (_CQueryKnownGameList--GetGameEntryFromGameConfig_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$0 @ 0x1800455F4 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2, a2);
}
