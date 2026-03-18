/*
 * XREFs of FsRtlAddMcbEntry @ 0x14026E740
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAddLargeMcbEntry @ 0x140110360 (FsRtlAddLargeMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlAddMcbEntry(PMCB Mcb, VBN Vbn, LBN Lbn, ULONG SectorCount)
{
  return FsRtlAddLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, Lbn, SectorCount);
}
