/*
 * XREFs of _VirtualDesktopController::PinUnPinSwitchItemToAllDesktops_::_1_::dtor$1 @ 0x180339E7F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopController::PinUnPinSwitchItemToAllDesktops_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 40);
}
