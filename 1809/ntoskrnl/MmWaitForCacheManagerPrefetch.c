/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x1400DED78
 * Callers:
 *     CcFetchDataForRead @ 0x1400AF650 (CcFetchDataForRead.c)
 *     CcPerformReadAhead @ 0x1400DE044 (CcPerformReadAhead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400E045C (MmWaitMultipleForCacheManagerPrefetch.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x14001A020 (MiPfCompletePrefetchIos.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x140663A90 (MiReleaseReadListResources.c)
 */

__int64 __fastcall MmWaitForCacheManagerPrefetch(_DWORD *P)
{
  int v1; // ebp
  _QWORD **v2; // r14
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebx

  v1 = P[20];
  v2 = (_QWORD **)P;
  v3 = 0;
  do
  {
    v4 = *v2;
    v5 = MiPfCompletePrefetchIos(v2 + 12, 0LL, 0LL);
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
