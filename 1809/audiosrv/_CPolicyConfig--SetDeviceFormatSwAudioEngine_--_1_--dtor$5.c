/*
 * XREFs of _CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor$5 @ 0x1800D4F3E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((void ***)(a2 + 64));
}
