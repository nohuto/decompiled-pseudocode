/*
 * XREFs of _CApplicationManager::_RemoveWindowFromGlom_::_1_::dtor$2 @ 0x1800FA1C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_RemoveWindowFromGlom_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 112));
}
