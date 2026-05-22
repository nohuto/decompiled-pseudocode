/*
 * XREFs of ?StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18015DC4C
 * Callers:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180152030 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800353B8 (-zInternalRelatedId@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorT.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18009F888 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016176C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180161A74 (-zInternalStart@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgRefl.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::StartActivity(
        HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3)
{
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  DWORD v10; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  double *v12; // [rsp+60h] [rbp-9h]
  int v13; // [rsp+68h] [rbp-1h]
  int v14; // [rsp+6Ch] [rbp+3h]
  DWORD *v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  const struct _GUID *v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  const struct SPATIAL_NODE_ID *v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+9Ch] [rbp+33h]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
                                           v6,
                                           lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v7 > 5u )
  {
    v14 = 0;
    v12 = &`HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v13 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v10 = CurrentThreadId;
    v15 = &v10;
    v19 = 16;
    v22 = 16;
    v16 = 4;
    v18 = a2;
    v21 = a3;
    v9 = (const GUID *)wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v7, &unk_1801A37A9, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference *)((char *)this + 8));
}
