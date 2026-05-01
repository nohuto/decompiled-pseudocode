/*
 * XREFs of _VirtualDesktopAcessibility::RecalculateDesktopName_::_1_::dtor$2 @ 0x18038D073
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopAcessibility::RecalculateDesktopName_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 40);
}
