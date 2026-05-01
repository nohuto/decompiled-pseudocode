/*
 * XREFs of ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002BD24
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180026B80 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800282D8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180028AD0 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180028D50 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18002BEA8 (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  volatile signed __int32 *v4; // rbx

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  *a1 = *a2;
  v4 = (volatile signed __int32 *)a1[1];
  a1[1] = v2;
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return a1;
}
