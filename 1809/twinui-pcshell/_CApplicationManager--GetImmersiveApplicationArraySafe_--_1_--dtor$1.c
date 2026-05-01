/*
 * XREFs of _CApplicationManager::GetImmersiveApplicationArraySafe_::_1_::dtor$1 @ 0x1800ACD32
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::GetImmersiveApplicationArraySafe_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::~Iterator(a2 + 48);
}
