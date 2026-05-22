/*
 * XREFs of ??1OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800E085C
 * Callers:
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800E31AC (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$2 @ 0x1800E385D (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E385D.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E18BC (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::~OnHolographicDisplayChanged(
        SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *this)
{
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
