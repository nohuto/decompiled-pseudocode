/*
 * XREFs of _CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings_::_1_::dtor$3 @ 0x180072CA2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 112);
}
