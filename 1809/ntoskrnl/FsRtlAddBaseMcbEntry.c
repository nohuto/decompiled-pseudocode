/*
 * XREFs of FsRtlAddBaseMcbEntry @ 0x140110960
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAddBaseMcbEntryEx @ 0x140110980 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  return FsRtlAddBaseMcbEntryEx(Mcb, Vbn, Lbn, SectorCount) >= 0;
}
