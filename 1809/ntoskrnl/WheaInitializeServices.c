/*
 * XREFs of WheaInitializeServices @ 0x1409D9438
 * Callers:
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x14075AE68 (WheapInitializeInUsePageOfflineNotifications.c)
 */

PVOID *WheaInitializeServices()
{
  __int64 (**v0)(); // rax
  __int64 v1; // rcx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = (__int64 (**)())&unk_1404DD170;
  v1 = 14LL;
  do
  {
    *(v0 - 2) = 0LL;
    *v0 = PsGetHostSilo;
    v0[1] = xHalPciEarlyRestore;
    v0[2] = (__int64 (*)())WheapDefaultErrSrcCreateRecord;
    v0[3] = PsGetHostSilo;
    v0 += 6;
    --v1;
  }
  while ( v1 );
  WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink = 0LL;
  qword_1404DD418 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  WheapPfaLock = 0LL;
  _InterlockedOr(v3, 0);
  WheapPfaInitialized = 1;
  *(_QWORD *)&WheapDispatchPtr.DeviceType = &WheapDispatchPtr.DeviceExtension;
  WheapDispatchPtr.DeviceExtension = &WheapDispatchPtr.DeviceExtension;
  WheapDispatchPtr.Dpc.SystemArgument2 = WheapDeferredRecoveryServiceDpcRoutine;
  WheapDispatchPtr.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)WheapDeferredRecoveryServiceWorker;
  LODWORD(WheapDispatchPtr.CurrentIrp) = 1;
  WheapDispatchPtr.Timer = 0LL;
  WheapDispatchPtr.Flags = 0;
  LOWORD(WheapDispatchPtr.Vpb) = 1;
  BYTE2(WheapDispatchPtr.Vpb) = 6;
  HIDWORD(WheapDispatchPtr.Vpb) = 0;
  WheapDispatchPtr.DeviceQueue.DeviceListHead.Blink = 0LL;
  LODWORD(WheapDispatchPtr.Dpc.DeferredRoutine) = 275;
  WheapDispatchPtr.Dpc.DpcData = 0LL;
  *(_QWORD *)&WheapDispatchPtr.DeviceLock.Header.Lock = 0LL;
  WheapDispatchPtr.Dpc.SystemArgument1 = 0LL;
  WheapDispatchPtr.Dpc.ProcessorHistory = 0LL;
  WheapDispatchPtr.DeviceQueue.1 = 0LL;
  _InterlockedOr(v3, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
