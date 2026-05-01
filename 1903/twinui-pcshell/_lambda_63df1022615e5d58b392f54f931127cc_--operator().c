/*
 * XREFs of _lambda_63df1022615e5d58b392f54f931127cc_::operator() @ 0x180256440
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_63df1022615e5d58b392f54f931127cc___::Run @ 0x180258D00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_63df1022615e5d58b392f54f931127cc___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180228DC0 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180229FCC (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18022E498 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180239128 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x180256DAC (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     ?StartActivity@TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@U_GUID@@@Z @ 0x18025915C (-StartActivity@TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@U_GUID@.c)
 *     ?ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025A37C (-ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_63df1022615e5d58b392f54f931127cc_::operator()(_DWORD *a1)
{
  unsigned int v2; // ebx
  RTL_SRWLOCK *v3; // rbx
  _QWORD v4[4]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v5[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v6[40]; // [rsp+58h] [rbp-B0h] BYREF

  v4[3] = -2LL;
  v2 = a1[4];
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v6,
    (__int64)"TabViewManager_NewViewForTab");
  v6[0] = &TabViewManagerTraceLogging::TabViewManager_NewViewForTab::`vftable';
  *(_OWORD *)&v4[1] = *(_OWORD *)(a1 + 5);
  TabViewManagerTraceLogging::TabViewManager_NewViewForTab::StartActivity(
    (TabViewManagerTraceLogging::TabViewManager_NewViewForTab *)v6,
    (HWND)v2,
    (struct _GUID *)&v4[1]);
  v3 = (RTL_SRWLOCK *)(*(_QWORD *)a1 + 48LL);
  AcquireSRWLockExclusive(v3);
  v4[1] = v3;
  *(_OWORD *)&v5[1] = *(_OWORD *)(a1 + 5);
  TabTransferManager::ValidateTabId(*(_QWORD *)a1, &v5[1]);
  *(_DWORD *)(*(_QWORD *)a1 + 280LL) = ~a1[4];
  TabTransferManager::AdvanceTransfer(*(_QWORD *)a1, 2LL);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v6[0] = &TabViewManagerTraceLogging::TabViewManager_NewViewForTab::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v6);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v6);
}
