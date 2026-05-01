/*
 * XREFs of ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1802214FC
 * Callers:
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18021E460 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180054690 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     GetViewId @ 0x18021FA80 (GetViewId.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18022560C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180225888 (-zInternalStart@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRef.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HolographicPositionerTelemetry::ControlGained::StartActivity(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        __int64 a4)
{
  int ViewId; // eax
  WCHAR *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  const struct _TlgProvider_t *v12; // rsi
  int v13; // r10d
  const GUID *v14; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-69h] BYREF
  int v16; // [rsp+3Ch] [rbp-65h] BYREF
  BOOL v17; // [rsp+40h] [rbp-61h] BYREF
  LPCWSTR pwsz[2]; // [rsp+48h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v20; // [rsp+78h] [rbp-29h]
  int v21; // [rsp+80h] [rbp-21h]
  int v22; // [rsp+84h] [rbp-1Dh]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp-19h]
  int v24; // [rsp+90h] [rbp-11h]
  int v25; // [rsp+94h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-9h] BYREF
  int *v27; // [rsp+A8h] [rbp+7h]
  int v28; // [rsp+B0h] [rbp+Fh]
  int v29; // [rsp+B4h] [rbp+13h]
  BOOL *v30; // [rsp+B8h] [rbp+17h]
  int v31; // [rsp+C0h] [rbp+1Fh]
  int v32; // [rsp+C4h] [rbp+23h]

  pwsz[1] = (LPCWSTR)-2LL;
  pwsz[0] = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)pwsz,
    0LL);
  ViewId = GetViewId(a2, pwsz);
  v9 = (WCHAR *)pwsz[0];
  if ( ViewId >= 0 )
  {
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
    v11 = wil::details::static_lazy<HolographicPositionerProvider>::get(
            v10,
            lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
    v12 = *(const struct _TlgProvider_t **)(v11 + 8);
    if ( *(_DWORD *)v12 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v11 + 8), 0x200000000000uLL) )
    {
      v20 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v21 = 8;
      v22 = 0;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v24 = 4;
      v25 = 0;
      TlgCreateWsz(&pDesc, v9);
      v16 = a3;
      v27 = &v16;
      v28 = v13;
      v29 = 0;
      v17 = a4 == 0;
      v30 = &v17;
      v31 = v13;
      v32 = 0;
      v14 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
      TlgWrite(v12, &unk_1804EFE1E, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v14, 7u, &pData);
    }
    if ( !*(_DWORD *)(a1 + 32) )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  }
  if ( v9 )
    CoTaskMemFree(v9);
}
