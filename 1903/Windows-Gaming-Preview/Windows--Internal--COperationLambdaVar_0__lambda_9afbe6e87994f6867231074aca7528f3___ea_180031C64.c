/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_9afbe6e87994f6867231074aca7528f3__Windows::Internal::CNoResult_::UnmarshalAndCall__ @ 0x180031C64
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_9afbe6e87994f6867231074aca7528f3__Windows::Internal::CNoResult_::Run @ 0x180030340 (Windows--Internal--COperationLambdaVar_0__lambda_9afbe6e87994f6867231074aca7528f3__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x180037BA8 (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 */

__int64 Windows::Internal::COperationLambdaVar_0__lambda_9afbe6e87994f6867231074aca7528f3__Windows::Internal::CNoResult_::UnmarshalAndCall__(
        _QWORD *a1,
        HSTRING a2,
        unsigned int *a3,
        ...)
{
  unsigned int v4; // edi
  HSTRING v5; // rsi
  HSTRING v6; // rbp
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v9; // rcx
  int v10; // eax
  __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING v14; // [rsp+58h] [rbp+10h] BYREF
  HSTRING v15; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, HSTRING);
  v14 = a2;
  v4 = *a3;
  if ( (*a3 & 0x80000000) != 0 )
    return v4;
  v5 = (HSTRING)a1[3];
  WindowsDeleteString(0LL);
  v14 = v5;
  v6 = (HSTRING)a1[4];
  WindowsDeleteString(0LL);
  v15 = v6;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1[1] + 168LL);
  EnterCriticalSection(v7);
  v8 = a1[1];
  v9 = *(Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)(v8 + 280);
  if ( !v9 || !*(_QWORD *)(v8 + 288) )
  {
    v4 = -2147024891;
    v11 = 2147942405LL;
    goto LABEL_10;
  }
  v10 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
          v9,
          (const struct Microsoft::WRL::Wrappers::HString *)&v14,
          (const struct Microsoft::WRL::Wrappers::HString *)va);
  v4 = v10;
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x612,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v11);
    if ( v7 )
      LeaveCriticalSection(v7);
    WindowsDeleteString(v6);
    WindowsDeleteString(v5);
    return v4;
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  WindowsDeleteString(v6);
  WindowsDeleteString(v5);
  return 0;
}
