/*
 * XREFs of _CAppViewManager::_PrepareToSwitchAsyncWorker_::_1_::dtor$2 @ 0x18013807F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::_PrepareToSwitchAsyncWorker_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 88));
}
