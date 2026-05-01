/*
 * XREFs of ?AddRef@ScreenClippingBrokerImpl@@WCI@EAAKXZ @ 0x1800B5520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ScreenClippingBrokerImpl::AddRef(__int64 a1)
{
  return Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::AddRef((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)(a1 - 40));
}
