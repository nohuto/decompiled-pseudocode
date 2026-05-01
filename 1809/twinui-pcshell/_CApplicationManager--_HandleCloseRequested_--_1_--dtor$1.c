/*
 * XREFs of _CApplicationManager::_HandleCloseRequested_::_1_::dtor$1 @ 0x1800F7EBE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_HandleCloseRequested_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 112);
}
