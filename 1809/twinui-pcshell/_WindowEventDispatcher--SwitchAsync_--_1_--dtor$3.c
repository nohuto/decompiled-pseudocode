/*
 * XREFs of _WindowEventDispatcher::SwitchAsync_::_1_::dtor$3 @ 0x18022C5DB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::SwitchAsync_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 96));
}
