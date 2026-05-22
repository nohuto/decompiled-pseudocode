/*
 * XREFs of _Win32kInterop::ProcessInputMessage_::_1_::dtor$5 @ 0x1800BDB31
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32kInterop::ProcessInputMessage_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 56));
}
