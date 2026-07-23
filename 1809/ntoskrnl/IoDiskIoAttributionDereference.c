/*
 * XREFs of IoDiskIoAttributionDereference @ 0x1401058D4
 * Callers:
 *     IoNotifyQuotaState @ 0x1400019F0 (IoNotifyQuotaState.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140090364 (IoSetDiskIoAttributionOnProcess.c)
 *     CcCopyReadEx @ 0x1400AF370 (CcCopyReadEx.c)
 *     CcPerformReadAhead @ 0x1400DE044 (CcPerformReadAhead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1400DF174 (MiCheckAndUpdateIoAttribution.c)
 *     CcCompleteAsyncRead @ 0x1400DF3B4 (CcCompleteAsyncRead.c)
 *     MmUpdateSectionIoAttribution @ 0x140105298 (MmUpdateSectionIoAttribution.c)
 *     IoGetIoRateControl @ 0x140105530 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1401056B4 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x140105730 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     PspIoRateEntryActivate @ 0x140586150 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x140586238 (PspIoRateEntryDeactivate.c)
 *     MiSegmentDelete @ 0x14061F928 (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x14068DFB8 (PspRemoveIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall IoDiskIoAttributionDereference(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *(_QWORD *)(a1 + 176);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
