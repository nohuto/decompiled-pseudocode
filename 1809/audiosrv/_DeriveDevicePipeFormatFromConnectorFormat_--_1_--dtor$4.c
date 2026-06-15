/*
 * XREFs of _DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$4 @ 0x1800D142C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 48));
}
