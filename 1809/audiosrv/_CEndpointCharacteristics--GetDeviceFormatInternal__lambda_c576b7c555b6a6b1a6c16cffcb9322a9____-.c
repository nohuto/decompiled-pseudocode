/*
 * XREFs of _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c576b7c555b6a6b1a6c16cffcb9322a9____::_1_::dtor$0 @ 0x180066B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c576b7c555b6a6b1a6c16cffcb9322a9____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 48);
}
