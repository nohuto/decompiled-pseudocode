/*
 * XREFs of KiIsKvaShadowNeededForBranchConfusion @ 0x1401B4664
 * Callers:
 *     KiDetectKvaLeakage @ 0x1405720E4 (KiDetectKvaLeakage.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D8C4 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1401B459C (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1401B45F8 (KiIsBranchConfusionMitigationSupported.c)
 */

_BOOL8 __fastcall KiIsKvaShadowNeededForBranchConfusion(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  KiDetectHardwareSpecControlFeatures(a1, 0, (__int64)v4, 0LL);
  return (v4[0] & 0x8000) != 0
      && (unsigned int)KiIsBranchConfusionMitigationDesired(a1, v4)
      && KiIsBranchConfusionMitigationSupported(v2, v4);
}
