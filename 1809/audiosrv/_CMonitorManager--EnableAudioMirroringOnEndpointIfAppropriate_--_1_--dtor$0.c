/*
 * XREFs of _CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate_::_1_::dtor$0 @ 0x1800FCC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 168));
}
