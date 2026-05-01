/*
 * XREFs of ?GetRuntimeClassName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802DA250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall VirtualDesktop::GetRuntimeClassName(VirtualDesktop *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Multitasking.VirtualDesktop", 0x3Cu, a2);
}
