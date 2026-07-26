/*
 * XREFs of ?ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C002E208
 * Callers:
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C002E1A4 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisAllocateIterativeDataPathTracker(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *PoolWithTag; // rax

  PoolWithTag = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)ExAllocatePoolWithTag(
                                                             NonPagedPoolNxCacheAligned,
                                                             96LL * ndisMaxNumberOfProcessors,
                                                             0x2020444Eu);
  a1->IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY (*)[4])PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 96LL * ndisMaxNumberOfProcessors);
  return 0LL;
}
