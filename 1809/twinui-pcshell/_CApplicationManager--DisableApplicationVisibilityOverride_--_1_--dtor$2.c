/*
 * XREFs of _CApplicationManager::DisableApplicationVisibilityOverride_::_1_::dtor$2 @ 0x1800ED87A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::DisableApplicationVisibilityOverride_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 56);
}
