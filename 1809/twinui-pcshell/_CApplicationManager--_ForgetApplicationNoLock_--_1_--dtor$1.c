/*
 * XREFs of _CApplicationManager::_ForgetApplicationNoLock_::_1_::dtor$1 @ 0x1800F7116
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_ForgetApplicationNoLock_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 168));
}
