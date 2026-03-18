/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x1400A4978
 * Callers:
 *     CcPerformReadAhead @ 0x1400A1A38 (CcPerformReadAhead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400A2514 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcFetchDataForRead @ 0x1400D5C90 (CcFetchDataForRead.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPfCompletePrefetchIos @ 0x1400A4774 (MiPfCompletePrefetchIos.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14066E178 (MiReleaseReadListResources.c)
 */

__int64 __fastcall MmWaitForCacheManagerPrefetch(_DWORD *P)
{
  int v1; // ebp
  _QWORD **v2; // r14
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebx

  v1 = P[26];
  v2 = (_QWORD **)P;
  v3 = 0;
  do
  {
    v4 = *v2;
    v5 = MiPfCompletePrefetchIos(v2 + 15, 0LL, 0LL);
    MiReleaseReadListResources(v2);
    ExFreePoolWithTag(v2, 0);
    v2 = (_QWORD **)v4;
    if ( v5 < 0 )
      v3 = v5;
  }
  while ( v4 );
  if ( (v1 & 1) != 0 )
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
