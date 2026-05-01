/*
 * XREFs of _CApplicationManager::QueryObjectForWindow_::_1_::dtor$1 @ 0x180135072
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::QueryObjectForWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 96));
}
