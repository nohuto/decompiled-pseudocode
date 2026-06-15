/*
 * XREFs of _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$10 @ 0x18006DF98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 200);
}
