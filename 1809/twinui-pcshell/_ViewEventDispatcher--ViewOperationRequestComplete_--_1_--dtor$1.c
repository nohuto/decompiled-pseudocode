/*
 * XREFs of _ViewEventDispatcher::ViewOperationRequestComplete_::_1_::dtor$1 @ 0x18021D51E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::ViewOperationRequestComplete_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 40));
}
