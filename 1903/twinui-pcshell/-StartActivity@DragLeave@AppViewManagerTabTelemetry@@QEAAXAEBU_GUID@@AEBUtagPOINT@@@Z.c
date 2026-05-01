/*
 * XREFs of ?StartActivity@DragLeave@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1801331B8
 * Callers:
 *     ?DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1801302A0 (-DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18013A3C4 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragLeave::StartActivity(
        AppViewManagerTabTelemetry::DragLeave *this,
        const struct _GUID *a2,
        const struct tagPOINT *a3)
{
  __int64 v6; // rcx
  LPVOID v7; // rax
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v10; // rax
  DWORD v11; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v13; // [rsp+60h] [rbp-19h]
  int v14; // [rsp+68h] [rbp-11h]
  int v15; // [rsp+6Ch] [rbp-Dh]
  DWORD *v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  const struct _GUID *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  const struct tagPOINT *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  LONG *p_y; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v6,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)v7 + 1);
  if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)v7 + 1), 0x200000000000uLL) )
  {
    v15 = 0;
    v13 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v14 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v11 = CurrentThreadId;
    v16 = &v11;
    p_y = &a3->y;
    v17 = 4;
    v19 = a2;
    v20 = 16;
    v22 = a3;
    v23 = 4;
    v26 = 4;
    v10 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v8, &unk_1804B7A49, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v10, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AppViewManagerTabTelemetry::DragLeave *)((char *)this + 8));
}
