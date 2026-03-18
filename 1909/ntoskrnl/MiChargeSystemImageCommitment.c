/*
 * XREFs of MiChargeSystemImageCommitment @ 0x140712814
 * Callers:
 *     MiMapSystemImage @ 0x140711384 (MiMapSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
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
