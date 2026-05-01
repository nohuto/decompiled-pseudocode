/*
 * XREFs of ?StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x18010C794
 * Callers:
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x180109CD0 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801088A0 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180112D10 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
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
  const WCHAR *v11; // rax
  const GUID *v12; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-29h]
  int v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+6Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-19h] BYREF
  const struct _GUID *v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+8Ch] [rbp+3h]
  const struct tagPOINT *v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+9Ch] [rbp+13h]
  LONG *p_y; // [rsp+A0h] [rbp+17h]
  int v26; // [rsp+A8h] [rbp+1Fh]
  int v27; // [rsp+ACh] [rbp+23h]

  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v8,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v10 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v10 > 5u && TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x400000000000uLL) )
  {
    v17 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v16 = 4;
    v11 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(a2);
    TlgCreateWsz(&pDesc, v11);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    p_y = &a4->y;
    v19 = a3;
    v20 = 16;
    v22 = a4;
    v23 = 4;
    v26 = 4;
    v12 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v10, &unk_1804483C7, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v12, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AppViewManagerTabTelemetry::DragEnterForView *)((char *)this + 8));
}
