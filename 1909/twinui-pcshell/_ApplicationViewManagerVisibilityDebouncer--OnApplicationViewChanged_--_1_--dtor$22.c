/*
 * XREFs of _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$22 @ 0x1800E6F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor_22(
        __int64 a1,
        __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::~Iterator(a2 + 160);
}
