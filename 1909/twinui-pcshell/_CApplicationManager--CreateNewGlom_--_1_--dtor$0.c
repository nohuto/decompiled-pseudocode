/*
 * XREFs of _CApplicationManager::CreateNewGlom_::_1_::dtor$0 @ 0x18012FAD3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::CreateNewGlom_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 256));
}
