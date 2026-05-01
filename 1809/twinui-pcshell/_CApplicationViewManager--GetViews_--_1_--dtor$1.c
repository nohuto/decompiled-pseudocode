/*
 * XREFs of _CApplicationViewManager::GetViews_::_1_::dtor$1 @ 0x18012CD1A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationViewManager::GetViews_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 96));
}
