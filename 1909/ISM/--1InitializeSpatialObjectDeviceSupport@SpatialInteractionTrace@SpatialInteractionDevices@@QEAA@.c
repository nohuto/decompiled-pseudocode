/*
 * XREFs of ??1InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800EA9C0
 * Callers:
 *     __lambda_6a3155624c78cd50ce8884ce74998254_::operator()_::_1_::dtor$0 @ 0x1800EAE68 (__lambda_6a3155624c78cd50ce8884ce74998254_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E18BC (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::InitializeSpatialObjectDeviceSupport::~InitializeSpatialObjectDeviceSupport(
        SpatialInteractionDevices::SpatialInteractionTrace::InitializeSpatialObjectDeviceSupport *this)
{
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::InitializeSpatialObjectDeviceSupport::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
