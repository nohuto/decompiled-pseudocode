/*
 * XREFs of ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x18009BDCC
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x18009C70C (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     _SpatialRimDeviceCollection::DoDeviceAttach_::_1_::dtor$0 @ 0x18009C901 (_SpatialRimDeviceCollection--DoDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009BB84 (--1-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?LockExclusive@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18009D6D4 (-LockExclusive@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A.c)
 *     ?SetUnhandledException@?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x18009F110 (-SetUnhandledException@-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18009FCB4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800A0430 (-reset@-$shared_object@V-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall RawInputProvidersTracing::DeviceAttached::~DeviceAttached(
        RawInputProvidersTracing::DeviceAttached *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  char v4; // si
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)((char *)this + 304);
  v3 = *((_QWORD *)this + 38) == 0LL;
  *(_QWORD *)this = &RawInputProvidersTracing::DeviceAttached::`vftable';
  if ( v3 )
    goto LABEL_9;
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    SRWLock);
  if ( *v1 && *(_DWORD *)*v1 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v4 )
  {
LABEL_9:
    if ( **((_DWORD **)this + 6) == 1 )
    {
      wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      (*(void (__fastcall **)(RawInputProvidersTracing::DeviceAttached *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  wil::details::shared_object<wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((RawInputProvidersTracing::DeviceAttached *)((char *)this + 8));
}
