/*
 * XREFs of ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ADF9C
 * Callers:
 *     ??1DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800AB008 (--1DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??1OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800AB528 (--1OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??1InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800AC2E8 (--1InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@.c)
 *     ??1DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800AD8D8 (--1DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??1DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800ADDF8 (--1DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     _lambda_a518e9677c20752b15edab298cff80bd_::operator() @ 0x1800AF714 (_lambda_a518e9677c20752b15edab298cff80bd_--operator().c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800B0708 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800B2910 (-OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Interna.c)
 *     ?OnSpatialObjectDeviceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800B2CC0 (-OnSpatialObjectDeviceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?OnSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBU_GUID@@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800B2FD0 (-OnSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     _lambda_34c6fe1e55b6e4140dcfd37dea589bfc_::operator() @ 0x1800B31F0 (_lambda_34c6fe1e55b6e4140dcfd37dea589bfc_--operator().c)
 *     _lambda_46e712f1d4a8bfe7f662a31e53621789_::operator() @ 0x1800B35CC (_lambda_46e712f1d4a8bfe7f662a31e53621789_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_24502c691939f16d0a2037af5bc6e768__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B7A00 (std--_Func_impl_no_alloc__lambda_24502c691939f16d0a2037af5bc6e768__void_std--shared_ea_1800B7A00.c)
 *     ?OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800BECA0 (-OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@E.c)
 *     ?OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800BEE00 (-OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ??1?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800AE0AC (--1-$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflecto_ea_1800AE0AC.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3, (const struct std::nothrow_t *)0x100);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
