/*
 * XREFs of std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af____::_2_::captured_state_::_Destroy @ 0x180234360
 * Callers:
 *     <none>
 * Callees:
 *     ??1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18022C5E4 (--1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af____::_2_::captured_state_::_Destroy(
        __int64 a1)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)(a1 + 16);
  Win32BackedViewHostItemTelemetry::PortFromHolographic::~PortFromHolographic((Win32BackedViewHostItemTelemetry::PortFromHolographic *)(a1 + 32));
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v1);
}
