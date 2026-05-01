/*
 * XREFs of _CApplicationManager::_RemoveApplication_::_1_::dtor$1 @ 0x18011FB8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_RemoveApplication_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 96));
}
