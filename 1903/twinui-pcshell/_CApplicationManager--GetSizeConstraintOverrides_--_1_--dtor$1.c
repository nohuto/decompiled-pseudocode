/*
 * XREFs of _CApplicationManager::GetSizeConstraintOverrides_::_1_::dtor$1 @ 0x180112DF6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::GetSizeConstraintOverrides_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 128));
}
