/*
 * XREFs of _TabViewManager::OnViewCanTabChanged_::_1_::dtor$4 @ 0x1801E284D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabViewManager::OnViewCanTabChanged_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 48));
}
