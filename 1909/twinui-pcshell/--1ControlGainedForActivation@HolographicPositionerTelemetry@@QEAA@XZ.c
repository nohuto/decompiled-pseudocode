/*
 * XREFs of ??1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ @ 0x18021DAD0
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18021E6E0 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 *     _HolographicPositioner::ControlGainedForActivation_::_1_::dtor$0 @ 0x18021EA20 (_HolographicPositioner--ControlGainedForActivation_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18021ECAC (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 */

void __fastcall HolographicPositionerTelemetry::ControlGainedForActivation::~ControlGainedForActivation(
        HolographicPositionerTelemetry::ControlGainedForActivation *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::ControlGainedForActivation::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
