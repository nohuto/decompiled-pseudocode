/*
 * XREFs of ?EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801DB0F8
 * Callers:
 *     ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x1801E14B0 (-OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Intern.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801D3AFC (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5B2C (--1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1801E5768 (-StartActivity@TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationV.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E67D0 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

__int64 __fastcall TabViewManager::EnterFullScreen(TabViewManager *this, struct IApplicationView *a2)
{
  HRESULT Service; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  IUnknown *punk; // [rsp+38h] [rbp-D0h] BYREF
  void *ppvOut[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v11[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  ppvOut[1] = (void *)-2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"TabViewManager_EnterFullScreen");
  v11[0] = &TabViewManagerTraceLogging::TabViewManager_EnterFullScreen::`vftable';
  TabViewManagerTraceLogging::TabViewManager_EnterFullScreen::StartActivity(
    (TabViewManagerTraceLogging::TabViewManager_EnterFullScreen *)v11,
    a2);
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  punk = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL))(
    (char *)this + 8,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  Service = IUnknown_QueryService(
              punk,
              (const GUID *const)&SID_FullScreenManager,
              &GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d,
              ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( Service >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, __int64, __int64))(*(_QWORD *)ppvOut[0] + 24LL))(
           ppvOut[0],
           a2,
           1LL,
           1LL);
    Service = v7;
    if ( v7 >= 0 )
    {
      wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
      Service = 0;
      goto LABEL_7;
    }
    v5 = (unsigned int)v7;
    v6 = 3481LL;
  }
  else
  {
    v5 = (unsigned int)Service;
    v6 = 3479LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  TabViewManagerTraceLogging::TabViewManager_EnterFullScreen::~TabViewManager_EnterFullScreen((TabViewManagerTraceLogging::TabViewManager_EnterFullScreen *)v11);
  return (unsigned int)Service;
}
