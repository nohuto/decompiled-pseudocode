/*
 * XREFs of _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_b1e75d3e314d3909b197b601af483277____::_2_::captured_state::_captured_state @ 0x18020D668
 * Callers:
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_b1e75d3e314d3909b197b601af483277____::_1_::dtor$2 @ 0x18020B902 (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_b1e75d.c)
 * Callees:
 *     ??1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18020D2A0 (--1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_b1e75d3e314d3909b197b601af483277____::_2_::captured_state::_captured_state(
        __int64 *a1)
{
  Win32BackedViewHostItemTelemetry::PortToHolographic::~PortToHolographic((Win32BackedViewHostItemTelemetry::PortToHolographic *)(a1 + 2));
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a1);
}
