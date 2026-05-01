/*
 * XREFs of _CDesktopPositioner::_GetRestorePosition_::_1_::dtor$1 @ 0x1800C33F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopPositioner::_GetRestorePosition_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 64);
}
