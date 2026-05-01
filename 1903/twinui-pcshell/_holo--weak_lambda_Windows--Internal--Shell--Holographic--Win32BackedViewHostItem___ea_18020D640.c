/*
 * XREFs of _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af____::_2_::captured_state::_captured_state @ 0x18020D640
 * Callers:
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af____::_1_::dtor$2 @ 0x18020B82E (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_594537.c)
 * Callees:
 *     ??1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18020D274 (--1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af____::_2_::captured_state::_captured_state(
        __int64 *a1)
{
  Win32BackedViewHostItemTelemetry::PortFromHolographic::~PortFromHolographic((Win32BackedViewHostItemTelemetry::PortFromHolographic *)(a1 + 2));
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a1);
}
