/*
 * XREFs of KiIsBranchConfusionPresent @ 0x1401B4620
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D8C4 (KiDetectHardwareSpecControlFeatures.c)
 *     KeOptimizeSpecCtrlSettings @ 0x14018EF30 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsSrsoMitigationDesired @ 0x1401B4798 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176CB0 (HviIsAnyHypervisorPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 1
      && (KeFeatureBits2 & 0x1000000) == 0
      && (HviIsAnyHypervisorPresent() || *(_BYTE *)(a1 + 64) != 25);
}
