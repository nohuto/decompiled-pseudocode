/*
 * XREFs of _FillAPOInitSystemEffectsStructure_::_1_::dtor$17 @ 0x180132AA1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FillAPOInitSystemEffectsStructure_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((void ***)(a2 + 80));
}
