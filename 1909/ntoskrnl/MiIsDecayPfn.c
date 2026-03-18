/*
 * XREFs of MiIsDecayPfn @ 0x140123854
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161160 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorGatherBrownPages @ 0x140169CC8 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x14016A3E0 (MiMirrorReduceBlackWrites.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_1404661E0 && a1 < qword_1404661E0 + 2048;
}
