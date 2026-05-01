/*
 * XREFs of ?Release@BrokeredViewTabConverterStatics@@UEAAKXZ @ 0x180224640
 * Callers:
 *     ?Release@TabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ @ 0x1800B7D40 (-Release@TabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@BrokeredViewTabConverterStatics@@WCI@EAAKXZ @ 0x1800B7D50 (-Release@BrokeredViewTabConverterStatics@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall BrokeredViewTabConverterStatics::Release(__int64 this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(this);
}
