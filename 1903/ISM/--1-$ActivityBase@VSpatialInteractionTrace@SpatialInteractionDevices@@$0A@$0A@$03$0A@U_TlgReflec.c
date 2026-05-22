/*
 * XREFs of ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E0724
 * Callers:
 *     ?RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAXPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x180035BE0 (-RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 *     ??1DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800E0A24 (--1DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??1OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800E0A98 (--1OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     _lambda_6af16b50654dcdcb9558a84173d25568_::operator() @ 0x1800E0DA8 (_lambda_6af16b50654dcdcb9558a84173d25568_--operator().c)
 *     ??1DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800EAB98 (--1DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??1DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800EABC4 (--1DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??1InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800EABF0 (--1InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@.c)
 *     _lambda_6a3155624c78cd50ce8884ce74998254_::operator() @ 0x1800EAFF0 (_lambda_6a3155624c78cd50ce8884ce74998254_--operator().c)
 *     _lambda_73536ef6a7ee89bb5b58de675fe62586_::operator() @ 0x1800EB0AC (_lambda_73536ef6a7ee89bb5b58de675fe62586_--operator().c)
 *     ?OnInputSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBU_GUID@@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800ECEB0 (-OnInputSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Window.c)
 *     ?OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800ED030 (-OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Interna.c)
 *     ?OnSpatialObjectDeviceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800ED0E0 (-OnSpatialObjectDeviceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800F5C90 (-OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@E.c)
 *     ?OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800F5D90 (-OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18009FE74 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E07D0 (--1-$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflecto_ea_1800E07D0.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E72EC (-reset@-$shared_object@V-$ActivityData@VSpatialInteractionTrace@SpatialInteractionD_ea_1800E72EC.c)
 */

void __fastcall wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SpatialInteractionDevices::SpatialInteractionTrace,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
