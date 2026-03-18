/*
 * XREFs of KiIsBranchConfusionMitigationDesired @ 0x1401B443C
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EDD0 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1401B4504 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsSrsoMitigationDesired @ 0x1401B4638 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsBranchConfusionMitigationDesired(__int64 a1, _QWORD *a2)
{
  if ( (KiFeatureSettings & 5) != 0 || *(_BYTE *)(a1 + 141) == 1 && (*a2 & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
    return 0LL;
  else
    return HIBYTE(KiFeatureSettings) & 1;
}
