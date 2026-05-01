/*
 * XREFs of _CApplicationManager::_HandleWindowBecameUnowned_::_1_::dtor$1 @ 0x18011DFAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_HandleWindowBecameUnowned_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 120));
}
