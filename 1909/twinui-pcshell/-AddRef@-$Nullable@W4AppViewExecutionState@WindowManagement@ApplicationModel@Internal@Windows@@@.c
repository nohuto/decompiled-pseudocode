/*
 * XREFs of ?AddRef@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@W7EAAKXZ @ 0x1800D4160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,Microsoft::WRL::FtmBase>::AddRef(a1 - 8);
}
