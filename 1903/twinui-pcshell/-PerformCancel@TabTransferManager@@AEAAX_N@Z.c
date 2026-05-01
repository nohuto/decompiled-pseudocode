/*
 * XREFs of ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x180257DC0
 * Callers:
 *     _lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator() @ 0x180256044 (_lambda_2de9129cf7ca5d1ddf0542513b424d5e_--operator().c)
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x180256DAC (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29b1e61fd492fda99432971a022098a6___::Run @ 0x180258C00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_29b1e61fd492fda99432971a022098a6___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6173185157cfb5f97cdb06cbbf229380___::Run @ 0x180258C80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6173185157cfb5f97cdb06cbbf229380___--Run.c)
 *     ?ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025A37C (-ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180228DC0 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180229FCC (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18022E498 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180239128 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x180257F0C (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?ResetTransferState@TabTransferManager@@AEAAXXZ @ 0x180258B1C (-ResetTransferState@TabTransferManager@@AEAAXXZ.c)
 *     ?StartActivity@TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x180259270 (-StartActivity@TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabTransferManager::PerformCancel(TabTransferManager *this, char a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  struct _GUID v7; // [rsp+20h] [rbp-178h] BYREF
  __int64 v8; // [rsp+30h] [rbp-168h]
  _QWORD v9[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v8 = -2LL;
  v4 = (__int64 *)*((_QWORD *)this + 11);
  v5 = *v4;
  v7 = (struct _GUID)*((_OWORD *)this + 12);
  v6 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *))(v5 + 80))(v4, &v7);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      419LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( (*((_BYTE *)this + 284) & 1) != 0 )
  {
    wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v9,
      (__int64)"TabViewManager_TabTransferCanceled");
    v9[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled::`vftable';
    v7 = (struct _GUID)*((_OWORD *)this + 12);
    TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled::StartActivity(
      (TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled *)v9,
      &v7);
    *((_BYTE *)this + 254) = 1;
    if ( a2 || (*((_DWORD *)this + 71) & 0x300) != 0x100 )
      TabTransferManager::PerformComplete(this);
    wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v9);
    v9[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled::`vftable';
    wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v9);
    wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  }
  else
  {
    TabTransferManager::ResetTransferState(this);
  }
}
