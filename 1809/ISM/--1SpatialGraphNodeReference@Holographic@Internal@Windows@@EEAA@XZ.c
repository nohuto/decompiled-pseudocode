/*
 * XREFs of ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180115D18
 * Callers:
 *     ??_GSpatialGraphNodeReference@Holographic@Internal@Windows@@EEAAPEAXI@Z @ 0x180115FA0 (--_GSpatialGraphNodeReference@Holographic@Internal@Windows@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerCallback@SpatialInteractions@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004F25C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerCallback@S.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18005EFA8 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18010EE18 (-StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEB.c)
 *     ??1?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18010F010 (--1-$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180116E20 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NOD.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180119128 (-Destroy@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180119560 (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::~SpatialGraphNodeReference(
        Windows::Internal::Holographic::SpatialGraphNodeReference *this)
{
  __int64 v2; // rax
  GUID *v3; // rdi
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rdi
  void *v6; // rdi
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  volatile signed __int32 *v8; // rdi
  void **v9; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+50h] [rbp-B0h]
  int *v12; // [rsp+58h] [rbp-A8h]
  int *v13; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-98h] BYREF
  char v15; // [rsp+6Ch] [rbp-94h]
  int v16; // [rsp+90h] [rbp-70h] BYREF
  const char *v17; // [rsp+98h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  char v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  _BYTE v21[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+148h] [rbp+48h]
  __int64 v23; // [rsp+150h] [rbp+50h]
  __int64 v24; // [rsp+158h] [rbp+58h]
  void *v25; // [rsp+160h] [rbp+60h]

  *(_QWORD *)this = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodeReference,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = *((_QWORD *)this + 9);
  v3 = (GUID *)(v2 + 12);
  if ( !v2 )
    v3 = &`Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo'::`2'::noNodeId;
  v10[0] = 0LL;
  v10[1] = &v9;
  v10[2] = 0LL;
  v11 = 0;
  v12 = &v16;
  v13 = &v14;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  v16 = 0;
  v17 = "DestroySpatialGraphNodeReference";
  v18 = 0LL;
  v20 = 1LL;
  v22 = 0LL;
  memset_0(v21, 0, sizeof(v21));
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v9 = &HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::`vftable';
  HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::StartActivity(
    (HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference *)&v9,
    v3,
    (Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 88));
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    if ( *((_BYTE *)this + 124) )
    {
      *((_BYTE *)this + 124) = 0;
      Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking(
        v4,
        (char *)this + 88,
        *((unsigned int *)this + 30));
    }
    *((_QWORD *)this + 9) = 0LL;
    v5 = (volatile signed __int32 *)*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = 0LL;
    if ( v5 )
    {
      if ( !_InterlockedDecrement(v5 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( !_InterlockedDecrement(v5 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
  }
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v9);
  v9 = &HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::`vftable';
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v9);
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v25, 0xFFFFFFFF) == 1 )
    {
      v6 = v25;
      if ( v25 )
      {
        wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)v25 + 8);
        operator delete(v6, (const struct std::nothrow_t *)0x100);
      }
    }
    v25 = 0LL;
  }
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)&v14);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v10);
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 14);
  if ( v7 )
    (**v7)(v7, 1LL);
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 10);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>((__int64)this);
}
