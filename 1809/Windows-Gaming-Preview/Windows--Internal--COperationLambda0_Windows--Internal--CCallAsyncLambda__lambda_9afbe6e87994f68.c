/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_9afbe6e87994f6867231074aca7528f3____Windows::Internal::CNoResult_::Run @ 0x1800301C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x1800379F8 (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_9afbe6e87994f6867231074aca7528f3____Windows::Internal::CNoResult_::Run(
        _QWORD *a1,
        int a2,
        int a3)
{
  HSTRING v4; // rsi
  HSTRING v5; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r9
  int v13[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v14[1] = -2LL;
  if ( a2 != 1 || a3 < 0 )
    return (unsigned int)a3;
  v4 = (HSTRING)a1[3];
  WindowsDeleteString(0LL);
  v14[0] = v4;
  v5 = (HSTRING)a1[4];
  WindowsDeleteString(0LL);
  *(_QWORD *)v13 = v5;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1[1] + 168LL);
  EnterCriticalSection(v6);
  v14[2] = v6;
  v7 = a1[1];
  v8 = *(Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)(v7 + 280);
  if ( !v8 || !*(_QWORD *)(v7 + 288) )
  {
    v10 = -2147024891;
    v11 = 2147942405LL;
    goto LABEL_11;
  }
  v9 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
         v8,
         (const struct Microsoft::WRL::Wrappers::HString *)v14,
         (const struct Microsoft::WRL::Wrappers::HString *)v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x612,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v11);
    if ( v6 )
      LeaveCriticalSection(v6);
    WindowsDeleteString(v5);
    WindowsDeleteString(v4);
    return v10;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  WindowsDeleteString(v5);
  WindowsDeleteString(v4);
  return 0;
}
