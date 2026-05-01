/*
 * XREFs of _TabViewManager::OnSelectTabRequested_::_1_::dtor$10 @ 0x180233C4B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabViewManager::OnSelectTabRequested_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 96));
}
