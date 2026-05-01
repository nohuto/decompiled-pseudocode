/*
 * XREFs of _CApplicationManager::GetApplication_::_1_::dtor$1 @ 0x180130A1D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::GetApplication_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 80));
}
