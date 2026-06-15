/*
 * XREFs of _CreateSaDevice_::_1_::dtor$9 @ 0x18006DDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateSaDevice_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 1192);
}
