/*
 * XREFs of _VirtualPinnedAppsHandler::PinViewInternal_::_1_::dtor$0 @ 0x1803F838D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualPinnedAppsHandler::PinViewInternal_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 56);
}
