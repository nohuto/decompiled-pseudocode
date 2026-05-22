/*
 * XREFs of ??1DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800ADDF8
 * Callers:
 *     __lambda_46e712f1d4a8bfe7f662a31e53621789_::operator()_::_1_::dtor$0 @ 0x1801335AD (__lambda_46e712f1d4a8bfe7f662a31e53621789_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3D10 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::~DdiSource_InputThreadRemoval(
        SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval *this)
{
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>(this);
}
