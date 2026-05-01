/*
 * XREFs of ?StartActivity@ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAAXIPEBGW4FRAMEWORK_VIEW_TYPE@@_N@Z @ 0x18021B9E4
 * Callers:
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18021D7E0 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1802064FC (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180206778 (-zInternalStart@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRef.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::StartActivity(
        __int64 a1,
        int a2,
        const WCHAR *a3,
        int a4,
        unsigned __int8 a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // rdi
  int v11; // r10d
  const GUID *v12; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-71h] BYREF
  int v14; // [rsp+34h] [rbp-6Dh] BYREF
  int v15; // [rsp+38h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-61h] BYREF
  __int64 *v17; // [rsp+60h] [rbp-41h]
  int v18; // [rsp+68h] [rbp-39h]
  int v19; // [rsp+6Ch] [rbp-35h]
  DWORD *p_CurrentThreadId; // [rsp+70h] [rbp-31h]
  int v21; // [rsp+78h] [rbp-29h]
  int v22; // [rsp+7Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-21h] BYREF
  int *v24; // [rsp+90h] [rbp-11h]
  int v25; // [rsp+98h] [rbp-9h]
  int v26; // [rsp+9Ch] [rbp-5h]
  int *v27; // [rsp+A0h] [rbp-1h]
  int v28; // [rsp+A8h] [rbp+7h]
  int v29; // [rsp+ACh] [rbp+Bh]
  int *v30; // [rsp+B0h] [rbp+Fh]
  int v31; // [rsp+B8h] [rbp+17h]
  int v32; // [rsp+BCh] [rbp+1Bh]
  int v33; // [rsp+108h] [rbp+67h] BYREF

  v33 = a2;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v9 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         v8,
         (void (__cdecl *)())lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  v10 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v10 > 5u && TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x200000000000uLL) )
  {
    v19 = 0;
    v17 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v18 = 8;
    v22 = 0;
    CurrentThreadId = GetCurrentThreadId();
    v21 = 4;
    p_CurrentThreadId = &CurrentThreadId;
    TlgCreateWsz(&pDesc, a3);
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v27 = &v14;
    v15 = a5;
    v30 = &v15;
    v24 = &v33;
    v25 = v11;
    v14 = a4;
    v28 = v11;
    v31 = v11;
    v12 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v10, &unk_1804CAC2D, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v12, 8u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
