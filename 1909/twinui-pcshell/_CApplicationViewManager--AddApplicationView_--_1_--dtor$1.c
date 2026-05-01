/*
 * XREFs of _CApplicationViewManager::AddApplicationView_::_1_::dtor$1 @ 0x180174D23
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationViewManager::AddApplicationView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 96));
}
