/*
 * XREFs of ?StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1801B52B4
 * Callers:
 *     ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1801B25C0 (-ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkn.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     GetViewId @ 0x1801B35D0 (GetViewId.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1801B8A68 (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801B8CA8 (-zInternalStart@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflect.c)
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
  DWORD CurrentThreadId; // [rsp+38h] [rbp-39h] BYREF
  int v14; // [rsp+3Ch] [rbp-35h] BYREF
  LPCWSTR pwsz[3]; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp+7h]
  int v18; // [rsp+80h] [rbp+Fh]
  int v19; // [rsp+84h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  int *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]

  pwsz[1] = (LPCWSTR)-2LL;
  pwsz[0] = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)pwsz,
    0LL);
  ViewId = GetViewId(a2, pwsz);
  v7 = (WCHAR *)pwsz[0];
  if ( ViewId >= 0 )
  {
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
    v9 = wil::details::static_lazy<HolographicPositionerProvider>::get(
           v8,
           lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
    v10 = *(const struct _TlgProvider_t **)(v9 + 8);
    if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v9 + 8), 0x200000000000uLL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v18 = 4;
      v19 = 0;
      TlgCreateWsz(&pDesc, v7);
      v14 = a3;
      v21 = &v14;
      v22 = v11;
      v23 = 0;
      v12 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
      TlgWrite(v10, &unk_1804558B8, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v12, 5u, &pData);
    }
    if ( !*(_DWORD *)(a1 + 32) )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  }
  if ( v7 )
    CoTaskMemFree(v7);
}
