/*
 * XREFs of FsRtlTruncateMcb @ 0x1402829A0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlTruncateLargeMcb @ 0x14010BC80 (FsRtlTruncateLargeMcb.c)
 */

void __stdcall FsRtlTruncateMcb(PMCB Mcb, VBN Vbn)
{
  FsRtlTruncateLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn);
}
