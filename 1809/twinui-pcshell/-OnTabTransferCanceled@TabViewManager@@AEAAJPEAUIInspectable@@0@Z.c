/*
 * XREFs of ?OnTabTransferCanceled@TabViewManager@@AEAAJPEAUIInspectable@@0@Z @ 0x1801E0E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801D3AFC (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D5088 (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA3B0 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StartActivity@TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x1801E63E0 (-StartActivity@TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E67D0 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

__int64 __fastcall TabViewManager::OnTabTransferCanceled(
        TabViewManager *this,
        struct IInspectable *a2,
        struct IInspectable *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct _GUID v7; // [rsp+30h] [rbp-178h] BYREF
  struct _GUID v8; // [rsp+40h] [rbp-168h] BYREF
  _QWORD v9[40]; // [rsp+50h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v4 = ((__int64 (__fastcall *)(struct IInspectable *, struct _GUID *))a3->lpVtbl[3].Release)(a3, &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v9,
      (__int64)"TabViewManager_TabTransferCanceled");
    v9[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled::`vftable';
    v7 = v8;
    TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled::StartActivity(
      (TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled *)v9,
      &v7);
    *((_BYTE *)this + 1440) = 1;
    wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
    v9[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled::`vftable';
    wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v9);
    wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x626,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
