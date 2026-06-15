/*
 * XREFs of _CSystemAudioDeviceBase::ActivateEndpoint_::_1_::dtor$5 @ 0x1400350B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::ActivateEndpoint_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 328));
}
