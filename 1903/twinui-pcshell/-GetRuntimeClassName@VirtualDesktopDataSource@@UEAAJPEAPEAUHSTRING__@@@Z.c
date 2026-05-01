/*
 * XREFs of ?GetRuntimeClassName@VirtualDesktopDataSource@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803374E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall VirtualDesktopDataSource::GetRuntimeClassName(VirtualDesktopDataSource *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Multitasking.VirtualDesktopDataSource", 0x46u, a2);
}
