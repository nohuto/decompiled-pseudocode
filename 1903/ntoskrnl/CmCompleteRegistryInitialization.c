/*
 * XREFs of CmCompleteRegistryInitialization @ 0x140769A5C
 * Callers:
 *     NtInitializeRegistry @ 0x1407463C0 (NtInitializeRegistry.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeInitializeVelocity @ 0x1405B0A28 (KeInitializeVelocity.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1C60 (PpmParkInitSoftCoreParkingSupport.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     RtlLockBootStatusData @ 0x140738E00 (RtlLockBootStatusData.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 *     PnpBootPhaseComplete @ 0x140754ED4 (PnpBootPhaseComplete.c)
 *     PsBootPhaseComplete @ 0x14075F0A4 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x14075F674 (ExpRefreshSystemTime.c)
 *     IopCopyBootLogRegistryToFile @ 0x140769BE0 (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x140769C7C (ExNotifyPlatformBinaryExecuted.c)
 *     PoEnableCriticalShutdown @ 0x140769D00 (PoEnableCriticalShutdown.c)
 *     PoClearTransitionMarker @ 0x140769D38 (PoClearTransitionMarker.c)
 *     CmpCreateRegistryThread @ 0x14076A12C (CmpCreateRegistryThread.c)
 *     CmpCmdInit @ 0x14076A1F8 (CmpCmdInit.c)
 *     CmpInitializeSystemHivesLoad @ 0x14076AB90 (CmpInitializeSystemHivesLoad.c)
 *     EtwInitialize @ 0x14076B184 (EtwInitialize.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  char v4; // di
  __int64 v5; // rdx
  int v6; // eax
  char v7; // cl
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  if ( _InterlockedExchange(&CmFirstTime, 0) )
  {
    EtwInitialize(2LL);
    CmCompleteInitMachineConfig(&IopAutoReboot);
    CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive();
    LOBYTE(v3) = a1 == 1;
    CmpCmdInit(v3);
    CmpUnlockRegistry();
    if ( a1 != 1 )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || (v4 = 0, CmpForceSynchronousMachineHiveLoad) )
        v4 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v6 = CmpCreateRegistryThread(
             &Handle,
             v5,
             CmpFinishSystemHivesLoad,
             (unsigned __int64)&Event & -(__int64)(v4 != 0));
      if ( v6 < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, v6);
      if ( v4 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ZwClose(Handle);
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
    }
    KeInitializeVelocity();
    RtlLockBootStatusData(0LL);
    PnpBootPhaseComplete();
    PoInitHiberServices(v7);
    PoClearTransitionMarker();
    PoEnableCriticalShutdown();
    PpmParkInitSoftCoreParkingSupport();
    NlsLocaleSectionPointer = (PVOID)1;
    ExNotifyPlatformBinaryExecuted();
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
