/*
 * XREFs of MiIsVadLarge @ 0x1400577A0
 * Callers:
 *     MiVadCommitCrossPartition @ 0x140057778 (MiVadCommitCrossPartition.c)
 *     MiInPagePageTable @ 0x14005D7D0 (MiInPagePageTable.c)
 *     MiRemoveVadCharges @ 0x140607890 (MiRemoveVadCharges.c)
 *     MiProcessVaRangesInfoClass @ 0x1406E18AC (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsVadLarge(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x100000) != 0 )
  {
    if ( (v1 & 0x400000) == 0 && (v1 & 0xC0000u) < 0x80000 )
      return 0LL;
  }
  else if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
