/*
 * XREFs of _CAppViewManager::SplitView_::_1_::dtor$4 @ 0x180132CB6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::SplitView_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 80));
}
