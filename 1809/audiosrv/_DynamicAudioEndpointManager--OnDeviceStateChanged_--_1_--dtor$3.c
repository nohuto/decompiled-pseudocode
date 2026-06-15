/*
 * XREFs of _DynamicAudioEndpointManager::OnDeviceStateChanged_::_1_::dtor$3 @ 0x18011EA1B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DynamicAudioEndpointManager::OnDeviceStateChanged_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
