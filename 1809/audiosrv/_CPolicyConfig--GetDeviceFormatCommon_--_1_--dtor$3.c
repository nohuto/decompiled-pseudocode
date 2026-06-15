/*
 * XREFs of _CPolicyConfig::GetDeviceFormatCommon_::_1_::dtor$3 @ 0x18006A982
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::GetDeviceFormatCommon_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 64);
}
