/*
 * XREFs of ?QueryInterface@TabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A16C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics::QueryInterface(__int64 a1)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::ComposableShell::Tabs::ITabSetMediatorStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(a1 - 40);
}
