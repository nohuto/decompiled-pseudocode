/*
 * XREFs of _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$8 @ 0x14001B58F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 136);
}
