/*
 * XREFs of ?StartActivity@TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@U_GUID@@@Z @ 0x1801E5AE0
 * Callers:
 *     ?NewViewForTab@TabViewManager@@UEAAJIU_GUID@@@Z @ 0x1801DEE30 (-NewViewForTab@TabViewManager@@UEAAJIU_GUID@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801F2194 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_NewViewForTab::StartActivity(
        TabViewManagerTraceLogging::TabViewManager_NewViewForTab *this,
        HWND a2,
        struct _GUID *a3)
{
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  DWORD v10; // [rsp+30h] [rbp-29h] BYREF
  HWND v11; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  DWORD *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  HWND *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  struct _GUID *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]

  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        v6,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 4u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v10 = CurrentThreadId;
    v13 = &v10;
    v16 = &v11;
    v14 = 4;
    v11 = a2;
    v17 = 8;
    v19 = a3;
    v20 = 16;
    v9 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v7, &unk_1804599FB, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerTraceLogging::TabViewManager_NewViewForTab *)((char *)this + 8));
}
