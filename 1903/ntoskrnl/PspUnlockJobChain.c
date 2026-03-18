/*
 * XREFs of PspUnlockJobChain @ 0x1406137C0
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspGetMemoryPartitionImplicit @ 0x140615C88 (PspGetMemoryPartitionImplicit.c)
 *     PspImplicitAssignProcessToJob @ 0x140694880 (PspImplicitAssignProcessToJob.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1406960B4 (PspUnlockJobsAndProcessExclusive.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 */

void __fastcall PspUnlockJobChain(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v7; // rdi

  v3 = *(_QWORD *)(a1 + 1104);
  if ( v3 > 1 )
  {
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1080) + 56LL));
    v3 = *(_QWORD *)(a1 + 1104);
  }
  if ( v3 > 2 )
  {
    v7 = v3 - 2;
    do
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1112) + 8 * v7-- - 8) + 56LL));
    while ( v7 );
    v3 = *(_QWORD *)(a1 + 1104);
  }
  if ( v3 )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1072) + 56LL));
  if ( (a3 & 1) == 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    if ( a2 )
      KiLeaveGuardedRegionUnsafe(a2);
  }
}
