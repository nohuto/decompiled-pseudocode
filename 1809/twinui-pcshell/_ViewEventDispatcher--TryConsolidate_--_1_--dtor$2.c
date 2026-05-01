/*
 * XREFs of _ViewEventDispatcher::TryConsolidate_::_1_::dtor$2 @ 0x18021B34A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::TryConsolidate_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 32));
}
