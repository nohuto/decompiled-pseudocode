/*
 * XREFs of _TabViewManager::GetViewForTab_::_1_::dtor$1 @ 0x1801DDA9A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabViewManager::GetViewForTab_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 104));
}
