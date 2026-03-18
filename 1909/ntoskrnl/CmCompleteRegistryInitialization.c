/*
 * XREFs of CmCompleteRegistryInitialization @ 0x140759428
 * Callers:
 *     NtInitializeRegistry @ 0x1407482C0 (NtInitializeRegistry.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KeInitializeVelocity @ 0x1405B0A28 (KeInitializeVelocity.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1FCC (PpmParkInitSoftCoreParkingSupport.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     RtlLockBootStatusData @ 0x14073B060 (RtlLockBootStatusData.c)
 *     PnpBootPhaseComplete @ 0x140755964 (PnpBootPhaseComplete.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407586EC (CmpInitializeSystemHivesLoad.c)
 *     CmpCmdInit @ 0x140758A30 (CmpCmdInit.c)
 *     CmpCreateRegistryThread @ 0x1407593C0 (CmpCreateRegistryThread.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407595AC (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x140759648 (ExNotifyPlatformBinaryExecuted.c)
 *     PoEnableCriticalShutdown @ 0x1407596CC (PoEnableCriticalShutdown.c)
 *     PoClearTransitionMarker @ 0x140759704 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x140759AFC (PoInitHiberServices.c)
 *     PsBootPhaseComplete @ 0x1407639C8 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x140763F98 (ExpRefreshSystemTime.c)
 *     EtwInitialize @ 0x14076DFD8 (EtwInitialize.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  char v3; // di
  __int64 v4; // rdx
  int RegistryThread; // eax
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
    CmpCmdInit(a1 == 1);
    CmpUnlockRegistry();
    if ( a1 != 1 )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || (v3 = 0, CmpForceSynchronousMachineHiveLoad) )
        v3 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      RegistryThread = CmpCreateRegistryThread(
                         (__int64)&Handle,
                         v4,
                         (__int64)CmpFinishSystemHivesLoad,
                         (unsigned __int64)&Event & -(__int64)(v3 != 0));
      if ( RegistryThread < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, RegistryThread);
      if ( v3 )
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
    PoInitHiberServices();
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
