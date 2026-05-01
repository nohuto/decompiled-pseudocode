/*
 * XREFs of ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802618E8
 * Callers:
 *     ?AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationViewTabInsertionContext@ViewManagement@5UI@6@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18024B3F0 (-AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableS.c)
 *     ?EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18024E1D0 (-EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 *     ?OnBoundingRectRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerRectEventArgs@3456@@Z @ 0x1802522D0 (-OnBoundingRectRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@W.c)
 *     ?OnMessage@TabViewManager@@UEAAJI_K_J@Z @ 0x180252AB0 (-OnMessage@TabViewManager@@UEAAJI_K_J@Z.c)
 *     ?OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z @ 0x180253260 (-OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z.c)
 *     ?OnShellTrackedWindowPosChanged@TabViewManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180253460 (-OnShellTrackedWindowPosChanged@TabViewManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagREC.c)
 *     ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x180253A20 (-OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Intern.c)
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x180253F70 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 *     ?PerformDelayedInitialization@TabViewManager@@UEAAJXZ @ 0x180255240 (-PerformDelayedInitialization@TabViewManager@@UEAAJXZ.c)
 *     ?RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802562C0 (-RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 *     ?RuntimeClassInitialize@TabViewManager@@QEAAJXZ @ 0x180256B50 (-RuntimeClassInitialize@TabViewManager@@QEAAJXZ.c)
 *     ?SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025C730 (-SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18025E770 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18025FC70 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?v_PublishServices@TabViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1802629C0 (-v_PublishServices@TabViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     _lambda_70c1c60e35f2cf7099057459f26c5cae_::operator() @ 0x180275DCC (_lambda_70c1c60e35f2cf7099057459f26c5cae_--operator().c)
 *     ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x18027A6E0 (-OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x180076450 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x18020EA7C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z.c)
 */

wil::ActivityThreadWatcher *__fastcall TabViewManagerTraceLogging::WatchCurrentThread(
        wil::ActivityThreadWatcher *a1,
        const char *a2)
{
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL v7; // [rsp+40h] [rbp+8h] BYREF
  struct wil::details::IFailureCallback *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v5 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
    v8 = (struct wil::details::IFailureCallback *)&qword_1805C22D0;
    qword_1805C22D0 = (__int64)&TabViewManagerTraceLogging::`vftable';
    atexit(lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v5);
  }
  wil::ActivityThreadWatcher::ActivityThreadWatcher(a1, v8, a2);
  return a1;
}
