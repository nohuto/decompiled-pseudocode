/*
 * XREFs of _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$2 @ 0x1802AD051
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapter::InitializeItems_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::~Iterator(a2 + 32);
}
