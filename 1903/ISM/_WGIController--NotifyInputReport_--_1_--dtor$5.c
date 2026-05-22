/*
 * XREFs of _WGIController::NotifyInputReport_::_1_::dtor$5 @ 0x1800AAD15
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall WGIController::NotifyInputReport_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(*(_QWORD *)(a2 + 112) + 8LL));
}
