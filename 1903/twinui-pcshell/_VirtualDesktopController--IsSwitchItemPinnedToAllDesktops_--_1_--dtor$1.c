/*
 * XREFs of _VirtualDesktopController::IsSwitchItemPinnedToAllDesktops_::_1_::dtor$1 @ 0x1803399C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopController::IsSwitchItemPinnedToAllDesktops_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 48);
}
