/*
 * XREFs of ?StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1801525EC
 * Callers:
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x18014F520 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800764BC (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18007B278 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801599C0 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragEnterForView::StartActivity(
        AppViewManagerTabTelemetry::DragEnterForView *this,
        const unsigned __int16 *a2,
        const struct _GUID *a3,
        const struct tagPOINT *a4)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // rdi
  const unsigned __int16 *v11; // rdx
  const WCHAR *v12; // rax
  const GUID *v13; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  __int64 *v16; // [rsp+60h] [rbp-39h]
  int v17; // [rsp+68h] [rbp-31h]
  int v18; // [rsp+6Ch] [rbp-2Dh]
  DWORD *p_CurrentThreadId; // [rsp+70h] [rbp-29h]
  int v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+7Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-19h] BYREF
  const struct _GUID *v23; // [rsp+90h] [rbp-9h]
  int v24; // [rsp+98h] [rbp-1h]
  int v25; // [rsp+9Ch] [rbp+3h]
  const struct tagPOINT *v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A8h] [rbp+Fh]
  int v28; // [rsp+ACh] [rbp+13h]
  LONG *p_y; // [rsp+B0h] [rbp+17h]
  int v30; // [rsp+B8h] [rbp+1Fh]
  int v31; // [rsp+BCh] [rbp+23h]

  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v8,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v10 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v10 > 5u && TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x400000000000uLL) )
  {
    v18 = 0;
    v16 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v17 = 8;
    v21 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v20 = 4;
    v12 = SQM::CensorAppID(a2, v11);
    TlgCreateWsz(&pDesc, v12);
    v25 = 0;
    v28 = 0;
    v31 = 0;
    p_y = &a4->y;
    v23 = a3;
    v24 = 16;
    v26 = a4;
    v27 = 4;
    v30 = 4;
    v13 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v10, &unk_1804DD0A7, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v13, 8u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AppViewManagerTabTelemetry::DragEnterForView *)((char *)this + 8));
}
