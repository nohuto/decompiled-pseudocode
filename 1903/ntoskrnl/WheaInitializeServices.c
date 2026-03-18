/*
 * XREFs of WheaInitializeServices @ 0x140A1B200
 * Callers:
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x14077ECBC (WheapInitializeInUsePageOfflineNotifications.c)
 */

PVOID *WheaInitializeServices()
{
  __int64 (**v0)(); // rax
  __int64 v1; // rcx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = (__int64 (**)())&unk_140509690;
  v1 = 17LL;
  do
  {
    *(v0 - 2) = 0LL;
    *v0 = PsGetHostSilo;
    v0[1] = xHalPciEarlyRestore;
    v0[2] = (__int64 (*)())WheapDefaultErrSrcCreateRecord;
    v0[3] = PsGetHostSilo;
    v0[4] = (__int64 (*)())xHalTimerWatchdogStop;
    v0[5] = (__int64 (*)())xHalTimerWatchdogStop;
    v0 += 8;
    --v1;
  }
  while ( v1 );
  WheapConfigTableLock = 0LL;
  qword_140509AC8 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  WheapPfaLock = 0LL;
  _InterlockedOr(v3, 0);
  WheapPfaInitialized = 1;
  *(_QWORD *)&WheapDispatchPtr.Flags = &WheapDispatchPtr.Timer;
  WheapDispatchPtr.Timer = (PIO_TIMER)&WheapDispatchPtr.Timer;
  qword_14042EB38 = (__int64)WheapDeferredRecoveryServiceDpcRoutine;
  WheaDrsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapDeferredRecoveryServiceWorker;
  LODWORD(WheapDispatchPtr.DriverObject) = 1;
  WheapDispatchPtr.NextDevice = 0LL;
  LODWORD(WheapDispatchPtr.AttachedDevice) = 0;
  LOWORD(WheapDispatchPtr.CurrentIrp) = 1;
  BYTE2(WheapDispatchPtr.CurrentIrp) = 6;
  HIDWORD(WheapDispatchPtr.CurrentIrp) = 0;
  WheaPassiveDrsListLock = 0LL;
  LODWORD(WheaDrsDpc) = 275;
  qword_14042EB40 = 0LL;
  qword_14042EB58 = 0LL;
  qword_14042EB30 = 0LL;
  WheaDrsWorkItem.Parameter = 0LL;
  WheaDrsWorkItem.List.Flink = 0LL;
  _InterlockedOr(v3, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
