/*
 * XREFs of MiIsDecayPfn @ 0x140118C0C
 * Callers:
 *     MiReplaceTransitionPage @ 0x14011846C (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140151F20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorGatherBrownPages @ 0x140152560 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x140152DE0 (MiMirrorReduceBlackWrites.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1010 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(unsigned __int64 a1)
{
  return a1 >= qword_14043AA60 && a1 < qword_14043AA60 + 2048;
}
