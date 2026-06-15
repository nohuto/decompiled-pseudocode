/*
 * XREFs of _CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor$4 @ 0x1800D4F32
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 264));
}
