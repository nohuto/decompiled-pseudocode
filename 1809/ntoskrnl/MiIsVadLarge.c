/*
 * XREFs of MiIsVadLarge @ 0x140070D90
 * Callers:
 *     MiInPagePageTable @ 0x1400987E0 (MiInPagePageTable.c)
 *     MiReturnPageTablePageCommitment @ 0x1405EC380 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveVadCharges @ 0x1405EC820 (MiRemoveVadCharges.c)
 *     MiCommitPageTablesForVad @ 0x1405ECBB0 (MiCommitPageTablesForVad.c)
 *     MiProcessVaRangesInfoClass @ 0x1406BCC38 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsVadLarge(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x4000) != 0 )
  {
    if ( (v1 & 7) != 5 )
      return 0LL;
  }
  else if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
