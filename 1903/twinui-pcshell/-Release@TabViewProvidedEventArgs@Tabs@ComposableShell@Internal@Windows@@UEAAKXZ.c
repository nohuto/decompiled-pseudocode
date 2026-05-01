/*
 * XREFs of ?Release@TabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAKXZ @ 0x1800A4660
 * Callers:
 *     ?Release@TabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ @ 0x1800B81E0 (-Release@TabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@WBA@EAAKXZ @ 0x1800B81F0 (-Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
