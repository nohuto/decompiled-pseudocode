/*
 * XREFs of ?get_DropIndex@TabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAH@Z @ 0x180084A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs::get_DropIndex(
        Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *this,
        int *a2)
{
  *a2 = *((_DWORD *)this + 24);
  return 0LL;
}
