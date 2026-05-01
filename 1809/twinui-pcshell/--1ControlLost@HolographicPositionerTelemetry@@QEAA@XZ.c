/*
 * XREFs of ??1ControlLost@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801B15B8
 * Callers:
 *     _HolographicPositioner::ControlLost_::_1_::dtor$4 @ 0x1801B27D4 (_HolographicPositioner--ControlLost_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801B284C (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 */

void __fastcall HolographicPositionerTelemetry::ControlLost::~ControlLost(
        HolographicPositionerTelemetry::ControlLost *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::ControlLost::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
