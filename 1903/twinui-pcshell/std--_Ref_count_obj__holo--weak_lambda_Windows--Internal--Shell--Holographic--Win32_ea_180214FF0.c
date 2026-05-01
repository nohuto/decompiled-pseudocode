/*
 * XREFs of std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_b1e75d3e314d3909b197b601af483277____::_2_::captured_state_::_Destroy @ 0x180214FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18020D2A0 (--1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_b1e75d3e314d3909b197b601af483277____::_2_::captured_state_::_Destroy(
        __int64 a1)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)(a1 + 16);
  Win32BackedViewHostItemTelemetry::PortToHolographic::~PortToHolographic((Win32BackedViewHostItemTelemetry::PortToHolographic *)(a1 + 32));
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v1);
}
