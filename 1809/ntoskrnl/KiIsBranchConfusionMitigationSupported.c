/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x1401B4498
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EDD0 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1401B4504 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsSrsoMitigationDesired @ 0x1401B4638 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401B4C88 (KiIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 & 4) != 0 && !(unsigned int)KiIsHyperVCr3RspErrataPresent();
}
