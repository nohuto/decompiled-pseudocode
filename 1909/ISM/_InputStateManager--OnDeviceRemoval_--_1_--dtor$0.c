/*
 * XREFs of _InputStateManager::OnDeviceRemoval_::_1_::dtor$0 @ 0x180092924
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall InputStateManager::OnDeviceRemoval_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 80));
}
