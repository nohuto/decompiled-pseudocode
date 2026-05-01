/*
 * XREFs of _CApplicationManager::GetImmersiveApplicationArraySafe_::_1_::dtor$1 @ 0x1800C3546
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::GetImmersiveApplicationArraySafe_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IHolographicViewTransitionNotification,Microsoft::WRL::ComPtr<IHolographicViewTransitionNotification>>::Iterator::~Iterator(a2 + 40);
}
