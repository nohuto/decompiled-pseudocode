/*
 * XREFs of ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x18009F1E4
 * Callers:
 *     ??$?0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U?$integral_constant@D$0A@@wistd@@AEAK@Z @ 0x18009ADF4 (--$-0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U-$integral_constant@D$0A@@wistd@@AEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180035098 (-zInternalRelatedId@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorT.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x180099F00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?LockExclusive@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18009D6D4 (-LockExclusive@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18009F6C8 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall RawInputProvidersTracing::DeviceAttached::StartActivity(
        RawInputProvidersTracing::DeviceAttached *this,
        int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  RTL_SRWLOCK *v6; // rcx
  _QWORD *v7; // rax
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v10; // rax
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  double *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  PSRWLOCK *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  int *v19; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+94h] [rbp+43h]
  int v22; // [rsp+C0h] [rbp+6Fh] BYREF

  v22 = a2;
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v3 = *((_QWORD *)this + 6);
  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<RawInputProvidersTracing>::get(
                                        v4,
                                        (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u && TlgKeywordOn(v5, 0x400000000000uLL) )
  {
    EventActivityIdControl(3u, (LPGUID)(v3 + 8));
  }
  else
  {
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
  }
  v6 = SRWLock[0];
  *(_DWORD *)v3 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v7 = wil::details::static_lazy<RawInputProvidersTracing>::get(
         (__int64)v6,
         (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
  v8 = (const struct _TlgProvider_t *)v7[1];
  if ( *(_DWORD *)v8 > 4u && TlgKeywordOn((TraceLoggingHProvider)v7[1], 0x400000000000uLL) )
  {
    v15 = 0;
    v13 = &`HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v14 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v18 = 0;
    v21 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v16 = SRWLock;
    v19 = &v22;
    v17 = 4;
    v20 = 4;
    v10 = (const GUID *)wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v8, &unk_18019CDC0, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v10, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((RawInputProvidersTracing::DeviceAttached *)((char *)this + 8));
}
