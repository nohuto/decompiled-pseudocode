/*
 * XREFs of _TabViewManager::PerformDelayedInitialization_::_1_::dtor$0 @ 0x180235EBA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabViewManager::PerformDelayedInitialization_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((LPVOID *)(a2 + 128));
}
