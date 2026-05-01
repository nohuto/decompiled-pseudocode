/*
 * XREFs of _CApplicationManager::_HandleApplicationRequestActivation_::_1_::dtor$2 @ 0x18011CF72
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_HandleApplicationRequestActivation_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 64));
}
