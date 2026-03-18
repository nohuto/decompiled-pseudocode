/*
 * XREFs of IoDiskIoAttributionDereference @ 0x1400E73A8
 * Callers:
 *     IoNotifyQuotaState @ 0x140001910 (IoNotifyQuotaState.c)
 *     CcUninitializeCacheMap @ 0x14000E330 (CcUninitializeCacheMap.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 *     CcCompleteAsyncRead @ 0x1400808AC (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x1400A1A38 (CcPerformReadAhead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1400A957C (MiCheckAndUpdateIoAttribution.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1400ADA4C (IoSetDiskIoAttributionOnProcess.c)
 *     CcCopyReadEx @ 0x1400D5990 (CcCopyReadEx.c)
 *     IoGetIoRateControl @ 0x1400E7010 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400E71BC (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x1400E7230 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     MmUpdateSectionIoAttribution @ 0x1400E9798 (MmUpdateSectionIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x1405B32E4 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405B33F0 (PspIoRateEntryDeactivate.c)
 *     MiSegmentDelete @ 0x1406885A8 (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x140697828 (PspRemoveIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
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
