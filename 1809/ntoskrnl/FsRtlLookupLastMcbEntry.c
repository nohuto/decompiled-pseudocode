/*
 * XREFs of FsRtlLookupLastMcbEntry @ 0x14026ECF0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlLookupLastLargeMcbEntry @ 0x14026EBE0 (FsRtlLookupLastLargeMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLastMcbEntry(PMCB Mcb, PVBN Vbn, PLBN Lbn)
{
  BOOLEAN result; // al
  LBN v6; // ecx
  LONGLONG Lbna[3]; // [rsp+20h] [rbp-18h] BYREF
  LONGLONG Vbna; // [rsp+58h] [rbp+20h] BYREF

  result = FsRtlLookupLastLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, &Vbna, Lbna);
  if ( result )
  {
    *Vbn = Vbna;
    v6 = Lbna[0];
    if ( LODWORD(Lbna[0]) == -1 )
      v6 = 0;
    *Lbn = v6;
  }
  return result;
}
