/*
 * XREFs of CmCompleteRegistryInitialization @ 0x1407455D4
 * Callers:
 *     NtInitializeRegistry @ 0x14071DCF0 (NtInitializeRegistry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     CmpLockRegistryExclusive @ 0x1405B16C8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140645170 (CmpUnlockRegistry.c)
 *     PopExecutePowerAction @ 0x1406DE110 (PopExecutePowerAction.c)
 *     RtlLockBootStatusData @ 0x140718CA0 (RtlLockBootStatusData.c)
 *     PopQueueBatteryStatusTimeout @ 0x14071F04C (PopQueueBatteryStatusTimeout.c)
 *     PsBootPhaseComplete @ 0x140733A4C (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1407341C0 (ExpRefreshSystemTime.c)
 *     PnpBootPhaseComplete @ 0x14073A3F0 (PnpBootPhaseComplete.c)
 *     EtwInitialize @ 0x140743300 (EtwInitialize.c)
 *     PoClearTransitionMarker @ 0x140744FE0 (PoClearTransitionMarker.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745728 (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1407457A0 (ExNotifyPlatformBinaryExecuted.c)
 *     PoInitHiberServices @ 0x140745CB0 (PoInitHiberServices.c)
 *     CmpCmdInit @ 0x140747E28 (CmpCmdInit.c)
 *     CmpInitializeSystemHivesLoad @ 0x140756844 (CmpInitializeSystemHivesLoad.c)
 *     CmpCreateRegistryThread @ 0x1407F6590 (CmpCreateRegistryThread.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  char v4; // di
  __int64 v5; // rdx
  int v6; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+38h] [rbp-38h]
  _QWORD v13[3]; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+28h] BYREF

  v1 = 0;
  Handle = 0LL;
  if ( _InterlockedExchange(&CmFirstTime, 0) )
  {
    EtwInitialize(2u);
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
      Handle = 0LL;
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete(v9, v8, v10);
    }
    RtlLockBootStatusData(0LL);
    PnpBootPhaseComplete();
    PoInitHiberServices();
    PoClearTransitionMarker();
    PopAcquirePolicyLock();
    PopThermalCriticalShutdownEnabled = 1;
    if ( PopThermalCriticalShutdownInitiated )
    {
      v12 = 0;
      v11 = 0xC000000400000006uLL;
      v13[1] = 0LL;
      v13[2] = 0LL;
      v13[0] = 0x8000000001LL;
      PopCriticalShutdownInProgress = 1;
      PopExecutePowerAction((__int64)v13, 0, &v11, 5, 1u);
    }
    PopReleasePolicyLock();
    PopQueueBatteryStatusTimeout();
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
