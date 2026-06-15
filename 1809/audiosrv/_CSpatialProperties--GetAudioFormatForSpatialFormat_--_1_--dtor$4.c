/*
 * XREFs of _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$4 @ 0x180121D05
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((void ***)(a2 + 304));
}
