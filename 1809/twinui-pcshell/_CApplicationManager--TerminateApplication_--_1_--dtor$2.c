/*
 * XREFs of _CApplicationManager::TerminateApplication_::_1_::dtor$2 @ 0x1800F5650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::TerminateApplication_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 64));
}
