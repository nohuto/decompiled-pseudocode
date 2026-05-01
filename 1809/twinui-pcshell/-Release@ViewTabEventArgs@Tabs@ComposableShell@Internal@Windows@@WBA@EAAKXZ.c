/*
 * XREFs of ?Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@WBA@EAAKXZ @ 0x1800A13C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs::Release(__int64 a1)
{
  return Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::Release((Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs *)(a1 - 16));
}
