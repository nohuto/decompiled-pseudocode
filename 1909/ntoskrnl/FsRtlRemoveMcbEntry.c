/*
 * XREFs of FsRtlRemoveMcbEntry @ 0x1402824B0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlRemoveLargeMcbEntry @ 0x140282440 (FsRtlRemoveLargeMcbEntry.c)
 */

void __stdcall FsRtlRemoveMcbEntry(PMCB Mcb, VBN Vbn, ULONG SectorCount)
{
  FsRtlRemoveLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, SectorCount);
}
