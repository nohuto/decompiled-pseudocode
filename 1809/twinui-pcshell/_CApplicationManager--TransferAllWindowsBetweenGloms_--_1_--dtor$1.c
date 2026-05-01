/*
 * XREFs of _CApplicationManager::TransferAllWindowsBetweenGloms_::_1_::dtor$1 @ 0x1800F57BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::TransferAllWindowsBetweenGloms_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::~Iterator(a2 + 64);
}
