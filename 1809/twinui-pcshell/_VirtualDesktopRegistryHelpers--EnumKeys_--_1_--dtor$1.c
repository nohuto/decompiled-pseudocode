/*
 * XREFs of _VirtualDesktopRegistryHelpers::EnumKeys_::_1_::dtor$1 @ 0x180381AF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopRegistryHelpers::EnumKeys_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 40);
}
