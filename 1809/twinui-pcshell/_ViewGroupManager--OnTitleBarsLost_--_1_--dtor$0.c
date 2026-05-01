/*
 * XREFs of _ViewGroupManager::OnTitleBarsLost_::_1_::dtor$0 @ 0x1801FAE11
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewGroupManager::OnTitleBarsLost_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 80));
}
