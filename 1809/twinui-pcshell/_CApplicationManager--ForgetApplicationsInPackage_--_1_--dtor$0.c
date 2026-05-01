/*
 * XREFs of _CApplicationManager::ForgetApplicationsInPackage_::_1_::dtor$0 @ 0x1800EDFE2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::ForgetApplicationsInPackage_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 96));
}
