/*
 * XREFs of FsRtlInitSystem @ 0x1409D8714
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14015FAA0 (ExInitializeNPagedLookasideListInternal.c)
 *     FsFilterInit @ 0x14018F9E8 (FsFilterInit.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExInitializePagedLookasideList @ 0x14067CE70 (ExInitializePagedLookasideList.c)
 *     FsRtlInitializeTieringHeat @ 0x140759108 (FsRtlInitializeTieringHeat.c)
 *     FsRtlInitializeSmssEvent @ 0x1409D889C (FsRtlInitializeSmssEvent.c)
 *     FsRtlInitializeWorkerThread @ 0x1409D897C (FsRtlInitializeWorkerThread.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1409D8A50 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeFileLocks @ 0x1409D8B60 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x1409D8CF4 (FsRtlInitializeTunnels.c)
 */

char FsRtlInitSystem()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+60h] [rbp+8h]

  FsRtlPagingIoResources = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, 0x680uLL, 0x74725346u);
  v0 = 0LL;
  v1 = 16LL;
  do
  {
    ExInitializeResourceLite((PERESOURCE)(v0 + FsRtlPagingIoResources));
    v0 += 104LL;
    --v1;
  }
  while ( v1 );
  FsRtlInitializeTunnels();
  FsRtlInitializeFileLocks();
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&FsRtlFirstMappingLookasideList,
    0LL,
    0LL,
    0,
    0x78uLL,
    0x6D695346u,
    4u);
  ExInitializeNPagedLookasideListInternal((__int64)&FsRtlFastMutexLookasideList, 0LL, 0LL, 512, 56, 1835422534, 32, 0);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlEcpListLookaside, 0LL, 0LL, 0, 0x18uLL, 0x6C655346u, 0);
  FsRtlpUncSemaphore.Header.Type = 5;
  FsRtlpUncSemaphore.Header.WaitListHead.Blink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.WaitListHead.Flink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.Size = 8;
  ValueName.Buffer = L"Win95TruncatedExtensions";
  FsRtlpUncSemaphore.Header.SignalState = 1;
  FsRtlpUncSemaphore.Limit = 0x7FFFFFFF;
  *(_DWORD *)&ValueName.Length = 3276848;
  if ( (int)FsRtlGetCompatibilityModeValue(&ValueName) >= 0 && v4 )
    FsRtlSafeExtensions = 0;
  if ( (int)FsRtlInitializeWorkerThread() < 0 || (int)FsFilterInit() < 0 || (int)FsRtlInitializeSmssEvent() < 0 )
    return 0;
  FsRtlInitializeTieringHeat();
  return 1;
}
