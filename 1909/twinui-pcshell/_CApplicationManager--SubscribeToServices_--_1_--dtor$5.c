/*
 * XREFs of _CApplicationManager::SubscribeToServices_::_1_::dtor$5 @ 0x1801397C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::SubscribeToServices_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 96));
}
