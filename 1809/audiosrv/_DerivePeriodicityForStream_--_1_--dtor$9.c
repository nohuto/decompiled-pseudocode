/*
 * XREFs of _DerivePeriodicityForStream_::_1_::dtor$9 @ 0x18006D730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DerivePeriodicityForStream_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((void ***)(a2 + 176));
}
