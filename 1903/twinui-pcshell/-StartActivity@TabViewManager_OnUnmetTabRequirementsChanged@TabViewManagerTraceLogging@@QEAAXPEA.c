/*
 * XREFs of ?StartActivity@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1802389F8
 * Callers:
 *     ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x18023521C (-OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180243620 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::StartActivity(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  DWORD v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v14; // [rsp+60h] [rbp-9h]
  int v15; // [rsp+68h] [rbp-1h]
  int v16; // [rsp+6Ch] [rbp+3h]
  DWORD *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  __int64 *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  int *v23; // [rsp+90h] [rbp+27h]
  int v24; // [rsp+98h] [rbp+2Fh]
  int v25; // [rsp+9Ch] [rbp+33h]

  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                                    v6,
                                                    (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v16 = 0;
    v14 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v15 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v10 = CurrentThreadId;
    v17 = &v10;
    v20 = &v12;
    v23 = &v11;
    v18 = 4;
    v12 = a2;
    v21 = 8;
    v11 = a3;
    v24 = 4;
    v9 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v7, &unk_1804CC725, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v9, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
