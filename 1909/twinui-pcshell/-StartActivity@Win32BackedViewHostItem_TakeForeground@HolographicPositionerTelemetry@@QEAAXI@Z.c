/*
 * XREFs of ?StartActivity@Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z @ 0x180232BCC
 * Callers:
 *     ?TakeForeground@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@45@@Z @ 0x180234080 (-TakeForeground@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAW4Foreground.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18022560C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180237A0C (-zInternalStart@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_.c)
 */

void __fastcall HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::StartActivity(
        HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground *this,
        int a2)
{
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v6; // rax
  DWORD v7; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+17h]
  int v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+74h] [rbp+23h]
  DWORD *v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  int *v15; // [rsp+88h] [rbp+37h]
  int v16; // [rsp+90h] [rbp+3Fh]
  int v17; // [rsp+94h] [rbp+43h]
  int v18; // [rsp+C0h] [rbp+6Fh] BYREF

  v18 = a2;
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<HolographicPositionerProvider>::get(
                                                    v3,
                                                    (void (__cdecl *)())lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v4 > 4u )
  {
    v11 = 0;
    v9 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v10 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v14 = 0;
    v17 = 0;
    v7 = CurrentThreadId;
    v12 = &v7;
    v15 = &v18;
    v13 = 4;
    v16 = 4;
    v6 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v4, &unk_1804F0C54, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v6, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground *)((char *)this + 8));
}
