/*
 * XREFs of IoDiskIoAttributionDereference @ 0x1400EC348
 * Callers:
 *     IoNotifyQuotaState @ 0x140001910 (IoNotifyQuotaState.c)
 *     CcUninitializeCacheMap @ 0x14000E560 (CcUninitializeCacheMap.c)
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 *     CcCompleteAsyncRead @ 0x140080CAC (CcCompleteAsyncRead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140090884 (MiCheckAndUpdateIoAttribution.c)
 *     CcPerformReadAhead @ 0x140091060 (CcPerformReadAhead.c)
 *     CcCopyReadEx @ 0x1400B5810 (CcCopyReadEx.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1400C84AC (IoSetDiskIoAttributionOnProcess.c)
 *     IoGetIoRateControl @ 0x1400EBFB0 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400EC15C (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x1400EC1D0 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1400EC348 (IoDiskIoAttributionDereference.c)
 *     MmUpdateSectionIoAttribution @ 0x14012E714 (MmUpdateSectionIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x1405B36C0 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405B37CC (PspIoRateEntryDeactivate.c)
 *     MiSegmentDelete @ 0x14064E778 (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x14068AD98 (PspRemoveIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400EC348 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
