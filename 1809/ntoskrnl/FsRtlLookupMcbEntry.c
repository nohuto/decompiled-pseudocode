/*
 * XREFs of FsRtlLookupMcbEntry @ 0x14026ED40
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlLookupLargeMcbEntry @ 0x14026EB30 (FsRtlLookupLargeMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupMcbEntry(PMCB Mcb, VBN Vbn, PLBN Lbn, PULONG SectorCount, PULONG Index)
{
  BOOLEAN result; // al
  LBN v8; // ecx
  LONGLONG v9[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  result = FsRtlLookupLargeMcbEntry(
             &Mcb->DummyFieldThatSizesThisStructureCorrectly,
             Vbn,
             v9,
             (PLONGLONG)((unsigned __int64)&v10 & -(__int64)(SectorCount != 0LL)),
             0LL,
             0LL,
             Index);
  if ( result )
  {
    v8 = v9[0];
    if ( LODWORD(v9[0]) == -1 )
      v8 = 0;
    *Lbn = v8;
    if ( SectorCount )
      *SectorCount = v10;
  }
  return result;
}
