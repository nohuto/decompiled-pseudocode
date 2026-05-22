/*
 * XREFs of _WGIController::NotifyInputReport_::_1_::dtor$4 @ 0x1800AABD9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall WGIController::NotifyInputReport_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(*(_QWORD **)(a2 + 112));
}
