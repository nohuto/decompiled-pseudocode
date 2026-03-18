/*
 * XREFs of MiIsDecayPfn @ 0x140118BEC
 * Callers:
 *     MiReplaceTransitionPage @ 0x14011844C (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140151F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorGatherBrownPages @ 0x140152540 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x140152DC0 (MiMirrorReduceBlackWrites.c)
 *     MiSwapNumaStandbyPage @ 0x1402C0F10 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(unsigned __int64 a1)
{
  return a1 >= qword_14043AA60 && a1 < qword_14043AA60 + 2048;
}
