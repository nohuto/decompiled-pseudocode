/*
 * XREFs of CcInitializeCacheManager @ 0x140A03BC8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1401753A0 (ExInitializeNPagedLookasideListInternal.c)
 *     CcCreatePartition @ 0x1401902E0 (CcCreatePartition.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1405A0548 (ExInitializeSystemLookasideList.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1406F02AC (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 *     FsRtlIsMobileOS @ 0x140759880 (FsRtlIsMobileOS.c)
 *     CcInitializeProcessor @ 0x14075A2E8 (CcInitializeProcessor.c)
 *     PoRegisterCoalescingCallback @ 0x14076A750 (PoRegisterCoalescingCallback.c)
 *     CcInitializeBcbProfiler @ 0x1409D0324 (CcInitializeBcbProfiler.c)
 */

char CcInitializeCacheManager()
{
  int v0; // edi
  PVOID PoolWithTag; // rax
  _DWORD *Partition; // rax
  _DWORD *v3; // rsi
  PVOID v4; // rax
  unsigned int v10; // ebx
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  unsigned __int64 v12; // rdx
  int v13; // ecx

  v0 = (unsigned __int8)dword_1405711AC;
  CcMasterLock = 0LL;
  CcChangeSharedCacheMapFileLock = 0LL;
  CcMaxNestingLevel = 2;
  CcMaxAsyncReadWorkerThreads = 100;
  if ( (_BYTE)dword_1405711AC )
  {
    CcMaxNumberCompleteAsyncReadExWorkItems = 500;
  }
  else
  {
    CcMaxAsyncReadWorkerThreads = 50;
    if ( FsRtlIsMobileOS() )
      CcMaxAsyncReadWorkerThreads = 10;
    CcMaxNumberCompleteAsyncReadExWorkItems = 50;
    if ( FsRtlIsMobileOS() )
      CcMaxNumberCompleteAsyncReadExWorkItems = 9;
  }
  CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources = 0;
  CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2800uLL, 0x61566343u);
  CcVacbArrays = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x34u, 0x9045FuLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  memset(PoolWithTag, 0, 0x2800uLL);
  qword_140463D58 = (__int64)&CcVacbFreeList;
  CcVacbFreeList = (__int64)&CcVacbFreeList;
  CcMinimumFreeHighPriorityVacbs = 128;
  CcGlobalPartitionLock = 0LL;
  Partition = CcCreatePartition();
  v3 = Partition;
  if ( !Partition )
    KeBugCheckEx(0x34u, 0x40162uLL, 0LL, 0LL, 0LL);
  *((_QWORD *)PspSystemPartition + 1) = Partition;
  CcSystemPartitionDirtyPageStatistics = (__int64)(Partition + 150);
  CcSystemPartitionDirtyPageThresholds = (__int64)(Partition + 156);
  CcPartitionCount = 1;
  _mm_lfence();
  CcInitializeBcbProfiler();
  v4 = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  if ( v4 )
  {
    ExFreeHeapPool((ULONG_PTR)v4);
    ExGenRandom(0);
    _RAX = 2147483656LL;
    __asm { cpuid }
  }
  CcBcbTrimNotificationListLock.Count = 1;
  CcBcbTrimNotificationListLock.Owner = 0LL;
  CcBcbTrimNotificationListLock.Contention = 0;
  LOWORD(CcBcbTrimNotificationListLock.Event.Header.Lock) = 1;
  CcIdleDelayTick = 0x989680 / KeMaximumIncrement;
  qword_140463DA8 = (__int64)&CcVolumeCacheMapList;
  CcVolumeCacheMapList = (__int64)&CcVolumeCacheMapList;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Blink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Flink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  qword_140463E08 = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationList = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationListLock.Event.Header.Size = 6;
  CcBcbTrimNotificationListLock.Event.Header.SignalState = 0;
  if ( !v3[50] )
  {
    CcAggressiveZeroThreshold = 4;
    CcMaxLazyWritePages = v0 != 0 ? 0x2000 : 256;
    CcExtraWBThreadDelay = v0 != 0 ? 5000000 : 10000000;
  }
  if ( (unsigned int)(CcMaxLazyWritePagesOverride - 1) <= 0x7FFF )
    CcMaxLazyWritePages = CcMaxLazyWritePagesOverride;
  CcAggressiveZeroCount = 0;
  qword_140463E30 = (__int64)&qword_140463E28;
  qword_140463E28 = (__int64)&qword_140463E28;
  CcCoalescingFlushEvent = 1;
  byte_140463E22 = 6;
  dword_140463E24 = 0;
  ExInitializeSystemLookasideList(
    (__int64)&CcTwilightLookasideList,
    512,
    136,
    1800889155,
    v0 != 0 ? 256 : 128,
    (__int64)&ExSystemLookasideListHead);
  CcMaxWorklessLazywriteScans = 1;
  v10 = 0;
  for ( CcMaxZeroTransferSize = v0 != 0 ? 0x2000000 : 0x100000; v10 < (unsigned int)KeNumberProcessors_0; ++v10 )
  {
    if ( (int)CcInitializeProcessor(KiProcessorBlock[v10]) < 0 )
      KeBugCheckEx(0x34u, 0x1F1uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  CcDbgNumberOfFailedWorkQueueEntryAllocations = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&CcBitmapLookasideList, 0LL, 0LL, 512, 1024, 1833067331, 0, 0);
  CcDbgNumberOfFailedBitmapAllocations = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&CcVacbLevelLookasideList, 0LL, 0LL, 512, 1032, 1817600835, 0, 0);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&CcVacbLevelWithBcbListHeadsLookasideList,
    0LL,
    0LL,
    512,
    2056,
    1817600835,
    0,
    0);
  CcExternalCacheListLock = 0LL;
  qword_140463E58 = (__int64)&CcExternalCacheList;
  CcExternalCacheList = (__int64)&CcExternalCacheList;
  if ( CcRemoteFileDPInlineFlushThreshold != -1 )
  {
    if ( (unsigned int)CcRemoteFileDPInlineFlushThreshold < 0x8000
      || (NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject((unsigned __int16 **)PspSystemPartition),
          v12 > NumberOfPhysicalPagesForPartitionObject) )
    {
      CcRemoteFileDPInlineFlushThreshold = 1310720;
    }
  }
  v13 = CcUnmapBehindLength;
  if ( (unsigned int)(CcUnmapBehindLength - 1) > 0x7F )
    v13 = 8;
  CcUnmapBehindLength = v13 << 20;
  CcTestControlData = 0LL;
  qword_140463D28 = 0LL;
  qword_140463D30 = 0LL;
  if ( (int)PoRegisterCoalescingCallback(
              (unsigned __int64)CcCoalescingCallBack,
              1,
              (struct _EX_RUNDOWN_REF **)&CcCoalescingRegistration,
              0LL) < 0 )
    KeBugCheckEx(0x34u, 0x264uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcInitializationComplete = 1;
  return 1;
}
