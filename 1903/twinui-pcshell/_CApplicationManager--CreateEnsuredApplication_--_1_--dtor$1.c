/*
 * XREFs of _CApplicationManager::CreateEnsuredApplication_::_1_::dtor$1 @ 0x1801104A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::CreateEnsuredApplication_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 64));
}
