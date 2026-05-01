/*
 * XREFs of ?GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180037A1C
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180029B00 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011918 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180038D78 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ?CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGameConfig@ExecutionModel@@KPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003B76C (-CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGam.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetKglDefaultsAsJson(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        HSTRING *a2)
{
  __int64 FirstGameConfig; // r15
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v5; // rdi
  int v6; // esi
  unsigned int v7; // r8d
  __int64 v8; // rbx
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v9; // rbp
  int v10; // eax
  unsigned int v11; // edi
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v13[2]; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  WindowsDeleteString(*a2);
  *a2 = 0LL;
  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      this,
                      0LL);
  *(_OWORD *)v13 = 0LL;
  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
  v5 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance;
  if ( Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance )
  {
    v8 = qword_18005CED0;
    if ( qword_18005CED0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(qword_18005CED0 + 8));
      v8 = qword_18005CED0;
      v5 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance;
    }
    v9 = v5;
    v13[1] = (Windows::Gaming::Preview::GamesEnumeration::KglDefaults *)v8;
    LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
    v6 = 0;
  }
  else
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)0x8000FFFFLL);
    LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
    v8 = 0LL;
    v9 = 0LL;
  }
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD2,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v6);
  if ( v5
    && (v10 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::CheckKGLForGameFromGameConfig(
                v9,
                *(struct ExecutionModel::GameConfig **)(FirstGameConfig + 16),
                v7,
                (struct Microsoft::WRL::Wrappers::HString *)a2),
        v11 = v10,
        v10 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    v11 = 0;
  }
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(Windows::Gaming::Preview::GamesEnumeration::KglDefaults *))v13[1])(v13[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13[1] + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::KglDefaults *))(*(_QWORD *)v13[1] + 8LL))(v13[1]);
    }
  }
  return v11;
}
