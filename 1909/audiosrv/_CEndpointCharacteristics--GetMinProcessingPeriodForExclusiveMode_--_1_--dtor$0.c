/*
 * XREFs of _CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode_::_1_::dtor$0 @ 0x18007317C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 160);
}
