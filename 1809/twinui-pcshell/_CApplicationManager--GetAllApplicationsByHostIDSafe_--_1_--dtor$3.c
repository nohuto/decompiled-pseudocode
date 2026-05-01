/*
 * XREFs of _CApplicationManager::GetAllApplicationsByHostIDSafe_::_1_::dtor$3 @ 0x1800ACD7A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::GetAllApplicationsByHostIDSafe_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::~Iterator(a2 + 72);
}
