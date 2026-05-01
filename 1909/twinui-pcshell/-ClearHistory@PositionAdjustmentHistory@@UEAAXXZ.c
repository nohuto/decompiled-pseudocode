/*
 * XREFs of ?ClearHistory@PositionAdjustmentHistory@@UEAAXXZ @ 0x1803DA800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PositionAdjustmentHistory::ClearHistory(PositionAdjustmentHistory *this)
{
  CTSimpleArray<CAppTransitionManager::AppSpecialInfo,4294967294,CTPolicyCoTaskMem<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardCompareHelper<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardMergeHelper<CAppTransitionManager::AppSpecialInfo>>::RemoveAll((__int64)this + 16);
}
