/*
 * XREFs of _CApplicationManager::CreateNewGlom_::_1_::dtor$5 @ 0x1800ED4FA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::CreateNewGlom_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::~Iterator(a2 + 128);
}
