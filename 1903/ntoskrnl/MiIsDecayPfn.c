/*
 * XREFs of MiIsDecayPfn @ 0x140122744
 * Callers:
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiMirrorGatherBrownPages @ 0x1401600F4 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x14016080C (MiMirrorReduceBlackWrites.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161710 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA970 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_1404664E0 && a1 < qword_1404664E0 + 2048;
}
