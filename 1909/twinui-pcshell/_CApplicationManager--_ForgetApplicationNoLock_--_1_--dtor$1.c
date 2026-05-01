/*
 * XREFs of _CApplicationManager::_ForgetApplicationNoLock_::_1_::dtor$1 @ 0x18013B8E6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_ForgetApplicationNoLock_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 184));
}
