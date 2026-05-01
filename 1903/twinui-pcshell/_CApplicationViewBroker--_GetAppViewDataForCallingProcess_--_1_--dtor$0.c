/*
 * XREFs of _CApplicationViewBroker::_GetAppViewDataForCallingProcess_::_1_::dtor$0 @ 0x18038E500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationViewBroker::_GetAppViewDataForCallingProcess_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 40);
}
