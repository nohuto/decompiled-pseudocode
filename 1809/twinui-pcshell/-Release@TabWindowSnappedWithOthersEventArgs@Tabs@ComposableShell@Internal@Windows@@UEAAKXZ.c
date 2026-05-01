/*
 * XREFs of ?Release@TabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAKXZ @ 0x1801E3F20
 * Callers:
 *     ?Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ @ 0x1800A13B0 (-Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@WBA@EAAKXZ @ 0x1800A13C0 (-Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
