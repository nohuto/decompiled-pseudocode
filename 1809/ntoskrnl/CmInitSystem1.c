/*
 * XREFs of CmInitSystem1 @ 0x1409C3050
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x14008A400 (ExInitializePushLock.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x1400CC4F0 (ExInitializeResourceLite.c)
 *     CmpInitializeLoadOptions @ 0x140180DA8 (CmpInitializeLoadOptions.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B2F3C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F7C (CmpInitializeThreadInfo.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8530 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     CmpCreateHive @ 0x1405A6574 (CmpCreateHive.c)
 *     CmpHashUnicodeComponent @ 0x1405AF2C4 (CmpHashUnicodeComponent.c)
 *     CmpLockRegistryExclusive @ 0x1405B16C8 (CmpLockRegistryExclusive.c)
 *     CmpCleanupParseContext @ 0x1405B5FC4 (CmpCleanupParseContext.c)
 *     CmpLinkHiveToMaster @ 0x1405B8C48 (CmpLinkHiveToMaster.c)
 *     ObOpenObjectByName @ 0x1405B9290 (ObOpenObjectByName.c)
 *     CmpInitializeKcbCache @ 0x1405B9308 (CmpInitializeKcbCache.c)
 *     CmpDetachFromRegistryProcess @ 0x1405D1AE8 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405D4048 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140645150 (CmpUnlockRegistry.c)
 *     CmpAddToHiveFileList @ 0x1406CCF80 (CmpAddToHiveFileList.c)
 *     CmpInitializeParseContext @ 0x1406D0C4C (CmpInitializeParseContext.c)
 *     HvInitializeHashLibrary @ 0x14073054C (HvInitializeHashLibrary.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x140730590 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x1407305AC (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpVolumeManagerInitialize @ 0x1407305D8 (CmpVolumeManagerInitialize.c)
 *     CmpInitializeLightWeightTransactionType @ 0x140730604 (CmpInitializeLightWeightTransactionType.c)
 *     CmpInitSiloSupport @ 0x1407306D4 (CmpInitSiloSupport.c)
 *     CmpMarkCurrentProfileDirty @ 0x140730D84 (CmpMarkCurrentProfileDirty.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140733580 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407358C0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpInitializeNameCache @ 0x14074DE0C (CmpInitializeNameCache.c)
 *     CmpInitializeRegistryProcess @ 0x1407572CC (CmpInitializeRegistryProcess.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14076219C (CmpInitDelayDerefKCBEngine.c)
 *     CmpInitCallbacks @ 0x140762E54 (CmpInitCallbacks.c)
 *     CmpInitializeDelayedCloseTable @ 0x140763940 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitializeFreezeThaw @ 0x140763BC8 (CmpInitializeFreezeThaw.c)
 *     CmpInitSIDToHiveMapping @ 0x140764214 (CmpInitSIDToHiveMapping.c)
 *     CmpCreateControlSet @ 0x1409C12B4 (CmpCreateControlSet.c)
 *     CmpInitializeDriverStores @ 0x1409C1534 (CmpInitializeDriverStores.c)
 *     CmpCreateExtendedControlSets @ 0x1409C16CC (CmpCreateExtendedControlSets.c)
 *     CmpCreateHardwareProfiles @ 0x1409C172C (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x1409C1C54 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1409C1D98 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x1409C2DC0 (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x1409C2FE4 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpInitializePreloadedHives @ 0x1409C3A28 (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x1409C3FAC (CmpCreateRegistryRoot.c)
 *     CmpInitializeRegistryNames @ 0x1409D7DE0 (CmpInitializeRegistryNames.c)
 *     CmpInitializeTransactions @ 0x1409DB9A8 (CmpInitializeTransactions.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1409DD530 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitGlobalQuotaAllowed @ 0x1409DDC98 (CmpInitGlobalQuotaAllowed.c)
 *     CmpCreateObjectTypes @ 0x1409DDE78 (CmpCreateObjectTypes.c)
 *     CmpSetNetworkValue @ 0x1409F3B90 (CmpSetNetworkValue.c)
 *     CmpUpdateStateSeparationHiveOptions @ 0x1409F3C84 (CmpUpdateStateSeparationHiveOptions.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  int *v2; // rdi
  __int64 v3; // rsi
  int ObjectTypes; // eax
  int v5; // eax
  int v6; // eax
  int Hive; // eax
  int v8; // eax
  int inited; // eax
  ACL *v10; // rdi
  NTSTATUS v11; // eax
  ULONG_PTR v12; // rsi
  NTSTATUS v13; // eax
  ULONG_PTR v14; // rsi
  int v15; // eax
  ULONG_PTR v16; // rsi
  NTSTATUS v17; // eax
  ULONG_PTR v18; // rsi
  int v19; // eax
  int ControlSet; // eax
  int v21; // eax
  ULONG_PTR v22; // rsi
  __int64 v23; // rsi
  int v24; // eax
  NTSTATUS v25; // eax
  int v26; // eax
  int ExtendedControlSets; // eax
  __int64 v28; // rcx
  NTSTATUS v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v37[2]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v38[56]; // [rsp+C0h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter4[44]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v40[38]; // [rsp+258h] [rbp+150h] BYREF

  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  CmpInitializeThreadInfo(v37);
  CmpInitializeParseContext(v40);
  CmIoFileObjectType = (__int64)&IoFileObjectType;
  if ( InitIsWinPEMode )
  {
    CmpMiniNTBoot = InitIsWinPEMode;
    CmpShareSystemHives = 1;
    CmpForceSynchronousMachineHiveLoad = 1;
  }
  if ( CmpVolatileBoot )
    CmpShareSystemHives = 1;
  CmpInitializeRegistryNames();
  CmpInitGlobalQuotaAllowed();
  CmpHiveListHeadLock = 0LL;
  qword_14096E7D0 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownLock = 0LL;
  ExInitializePushLock(&CmpShutdownRundown);
  CmpActiveHiveRundownEvent = 0LL;
  qword_1404380D8 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite((PERESOURCE)&CmpRegistryLock);
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_14096D620 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpWorkerEngineWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpWorkerEngineWorker;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Blink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Flink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  qword_140438168 = (__int64)&CmpWorkerEngineListHead;
  CmpWorkerEngineListHead = &CmpWorkerEngineListHead;
  CmpPostLock.Owner = 0LL;
  CmpPostLock.Contention = 0;
  LOWORD(CmpPostLock.Event.Header.Lock) = 1;
  CmpPostLock.Event.Header.Size = 6;
  CmpPostLock.Event.Header.SignalState = 0;
  CmpWorkerEngineWorkItem.Parameter = 0LL;
  CmpWorkerEngineWorkItem.List.Flink = 0LL;
  CmpWorkerEngineLock.Count = 1;
  CmpWorkerEngineLock.Owner = 0LL;
  CmpWorkerEngineLock.Contention = 0;
  LOWORD(CmpWorkerEngineLock.Event.Header.Lock) = 1;
  CmpWorkerEngineLock.Event.Header.Size = 6;
  CmpWorkerEngineLock.Event.Header.SignalState = 0;
  CmpWorkerEngineFinishedEvent = 0LL;
  CmpInitializeNameCache();
  if ( !CmpAllocInited )
  {
    CmpAllocBucketLock.Count = 1;
    qword_140438028 = (__int64)&CmpFreeKCBListHead;
    CmpFreeKCBListHead = (__int64)&CmpFreeKCBListHead;
    CmpAllocBucketLock.Event.Header.WaitListHead.Blink = &CmpAllocBucketLock.Event.Header.WaitListHead;
    CmpAllocBucketLock.Event.Header.WaitListHead.Flink = &CmpAllocBucketLock.Event.Header.WaitListHead;
    CmpAllocBucketLock.Owner = 0LL;
    CmpAllocBucketLock.Contention = 0;
    LOWORD(CmpAllocBucketLock.Event.Header.Lock) = 1;
    CmpAllocBucketLock.Event.Header.Size = 6;
    CmpAllocBucketLock.Event.Header.SignalState = 0;
    CmpAllocInited = 1;
  }
  CmpInitSIDToHiveMapping();
  CmpAdminSystemFileSecurityDescriptor = CmpAdminSystemSecurityDescriptor();
  CmpInitializeTrustedInstallerSid();
  CmpInitializeDelayedCloseTable();
  CmpInitDelayDerefKCBEngine();
  CmpInitCallbacks();
  CmpInitializeFreezeThaw();
  HvInitializeHashLibrary();
  CmpValidateGlobalFlushControlFlags();
  CmpInitializeGlobalKeyLockTracker();
  CmpInitializeTransactions();
  CmpVolumeManagerInitialize();
  v2 = dword_1403FF2DC;
  v3 = 8LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v2 - 3));
    *v2 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
    v2 += 6;
    --v3;
  }
  while ( v3 );
  ObjectTypes = CmpCreateObjectTypes();
  if ( ObjectTypes < 0 )
    KeBugCheckEx(0x67u, 1uLL, 1uLL, ObjectTypes, 0LL);
  v5 = CmpInitializeLightWeightTransactionType();
  if ( v5 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, v5, 0LL);
  v6 = CmpInitializeRegistryProcess();
  if ( v6 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x19uLL, v6, 0LL);
  CmpAttachToRegistryProcess((__int64)v38);
  CmpLockRegistryExclusive();
  CmpInitializePreloadedHives(BugCheckParameter3, 0LL);
  Hive = CmpCreateHive(
           (ULONG_PTR *)&CmpMasterHive,
           0,
           1u,
           0,
           0LL,
           0LL,
           0LL,
           0x20000,
           0LL,
           0LL,
           0LL,
           (__int64)BugCheckParameter4);
  if ( Hive < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, Hive, (ULONG_PTR)BugCheckParameter4);
  v8 = CmpInitializeKcbCache((__int64)CmpMasterHive, 0x80u);
  if ( v8 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v8, 0LL);
  if ( !(unsigned __int8)CmpCreateRegistryRoot() )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  inited = CmpInitSiloSupport(0LL);
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v10 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v10;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v11 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v12, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v10;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v13 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v14, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v10;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  LODWORD(v40[0]) = 65;
  v15 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          131103,
          (__int64)v40,
          (__int64)&KeyHandle);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    CmpCleanupParseContext((__int64)v40, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v16, 0LL);
  }
  CmpCleanupParseContext((__int64)v40, 0);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v10;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v17 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v18 = v17;
  if ( v17 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v18, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v19 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v19 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v19, 0LL);
  ControlSet = CmpCreateControlSet((__int64)L"SYSTEM", 0);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  if ( CmStateSeparationEnabled )
    CmpUpdateStateSeparationHiveOptions();
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v21 = CmpCreateHive(
          (ULONG_PTR *)&DestinationString.Length,
          0,
          1u,
          0,
          0LL,
          0LL,
          0LL,
          0x20000,
          0LL,
          0LL,
          0LL,
          (__int64)BugCheckParameter4);
  v22 = v21;
  if ( v21 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v22, (ULONG_PTR)BugCheckParameter4);
  }
  v23 = *(_QWORD *)&DestinationString.Length;
  v24 = CmpLinkHiveToMaster(
          (__int64)&CmRegistryMachineHardwareName,
          0LL,
          *(__int64 *)&DestinationString.Length,
          1,
          dword_1403FEE38,
          0,
          0LL,
          (__int64)v10,
          0LL,
          0LL,
          1);
  if ( v24 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v24, 0LL);
  CmpAddToHiveFileList(v23);
  ExFreePoolWithTag(v10, 0);
  qword_1403FEE28 = v23;
  v25 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v25 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v25, 0LL);
  v26 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v26 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v26, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v28);
  v29 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v29 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v29, 0LL);
  v30 = CmpSetSystemValues(BugCheckParameter3);
  if ( v30 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v30, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v31 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v31 >= 0x58u )
  {
    if ( *(_QWORD *)(v31 + 80) )
    {
      v32 = CmpSetNetworkValue();
      if ( v32 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v32, 0LL);
    }
  }
  CmpDetachFromRegistryProcess((__int64)v38);
  CmCleanupThreadInfo(v37);
  return 1;
}
