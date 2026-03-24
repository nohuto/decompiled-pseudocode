/*
 * XREFs of MiChargeSystemImageCommitment @ 0x1406831FC
 * Callers:
 *     MiMapSystemImage @ 0x1406820E4 (MiMapSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140683260 (MiUseLargeDriverPage.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     MiSectionControlArea @ 0x140075E70 (MiSectionControlArea.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rbx
  int v3; // r8d

  v1 = MiSectionControlArea(a1);
  v2 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( v3 != 1 )
  {
    MiReturnCommit((__int64)&MiSystemPartition, *(unsigned int *)(*(_QWORD *)v1 + 8LL));
    if ( v2 )
      MiReturnResidentAvailable(v2);
    return 0LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    return 0LL;
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, (unsigned int)v2, 0) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v2, 0LL) )
      return 0LL;
    MiReturnCommit((__int64)&MiSystemPartition, v2);
  }
  return 3221225626LL;
}
