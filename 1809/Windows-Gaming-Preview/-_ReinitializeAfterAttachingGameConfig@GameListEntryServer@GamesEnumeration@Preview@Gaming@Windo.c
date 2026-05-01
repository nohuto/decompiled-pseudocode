/*
 * XREFs of ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180028A00
 * Callers:
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180028AD0 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180028D50 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011B98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800275B8 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027AC0 (-_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180037D10 (-_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Win.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_ReinitializeAfterAttachingGameConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(_BYTE)a2 )
  {
    v3 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(this);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x32C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v3);
  }
  if ( !*((_QWORD *)this + 32) || !*((_QWORD *)this + 30) )
  {
    v4 = *((_QWORD *)this + 26);
    if ( v4 )
    {
      *((_QWORD *)this + 26) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeId(this, a2);
  }
  v5 = *((_QWORD *)this + 27);
  if ( v5 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
         *((_QWORD *)this + 35),
         24LL,
         (char *)this + 232);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v6);
}
