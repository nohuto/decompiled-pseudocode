/*
 * XREFs of ??1FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800AA990
 * Callers:
 *     ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800AF90C (-FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::FinalizeInitialization_::_1_::dtor$0 @ 0x1801333E0 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--FinalizeIniti.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800031D8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064040 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?StopActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800AA5B0 (-StopActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices.c)
 *     ??1?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800AE010 (--1-$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0Is.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::~FinalizeControllerInitialization(
        SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *this)
{
  bool v1; // zf
  char v3; // si
  volatile signed __int32 *v4; // rcx
  char *v5; // rdi
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // edx
  volatile signed __int32 *v9; // rcx
  char *v10; // rdi
  const struct wil::FailureInfo *v11; // rdx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v13[144]; // [rsp+30h] [rbp-98h] BYREF

  v1 = *((_QWORD *)this + 38) == 0LL;
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::`vftable';
  v3 = 1;
  if ( v1 )
    goto LABEL_12;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( !v4 || *v4 != 1 )
  {
    v3 = 0;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      {
        v5 = (char *)*((_QWORD *)this + 38);
        if ( v5 )
        {
          wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>(v5 + 8);
          operator delete(v5, (const struct std::nothrow_t *)0x100);
        }
      }
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_12:
    v6 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v6 == 1 )
    {
      v7 = -2147024322;
      v8 = v6[18];
      if ( (int)v6[21] < 0 )
        v7 = v6[21];
      if ( v8 < 1 )
      {
        memset_0(v13, 0, sizeof(v13));
        wil::details::WilFailFast((wil::details *)v13, v11);
      }
      if ( (int)v6[19] >= 0 )
        v6[19] = v7;
      v6[18] = v8 - 1;
      SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::StopActivity(this);
    }
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
    {
      v10 = (char *)*((_QWORD *)this + 38);
      if ( v10 )
      {
        wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>(v10 + 8);
        operator delete(v10, (const struct std::nothrow_t *)0x100);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>((char *)this + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *)((char *)this + 8));
}
