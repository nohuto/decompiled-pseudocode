/*
 * XREFs of _GetFxClsids_::_1_::dtor$3 @ 0x18006B780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFxClsids_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<_GUID [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_GUID [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 144);
}
