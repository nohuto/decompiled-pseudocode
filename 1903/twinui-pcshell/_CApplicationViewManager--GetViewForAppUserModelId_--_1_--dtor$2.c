/*
 * XREFs of _CApplicationViewManager::GetViewForAppUserModelId_::_1_::dtor$2 @ 0x180156266
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationViewManager::GetViewForAppUserModelId_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 56);
}
