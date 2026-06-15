/*
 * XREFs of _CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings_::_1_::dtor$4 @ 0x180072CB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 88);
}
