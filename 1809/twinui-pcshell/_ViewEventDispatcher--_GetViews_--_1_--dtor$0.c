/*
 * XREFs of _ViewEventDispatcher::_GetViews_::_1_::dtor$0 @ 0x18021ED8E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::_GetViews_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 120));
}
