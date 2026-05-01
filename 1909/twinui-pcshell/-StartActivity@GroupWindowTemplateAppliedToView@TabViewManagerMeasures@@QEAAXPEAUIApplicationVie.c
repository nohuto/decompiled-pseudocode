/*
 * XREFs of ?StartActivity@GroupWindowTemplateAppliedToView@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@KKAEBUtagRECT@@1@Z @ 0x1802801FC
 * Callers:
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x18027F0D0 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800764BC (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18014FF7C (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180159944 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 */

void __fastcall TabViewManagerMeasures::GroupWindowTemplateAppliedToView::StartActivity(
        TabViewManagerMeasures::GroupWindowTemplateAppliedToView *this,
        struct IApplicationView *a2,
        int a3,
        int a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // rdi
  LPCWSTR *AppNameFromView; // rax
  const GUID *v12; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  DWORD *p_CurrentThreadId; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  const struct tagRECT *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  LONG *p_top; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  LONG *p_right; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  LONG *p_bottom; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  const struct tagRECT *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  LONG *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  LONG *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  LONG *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int v41; // [rsp+190h] [rbp+90h] BYREF
  int v42; // [rsp+198h] [rbp+98h] BYREF

  v42 = a4;
  v41 = a3;
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v8,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v10 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v10 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x200000000000uLL) )
    {
      v17 = 8LL;
      v16 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v19 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(
                                     (HWND)&pv,
                                     (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
      TlgCreateWsz(&pDesc, *AppNameFromView);
      v22 = 4LL;
      v21 = &v41;
      v23 = &v42;
      v25 = a5;
      v24 = 4LL;
      v26 = 4LL;
      p_top = &a5->top;
      p_right = &a5->right;
      p_bottom = &a5->bottom;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v35 = &a6->top;
      v37 = &a6->right;
      v39 = &a6->bottom;
      v33 = a6;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v12 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
      TlgWrite(v10, &unk_1804F5CB0, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v12, 0xFu, &pData);
      if ( pv )
        CoTaskMemFree(pv);
    }
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerMeasures::GroupWindowTemplateAppliedToView *)((char *)this + 8));
}
