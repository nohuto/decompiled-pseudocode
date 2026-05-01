/*
 * XREFs of _CDesktopPositioner::_PersistPosition_::_1_::dtor$3 @ 0x1803A64E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopPositioner::_PersistPosition_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 64);
}
