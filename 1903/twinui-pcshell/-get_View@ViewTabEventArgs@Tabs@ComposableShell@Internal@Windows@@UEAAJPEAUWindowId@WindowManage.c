/*
 * XREFs of ?get_View@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUWindowId@WindowManagement@ApplicationModel@45@@Z @ 0x180084A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs::get_View(
        Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::WindowId *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 18);
  return 0LL;
}
