/*
 * XREFs of _ViewEventDispatcher::OnShellHookMessage_::_1_::dtor$2 @ 0x18021649B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::OnShellHookMessage_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 96));
}
