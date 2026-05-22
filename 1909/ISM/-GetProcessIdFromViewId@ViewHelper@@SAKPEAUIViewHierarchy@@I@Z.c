/*
 * XREFs of ?GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x1800583F0
 * Callers:
 *     ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x18000B0F0 (-OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180055DE0 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x18008358C (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x1800C6230 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V?$function@$$A6A_NPEAUIServerWindow@Server@Navigation@@@Z@std@@PEAPEAUIServerWindow@34@@Z @ 0x180057DB8 (-FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V-$function@$$A6A_NPEAUIServerWi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHelper::GetProcessIdFromViewId(struct IViewHierarchy *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int WindowW; // eax
  int v4; // eax
  _QWORD v6[9]; // [rsp+28h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  unsigned int v8; // [rsp+80h] [rbp+10h] BYREF
  __int64 v9; // [rsp+90h] [rbp+20h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v2 = 0;
  (*(void (__fastcall **)(struct IViewHierarchy *, __int64 *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, &v10, a2);
  if ( v10 )
  {
    v9 = 0LL;
    v6[0] = off_180173640;
    v6[7] = v6;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v9);
    WindowW = ViewHelper::FindWindowW(v10, (__int64)v6, &v9);
    if ( WindowW >= 0 )
    {
      if ( v9 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 128LL))(v9, &v8);
        if ( v4 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            151LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
            (const char *)(unsigned int)v4);
          __debugbreak();
        }
        v2 = v8;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        143LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)WindowW);
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v9);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v10);
  return v2;
}
