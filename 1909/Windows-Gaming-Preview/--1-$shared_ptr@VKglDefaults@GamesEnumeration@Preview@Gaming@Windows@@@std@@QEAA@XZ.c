/*
 * XREFs of ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x18000EBF4
 * Callers:
 *     _lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator() @ 0x18001C864 (_lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator().c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180029BF0 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     __lambda_2bb0be94c8b34b0b06b3ace075c36ca6_::operator()_::_1_::dtor$9 @ 0x180044EEC (__lambda_2bb0be94c8b34b0b06b3ace075c36ca6_--operator()_--_1_--dtor$9.c)
 *     __lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator()_::_1_::dtor$6 @ 0x180044F6A (__lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator()_--_1_--dtor$6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$16 @ 0x180045294 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180045294.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer_::_1_::dtor$1 @ 0x18004534A (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GameModeC_ea_18004534A.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetKglDefaultsAsJson_::_1_::dtor$0 @ 0x180045414 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetKglDefaultsAsJson_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues_::_1_::dtor$0 @ 0x180045574 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateValues_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile_::_1_::dtor$0 @ 0x180045586 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--GetDefaultGameModeProfile_--_1_--dt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
