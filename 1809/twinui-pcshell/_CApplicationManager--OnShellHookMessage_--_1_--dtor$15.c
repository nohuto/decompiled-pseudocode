/*
 * XREFs of _CApplicationManager::OnShellHookMessage_::_1_::dtor$15 @ 0x1800AD4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::OnShellHookMessage_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::~Iterator(a2 + 176);
}
