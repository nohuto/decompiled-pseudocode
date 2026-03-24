/*
 * XREFs of WheaInitializeServices @ 0x1409D8438
 * Callers:
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x140759C78 (WheapInitializeInUsePageOfflineNotifications.c)
 */

PVOID *WheaInitializeServices()
{
  __int64 (**v0)(); // rax
  __int64 v1; // rcx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = (__int64 (**)())&unk_1404DC0B0;
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
  WheapDispatchPtr.Dpc.DpcData = 0LL;
  qword_1404DC358 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  WheapPfaLock = 0LL;
  _InterlockedOr(v3, 0);
  WheapPfaInitialized = 1;
  *(_QWORD *)&WheapDispatchPtr.DeviceType = &WheapDispatchPtr.DeviceExtension;
  WheapDispatchPtr.DeviceExtension = &WheapDispatchPtr.DeviceExtension;
  WheapDispatchPtr.Dpc.ProcessorHistory = (KAFFINITY)WheapDeferredRecoveryServiceDpcRoutine;
  WheapDispatchPtr.DeviceQueue.DeviceListHead.Blink = (struct _LIST_ENTRY *)WheapDeferredRecoveryServiceWorker;
  LODWORD(WheapDispatchPtr.CurrentIrp) = 1;
  WheapDispatchPtr.Timer = 0LL;
  WheapDispatchPtr.Flags = 0;
  LOWORD(WheapDispatchPtr.Vpb) = 1;
  BYTE2(WheapDispatchPtr.Vpb) = 6;
  HIDWORD(WheapDispatchPtr.Vpb) = 0;
  *(_QWORD *)&WheapDispatchPtr.AlignmentRequirement = 0LL;
  *(_DWORD *)&WheapDispatchPtr.DeviceQueue.Busy = 275;
  WheapDispatchPtr.Dpc.DeferredRoutine = 0LL;
  WheapDispatchPtr.Dpc.SystemArgument2 = 0LL;
  WheapDispatchPtr.Dpc.DpcListEntry.Next = 0LL;
  WheapDispatchPtr.DeviceQueue.Lock = 0LL;
  *(_QWORD *)&WheapDispatchPtr.DeviceQueue.Type = 0LL;
  _InterlockedOr(v3, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
