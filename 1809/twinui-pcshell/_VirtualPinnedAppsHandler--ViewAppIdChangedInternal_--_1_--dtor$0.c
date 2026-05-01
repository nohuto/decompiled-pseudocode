/*
 * XREFs of _VirtualPinnedAppsHandler::ViewAppIdChangedInternal_::_1_::dtor$0 @ 0x1800ACC46
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualPinnedAppsHandler::ViewAppIdChangedInternal_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 56);
}
