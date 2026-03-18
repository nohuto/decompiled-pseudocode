/*
 * XREFs of FsRtlUninitializeMcb @ 0x14084EA80
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeLargeMcb @ 0x140137EF0 (FsRtlUninitializeLargeMcb.c)
 */

void __stdcall FsRtlUninitializeMcb(PMCB Mcb)
{
  FsRtlUninitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly);
}
