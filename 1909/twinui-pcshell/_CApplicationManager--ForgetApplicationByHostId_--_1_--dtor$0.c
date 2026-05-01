/*
 * XREFs of _CApplicationManager::ForgetApplicationByHostId_::_1_::dtor$0 @ 0x18013056E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::ForgetApplicationByHostId_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 80));
}
