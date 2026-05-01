/*
 * XREFs of _TabViewManager::PerformDelayedInitialization_::_1_::dtor$1 @ 0x1802554B5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabViewManager::PerformDelayedInitialization_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 256));
}
