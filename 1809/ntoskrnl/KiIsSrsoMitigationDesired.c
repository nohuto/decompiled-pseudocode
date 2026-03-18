/*
 * XREFs of KiIsSrsoMitigationDesired @ 0x1401B4638
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EDD0 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     KiIsBranchConfusionMitigationDesired @ 0x1401B443C (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1401B4498 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x1401B44C0 (KiIsBranchConfusionPresent.c)
 */

__int64 __fastcall KiIsSrsoMitigationDesired(__int64 a1, _QWORD *a2)
{
  if ( (KiFeatureSettings & 5) != 0 || *(_BYTE *)(a1 + 141) == 1 && (*a2 & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
    return 0LL;
  if ( KiIsBranchConfusionPresent(a1)
    && KiIsBranchConfusionMitigationSupported(a1, a2)
    && (unsigned int)KiIsBranchConfusionMitigationDesired(a1, a2) )
  {
    return 1LL;
  }
  return ((unsigned int)KiFeatureSettings >> 26) & 1;
}
