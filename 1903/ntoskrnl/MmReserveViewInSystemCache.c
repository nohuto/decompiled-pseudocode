/*
 * XREFs of MmReserveViewInSystemCache @ 0x14076E920
 * Callers:
 *     CcInitializePartitionVacbs @ 0x140190C48 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x14027DF80 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x140076500 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  _QWORD *v1; // rax

  v1 = MiObtainSystemCacheView(*a1);
  if ( v1 )
    return (__int64)((_QWORD)v1 << 25) >> 16;
  ++dword_1404672A0;
  return 0LL;
}
