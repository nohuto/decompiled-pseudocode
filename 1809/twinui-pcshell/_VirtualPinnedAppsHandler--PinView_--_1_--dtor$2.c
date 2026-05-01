/*
 * XREFs of _VirtualPinnedAppsHandler::PinView_::_1_::dtor$2 @ 0x1803922FD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualPinnedAppsHandler::PinView_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 56);
}
