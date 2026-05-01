/*
 * XREFs of ?Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@WBA@EAAKXZ @ 0x1800DAD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs::Release(__int64 a1)
{
  return Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::Release(a1 - 16);
}
