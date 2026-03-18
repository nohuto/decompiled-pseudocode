/*
 * XREFs of FsRtlNumberOfRunsInMcb @ 0x1402826C0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNumberOfRunsInLargeMcb @ 0x140282680 (FsRtlNumberOfRunsInLargeMcb.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInMcb(PMCB Mcb)
{
  return FsRtlNumberOfRunsInLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly);
}
