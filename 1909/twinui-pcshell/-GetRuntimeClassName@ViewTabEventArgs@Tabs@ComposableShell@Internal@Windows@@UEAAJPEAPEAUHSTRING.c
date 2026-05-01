/*
 * XREFs of ?GetRuntimeClassName@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18024FA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs::GetRuntimeClassName(
        Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Tabs.ViewTabEventArgs", 0x36u, a2);
}
