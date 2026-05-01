/*
 * XREFs of ??1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18020D2A0
 * Callers:
 *     holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_b1e75d3e314d3909b197b601af483277___ @ 0x18020B840 (holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_b1e75d3.c)
 *     _lambda_b1e75d3e314d3909b197b601af483277_::__lambda_b1e75d3e314d3909b197b601af483277_ @ 0x18020CFA4 (_lambda_b1e75d3e314d3909b197b601af483277_--__lambda_b1e75d3e314d3909b197b601af483277_.c)
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_b1e75d3e314d3909b197b601af483277____::_2_::captured_state::_captured_state @ 0x18020D668 (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem___ea_18020D668.c)
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802118D0 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::PortToHolographic_::_1_::dtor$0 @ 0x180211A63 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--PortToHolographic_--_1_--dtor$0.c)
 *     std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_b1e75d3e314d3909b197b601af483277____::_2_::captured_state_::_Destroy @ 0x180214FF0 (std--_Ref_count_obj__holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32_ea_180214FF0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18020ECA4 (-Destroy@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAA.c)
 */

void __fastcall Win32BackedViewHostItemTelemetry::PortToHolographic::~PortToHolographic(
        Win32BackedViewHostItemTelemetry::PortToHolographic *this)
{
  *(_QWORD *)this = &Win32BackedViewHostItemTelemetry::PortToHolographic::`vftable';
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
