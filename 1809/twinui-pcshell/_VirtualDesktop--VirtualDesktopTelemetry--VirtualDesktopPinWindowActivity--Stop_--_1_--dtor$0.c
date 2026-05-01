/*
 * XREFs of _VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::Stop_::_1_::dtor$0 @ 0x1803938AF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::Stop_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 88);
}
