/*
 * XREFs of _DWMInputRouter::OnFocusedThreadChanged_::_1_::dtor$1 @ 0x18003BEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DWMInputRouter::OnFocusedThreadChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 56));
}
