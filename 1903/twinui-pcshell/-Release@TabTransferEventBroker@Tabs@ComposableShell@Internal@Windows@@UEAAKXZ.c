/*
 * XREFs of ?Release@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAKXZ @ 0x18024C280
 * Callers:
 *     ?Release@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ @ 0x1800B83C0 (-Release@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::Release(this);
}
