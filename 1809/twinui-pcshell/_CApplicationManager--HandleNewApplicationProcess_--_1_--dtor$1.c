/*
 * XREFs of _CApplicationManager::HandleNewApplicationProcess_::_1_::dtor$1 @ 0x1800EF353
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::HandleNewApplicationProcess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 48));
}
