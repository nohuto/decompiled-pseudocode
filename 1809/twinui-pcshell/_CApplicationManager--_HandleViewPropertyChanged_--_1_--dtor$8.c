/*
 * XREFs of _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$8 @ 0x1800ACAE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::~Iterator(a2 + 160);
}
