/*
 * XREFs of ?Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@WBA@EAAKXZ @ 0x1800B81F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs::Release(__int64 a1)
{
  return Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::Release((volatile signed __int64 *)(a1 - 16));
}
