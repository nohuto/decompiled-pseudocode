/*
 * XREFs of ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800278D8
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180026914 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180026B80 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011B98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z @ 0x180015F60 (-GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z.c)
 *     ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x180037548 (-GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGame.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v9; // rcx
  const struct ExecutionModel::GameConfig *GameConfig; // rdi
  HSTRING *v11; // rbx
  HSTRING v12; // rcx
  int PackageFamilyName; // eax
  struct _GUID v15; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v18 = v2;
  v3 = *((_QWORD *)this + 32);
  if ( !v3 || !*((_QWORD *)this + 30) )
  {
    v9 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)*((_QWORD *)this + 35);
    if ( v9 && *((_QWORD *)this + 36) )
    {
      v15 = (struct _GUID)xmmword_180050A80;
      GameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(v9, &v15);
      v11 = (HSTRING *)((char *)this + 160);
      v12 = *v11;
      if ( *((_DWORD *)GameConfig + 5) == 2 )
      {
        WindowsDeleteString(v12);
        *v11 = 0LL;
        PackageFamilyName = GetPackageFamilyName(GameConfig, v11);
        v7 = PackageFamilyName;
        if ( PackageFamilyName < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1CC,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)PackageFamilyName);
          goto LABEL_18;
        }
      }
      else
      {
        WindowsDeleteString(v12);
        *v11 = 0LL;
      }
    }
LABEL_22:
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 104LL))(v3, &v17);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1BF,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v5 = v17;
  if ( !v17 )
  {
LABEL_7:
    if ( v5 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    goto LABEL_22;
  }
  WindowsDeleteString(*((HSTRING *)this + 20));
  *((_QWORD *)this + 20) = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 48LL))(v5, (char *)this + 160);
  v7 = v6;
  if ( v6 >= 0 )
  {
LABEL_6:
    v5 = v17;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C1,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v6);
  v8 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_18:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
