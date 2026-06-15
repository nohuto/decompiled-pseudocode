/*
 * XREFs of _AtmosCheck::GetEndpointInterfaceId_::_1_::dtor$5 @ 0x18013EACE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::GetEndpointInterfaceId_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
