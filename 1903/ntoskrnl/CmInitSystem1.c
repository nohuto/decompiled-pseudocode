/*
 * XREFs of CmInitSystem1 @ 0x140A0CCC4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     ExInitializePushLock @ 0x140082020 (ExInitializePushLock.c)
 *     ExInitializeLookasideListExInternal @ 0x1400E5320 (ExInitializeLookasideListExInternal.c)
 *     CmpInitializeLoadOptions @ 0x14018CF44 (CmpInitializeLoadOptions.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpCleanupParseContext @ 0x1405FDF30 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1405FDF90 (ObOpenObjectByName.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpHashUnicodeComponent @ 0x140632D10 (CmpHashUnicodeComponent.c)
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x14066266C (CmpInitializeKcbCache.c)
 *     CmpAddToHiveFileList @ 0x1406EC454 (CmpAddToHiveFileList.c)
 *     CmpInitializeParseContext @ 0x1406F02CC (CmpInitializeParseContext.c)
 *     CmpInitializeNameCache @ 0x14075C184 (CmpInitializeNameCache.c)
 *     CmpInitSIDToHiveMapping @ 0x14075C1E4 (CmpInitSIDToHiveMapping.c)
 *     CmpInitCallbacks @ 0x14075C200 (CmpInitCallbacks.c)
 *     CmpInitializeFreezeThaw @ 0x14075C288 (CmpInitializeFreezeThaw.c)
 *     HvInitializeHashLibrary @ 0x14075C2BC (HvInitializeHashLibrary.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x14075C300 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x14075C31C (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpVolumeManagerInitialize @ 0x14075C340 (CmpVolumeManagerInitialize.c)
 *     CmpInitializeLightWeightTransactionType @ 0x14075C364 (CmpInitializeLightWeightTransactionType.c)
 *     CmpMarkCurrentProfileDirty @ 0x14075C434 (CmpMarkCurrentProfileDirty.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14075EBF8 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeRegistryProcess @ 0x140769834 (CmpInitializeRegistryProcess.c)
 *     CmpInitializeDelayedCloseTable @ 0x14076A194 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitSiloSupport @ 0x14077C180 (CmpInitSiloSupport.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A0ABA0 (CmpInitGlobalQuotaAllowed.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A0AC88 (CmpInitializeTrustedInstallerSid.c)
 *     CmpCreateObjectTypes @ 0x140A0AD0C (CmpCreateObjectTypes.c)
 *     CmpCreateControlSet @ 0x140A0AE00 (CmpCreateControlSet.c)
 *     CmpInitializeDriverStores @ 0x140A0B094 (CmpInitializeDriverStores.c)
 *     CmpCreateExtendedControlSets @ 0x140A0B24C (CmpCreateExtendedControlSets.c)
 *     CmpCreateHardwareProfiles @ 0x140A0B2AC (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x140A0B810 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0B95C (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x140A0CA2C (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140A0CC50 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpInitializePreloadedHives @ 0x140A0D3D4 (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x140A0E368 (CmpCreateRegistryRoot.c)
 *     CmpInitializeTransactions @ 0x140A15264 (CmpInitializeTransactions.c)
 *     CmpInitializeRegistryNames @ 0x140A1AFC0 (CmpInitializeRegistryNames.c)
 *     CmpSetNetworkValue @ 0x140A38FE4 (CmpSetNetworkValue.c)
 *     CmpUpdateStateSeparationHiveOptions @ 0x140A390C8 (CmpUpdateStateSeparationHiveOptions.c)
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
  int v33; // eax
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v37[56]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v38[38]; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter4[44]; // [rsp+210h] [rbp+110h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v38, 0, 0x128uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  memset(v37, 0, 0x30uLL);
  CmpInitializeParseContext(v38);
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
  qword_1409AE898 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownLock = 0LL;
  ExInitializePushLock(&CmpShutdownRundown);
  CmpActiveHiveRundownEvent = 0LL;
  qword_140463BA8 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite((PERESOURCE)&CmpRegistryLock);
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_1409AD6B0 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpWorkerEngineWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpWorkerEngineWorker;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Blink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Flink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  qword_140463C28 = (__int64)&CmpWorkerEngineListHead;
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
  ExInitializeLookasideListExInternal(
    &CmpKcbLookaside,
    CmpAllocateTransientPoolWithTag,
    (__int64 (__fastcall *)())CmSiFreeMemory,
    1,
    0,
    0x138uLL,
    1651199299,
    0,
    0);
  CmpInitSIDToHiveMapping();
  CmpInitializeTrustedInstallerSid();
  CmpInitializeDelayedCloseTable();
  CmpInitCallbacks();
  CmpInitializeFreezeThaw();
  HvInitializeHashLibrary();
  CmpValidateGlobalFlushControlFlags();
  CmpInitializeGlobalKeyLockTracker();
  CmpInitializeTransactions();
  CmpVolumeManagerInitialize();
  v2 = dword_1404252DC;
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
  CmpAttachToRegistryProcess((__int64)v37);
  CmpLockRegistryExclusive();
  CmpInitializePreloadedHives(BugCheckParameter3, 0LL);
  Hive = CmpCreateHive(
           (ULONG_PTR *)&CmpMasterHive,
           0,
           1,
           0,
           0LL,
           0LL,
           0LL,
           0,
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
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
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
  LODWORD(v38[0]) = 65;
  v15 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          0x2001Fu,
          (__int64)v38,
          &KeyHandle);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    CmpCleanupParseContext((__int64)v38, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v16, 0LL);
  }
  CmpCleanupParseContext((__int64)v38, 0);
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
          1,
          0,
          0LL,
          0LL,
          0LL,
          0,
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
          dword_140424E38,
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
  qword_140424E28 = v23;
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
      v33 = CmpSetNetworkValue();
      if ( v33 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v33, 0LL);
    }
  }
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v37);
  return 1;
}
