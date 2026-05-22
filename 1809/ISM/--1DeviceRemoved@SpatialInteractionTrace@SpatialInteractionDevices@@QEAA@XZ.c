/*
 * XREFs of ??1DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800AB008
 * Callers:
 *     __lambda_a518e9677c20752b15edab298cff80bd_::operator()_::_1_::dtor$0 @ 0x1801333CE (__lambda_a518e9677c20752b15edab298cff80bd_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3D10 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::~DeviceRemoved(
        SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved *this)
{
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>(this);
}
