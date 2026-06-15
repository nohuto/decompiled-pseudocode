/*
 * XREFs of _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$3 @ 0x180121CF9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 168));
}
