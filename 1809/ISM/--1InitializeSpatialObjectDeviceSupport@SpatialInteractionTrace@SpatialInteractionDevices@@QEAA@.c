/*
 * XREFs of ??1InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800AC2E8
 * Callers:
 *     _std::_Func_impl_no_alloc__lambda_24502c691939f16d0a2037af5bc6e768__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call_::_1_::dtor$0 @ 0x1801338FE (_std--_Func_impl_no_alloc__lambda_24502c691939f16d0a2037af5bc6e768__void_std--shared_ptr_Windows.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3D10 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::InitializeSpatialObjectDeviceSupport::~InitializeSpatialObjectDeviceSupport(
        SpatialInteractionDevices::SpatialInteractionTrace::InitializeSpatialObjectDeviceSupport *this)
{
  *(_QWORD *)this = &SpatialInteractionDevices::SpatialInteractionTrace::InitializeSpatialObjectDeviceSupport::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>(this);
}
