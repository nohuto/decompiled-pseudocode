/*
 * XREFs of _ViewEventDispatcher::QueuePendingActivation_::_1_::dtor$3 @ 0x180216E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::QueuePendingActivation_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 96));
}
