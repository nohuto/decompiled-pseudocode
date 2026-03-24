/*
 * XREFs of MmReserveViewInSystemCache @ 0x14075019C
 * Callers:
 *     CcInitializePartitionVacbs @ 0x14018AEAC (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x14026A500 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x1400AD220 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax

  v3 = MiObtainSystemCacheView(*a1, a2, a3);
  if ( v3 )
    return (__int64)((_QWORD)v3 << 25) >> 16;
  ++dword_14043B7A0;
  return 0LL;
}
