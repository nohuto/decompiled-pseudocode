/*
 * XREFs of _WindowEventDispatcher::GetViews_::_1_::dtor$0 @ 0x180228829
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::GetViews_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 120));
}
