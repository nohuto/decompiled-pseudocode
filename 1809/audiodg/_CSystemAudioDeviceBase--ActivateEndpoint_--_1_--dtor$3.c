/*
 * XREFs of _CSystemAudioDeviceBase::ActivateEndpoint_::_1_::dtor$3 @ 0x1400350A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::ActivateEndpoint_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 56));
}
