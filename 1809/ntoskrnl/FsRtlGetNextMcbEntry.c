/*
 * XREFs of FsRtlGetNextMcbEntry @ 0x14026EAC0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlGetNextLargeMcbEntry @ 0x14026EA50 (FsRtlGetNextLargeMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlGetNextMcbEntry(PMCB Mcb, ULONG RunIndex, PVBN Vbn, PLBN Lbn, PULONG SectorCount)
{
  BOOLEAN NextLargeMcbEntry; // dl
  LBN v8; // ecx
  ULONG v9; // eax
  LONGLONG v11; // [rsp+30h] [rbp-28h] BYREF
  LONGLONG v12; // [rsp+38h] [rbp-20h] BYREF
  LONGLONG v13[3]; // [rsp+40h] [rbp-18h] BYREF

  NextLargeMcbEntry = FsRtlGetNextLargeMcbEntry(
                        &Mcb->DummyFieldThatSizesThisStructureCorrectly,
                        RunIndex,
                        &v11,
                        &v12,
                        v13);
  if ( NextLargeMcbEntry )
  {
    *Vbn = v11;
    v8 = v12;
    if ( (_DWORD)v12 == -1 )
      v8 = 0;
    v9 = v13[0];
    *Lbn = v8;
    *SectorCount = v9;
  }
  return NextLargeMcbEntry;
}
