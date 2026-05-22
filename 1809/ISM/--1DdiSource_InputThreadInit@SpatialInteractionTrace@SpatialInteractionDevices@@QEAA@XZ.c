/*
 * XREFs of ??1DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800AD8D8
 * Callers:
 *     __lambda_34c6fe1e55b6e4140dcfd37dea589bfc_::operator()_::_1_::dtor$0 @ 0x18013359B (__lambda_34c6fe1e55b6e4140dcfd37dea589bfc_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3D10 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit::~DdiSource_InputThreadInit(
        SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit *this)
{
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>(this);
}
