/*
 * XREFs of MiIsDecayPfn @ 0x140118C7C
 * Callers:
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140152020 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorGatherBrownPages @ 0x140152660 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x140152EE0 (MiMirrorReduceBlackWrites.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(unsigned __int64 a1)
{
  return a1 >= qword_14043BB20 && a1 < qword_14043BB20 + 2048;
}
