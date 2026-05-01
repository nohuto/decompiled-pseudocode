/*
 * XREFs of _CApplicationViewManager::RemoveApplicationView_::_1_::dtor$1 @ 0x18012D58E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationViewManager::RemoveApplicationView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 168));
}
