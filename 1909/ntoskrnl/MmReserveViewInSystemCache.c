/*
 * XREFs of MmReserveViewInSystemCache @ 0x140771780
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1401912B8 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x14027DCE0 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x140076770 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  _QWORD *v1; // rax

  v1 = MiObtainSystemCacheView(*a1);
  if ( v1 )
    return (__int64)((_QWORD)v1 << 25) >> 16;
  ++dword_140466FA0;
  return 0LL;
}
