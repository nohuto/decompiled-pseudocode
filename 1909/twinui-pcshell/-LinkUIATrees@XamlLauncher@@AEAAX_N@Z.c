/*
 * XREFs of ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x1800735E4
 * Callers:
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x180073480 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     ?OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ @ 0x1800735D0 (-OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ.c)
 *     ?OnCortanaWithoutStartShowing@XamlLauncher@@UEAAXXZ @ 0x1803135F0 (-OnCortanaWithoutStartShowing@XamlLauncher@@UEAAXXZ.c)
 * Callees:
 *     ??$LinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z @ 0x1800737E8 (--$LinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z.c)
 *     ??$UnlinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z @ 0x1800738C8 (--$UnlinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013E9FC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall XamlLauncher::LinkUIATrees(XamlLauncher *this, char a2)
{
  __int64 v3; // rcx
  int (__fastcall *v4)(__int64, HWND *); // rax
  const char *v5; // r9
  const char *v6; // r9
  const char *v7; // r9
  const char *v8; // r9
  int v9; // eax
  HWND v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  int v12; // [rsp+40h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+20h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+28h] BYREF

  v10[0] = 0LL;
  v3 = *((_QWORD *)this + 16);
  hWnd = 0LL;
  if ( v3 && *((_QWORD *)this + 15) )
  {
    v4 = *(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v3 + 408LL);
    if ( a2 )
    {
      if ( v4(v3, &hWnd) >= 0
        && IsWindow(hWnd)
        && (*(int (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 15) + 280LL))(*((_QWORD *)this + 15), v10) >= 0
        && IsWindow(v10[0]) )
      {
        v12 = (int)hWnd;
        v13 = (int)v10[0];
        StartWindowTelemetry::LinkingUIATrees<unsigned int,unsigned int>(&v13, &v12);
        if ( !SetPropW(hWnd, L"CrossProcessParentHWND", v10[0]) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x3F2,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v5);
        if ( !SetPropW(v10[0], L"CrossProcessChildHWND", hWnd) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x3F3,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v6);
        if ( !SetPropW(hWnd, L"NonComponentUIWindow", HANDLE_FLAG_INHERIT) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x3F6,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v7);
        RemovePropW(hWnd, L"UIA_WindowPatternEnabled");
      }
    }
    else
    {
      if ( v4(v3, &hWnd) >= 0 )
      {
        if ( IsWindow(hWnd) )
        {
          RemovePropW(hWnd, L"CrossProcessParentHWND");
          RemovePropW(hWnd, L"NonComponentUIWindow");
          if ( !SetPropW(hWnd, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x40A,
              (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              v8);
        }
      }
      if ( (*(int (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 15) + 280LL))(*((_QWORD *)this + 15), v10) >= 0
        && IsWindow(v10[0]) )
      {
        RemovePropW(v10[0], L"CrossProcessChildHWND");
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 424LL))(*((_QWORD *)this + 16));
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x412,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v9,
          (int)v10[0]);
      v12 = (int)hWnd;
      v13 = (int)v10[0];
      StartWindowTelemetry::UnlinkingUIATrees<unsigned int,unsigned int>(&v13, &v12);
    }
  }
}
