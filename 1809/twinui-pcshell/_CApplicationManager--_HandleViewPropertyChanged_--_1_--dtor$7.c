/*
 * XREFs of _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$7 @ 0x1800ACAD2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::~Iterator(a2 + 128);
}
