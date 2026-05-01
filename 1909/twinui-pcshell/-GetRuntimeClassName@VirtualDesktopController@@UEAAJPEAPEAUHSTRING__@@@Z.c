/*
 * XREFs of ?GetRuntimeClassName@VirtualDesktopController@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180358FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall VirtualDesktopController::GetRuntimeClassName(VirtualDesktopController *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Multitasking.VirtualDesktopController", 0x46u, a2);
}
