/*
 * XREFs of ?StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180202730
 * Callers:
 *     ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1801FF8B0 (-ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkn.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18000F610 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     GetViewId @ 0x1802008C0 (GetViewId.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1802064FC (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180206778 (-zInternalStart@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRef.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HolographicPositionerTelemetry::ControlLost::StartActivity(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int ViewId; // eax
  WCHAR *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  const struct _TlgProvider_t *v10; // rsi
  int v11; // r10d
  const GUID *v12; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+3Ch] [rbp-45h] BYREF
  LPCWSTR pwsz[3]; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+84h] [rbp+3h]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp+7h]
  int v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+94h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+17h] BYREF
  int *v24; // [rsp+A8h] [rbp+27h]
  int v25; // [rsp+B0h] [rbp+2Fh]
  int v26; // [rsp+B4h] [rbp+33h]

  pwsz[1] = (LPCWSTR)-2LL;
  pwsz[0] = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)pwsz,
    0LL);
  ViewId = GetViewId(a2, pwsz);
  v7 = (WCHAR *)pwsz[0];
  if ( ViewId >= 0 )
  {
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
    v9 = wil::details::static_lazy<HolographicPositionerProvider>::get(
           v8,
           lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
    v10 = *(const struct _TlgProvider_t **)(v9 + 8);
    if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v9 + 8), 0x200000000000uLL) )
    {
      v17 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v18 = 8;
      v19 = 0;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v21 = 4;
      v22 = 0;
      TlgCreateWsz(&pDesc, v7);
      v14 = a3;
      v24 = &v14;
      v25 = v11;
      v26 = 0;
      v12 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
      TlgWrite(v10, &unk_1804C96A5, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v12, 6u, &pData);
    }
    if ( !*(_DWORD *)(a1 + 32) )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  }
  if ( v7 )
    CoTaskMemFree(v7);
}
