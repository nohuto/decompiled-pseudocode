/*
 * XREFs of _ViewEventDispatcher::ViewVisibilityChanged_::_1_::dtor$1 @ 0x18021D853
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::ViewVisibilityChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 40));
}
