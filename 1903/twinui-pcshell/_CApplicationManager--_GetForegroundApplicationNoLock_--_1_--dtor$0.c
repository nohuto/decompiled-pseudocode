/*
 * XREFs of _CApplicationManager::_GetForegroundApplicationNoLock_::_1_::dtor$0 @ 0x18011C6B5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_GetForegroundApplicationNoLock_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 128));
}
