/*
 * XREFs of _CApplicationManager::_GetForegroundApplicationNoLock_::_1_::dtor$1 @ 0x18013BB61
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_GetForegroundApplicationNoLock_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 120));
}
