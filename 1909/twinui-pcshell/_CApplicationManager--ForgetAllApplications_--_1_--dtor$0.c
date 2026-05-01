/*
 * XREFs of _CApplicationManager::ForgetAllApplications_::_1_::dtor$0 @ 0x1801303C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::ForgetAllApplications_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 64));
}
