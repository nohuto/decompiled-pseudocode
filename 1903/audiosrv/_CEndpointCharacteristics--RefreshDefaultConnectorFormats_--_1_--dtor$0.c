/*
 * XREFs of _CEndpointCharacteristics::RefreshDefaultConnectorFormats_::_1_::dtor$0 @ 0x18011A1DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::RefreshDefaultConnectorFormats_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 64));
}
