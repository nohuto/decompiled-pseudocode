/*
 * XREFs of _Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges_::_1_::dtor$1 @ 0x1801215B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 120));
}
