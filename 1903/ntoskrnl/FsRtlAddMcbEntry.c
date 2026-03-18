/*
 * XREFs of FsRtlAddMcbEntry @ 0x1402822F0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAddLargeMcbEntry @ 0x14010BC10 (FsRtlAddLargeMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlAddMcbEntry(PMCB Mcb, VBN Vbn, LBN Lbn, ULONG SectorCount)
{
  return FsRtlAddLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, Lbn, SectorCount);
}
