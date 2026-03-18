/*
 * XREFs of MiChargeSystemImageCommitment @ 0x140710A34
 * Callers:
 *     MiMapSystemImage @ 0x14070F5A4 (MiMapSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
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
