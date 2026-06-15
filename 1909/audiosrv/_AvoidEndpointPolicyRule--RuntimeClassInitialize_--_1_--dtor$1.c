/*
 * XREFs of _AvoidEndpointPolicyRule::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18012D44C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AvoidEndpointPolicyRule::RuntimeClassInitialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 112));
}
