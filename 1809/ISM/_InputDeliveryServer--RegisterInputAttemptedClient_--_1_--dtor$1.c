/*
 * XREFs of _InputDeliveryServer::RegisterInputAttemptedClient_::_1_::dtor$1 @ 0x18012F063
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall InputDeliveryServer::RegisterInputAttemptedClient_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<DataProviderPrincipal>::~ComPtr<DataProviderPrincipal>(*(_QWORD **)(a2 + 80));
}
