/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x1400921A8
 * Callers:
 *     CcPerformReadAhead @ 0x140091060 (CcPerformReadAhead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x140091918 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcFetchDataForRead @ 0x1400B5B10 (CcFetchDataForRead.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPfCompletePrefetchIos @ 0x1400954A4 (MiPfCompletePrefetchIos.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x140647BD8 (MiReleaseReadListResources.c)
 */

__int64 __fastcall MmWaitForCacheManagerPrefetch(_DWORD *P)
{
  int v1; // ebp
  _QWORD *v2; // r14
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebx

  v1 = P[26];
  v2 = P;
  v3 = 0;
  do
  {
    v4 = (_QWORD *)*v2;
    v5 = MiPfCompletePrefetchIos(v2 + 15, 0LL, 0LL);
    MiReleaseReadListResources(v2);
    ExFreePoolWithTag(v2, 0);
    v2 = v4;
    if ( v5 < 0 )
      v3 = v5;
  }
  while ( v4 );
  if ( (v1 & 1) != 0 )
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
