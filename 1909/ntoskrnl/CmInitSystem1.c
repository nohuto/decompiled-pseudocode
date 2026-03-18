/*
 * XREFs of CmInitSystem1 @ 0x140A0D1F0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     ExInitializePushLock @ 0x140082420 (ExInitializePushLock.c)
 *     KeInitializeGuardedMutex @ 0x1400EEA20 (KeInitializeGuardedMutex.c)
 *     CmpInitializeLoadOptions @ 0x14018D7C4 (CmpInitializeLoadOptions.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1405FF9C0 (ObOpenObjectByName.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpAddToHiveFileList @ 0x14068C204 (CmpAddToHiveFileList.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x14068CBC4 (CmpInitializeKcbCache.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpHashUnicodeComponent @ 0x1406C533C (CmpHashUnicodeComponent.c)
 *     CmpInitializeParseContext @ 0x1406F1D6C (CmpInitializeParseContext.c)
 *     CmpInitializeRegistryProcess @ 0x1407584C4 (CmpInitializeRegistryProcess.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407589CC (CmpInitializeDelayedCloseTable.c)
 *     CmpInitializeNameCache @ 0x140760904 (CmpInitializeNameCache.c)
 *     CmpInitSIDToHiveMapping @ 0x140760964 (CmpInitSIDToHiveMapping.c)
 *     CmpInitCallbacks @ 0x140760980 (CmpInitCallbacks.c)
 *     CmpInitializeFreezeThaw @ 0x140760A08 (CmpInitializeFreezeThaw.c)
 *     HvInitializeHashLibrary @ 0x140760A3C (HvInitializeHashLibrary.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x140760A80 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x140760A9C (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpVolumeManagerInitialize @ 0x140760AC0 (CmpVolumeManagerInitialize.c)
 *     CmpInitializeLightWeightTransactionType @ 0x140760AE4 (CmpInitializeLightWeightTransactionType.c)
 *     CmpMarkCurrentProfileDirty @ 0x140760BB4 (CmpMarkCurrentProfileDirty.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14076351C (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407656C8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpInitSiloSupport @ 0x14077EA50 (CmpInitSiloSupport.c)
 *     CmpInitializeTransactions @ 0x1409FBA10 (CmpInitializeTransactions.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A0B0CC (CmpInitGlobalQuotaAllowed.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A0B1B4 (CmpInitializeTrustedInstallerSid.c)
 *     CmpCreateObjectTypes @ 0x140A0B238 (CmpCreateObjectTypes.c)
 *     CmpCreateControlSet @ 0x140A0B32C (CmpCreateControlSet.c)
 *     CmpInitializeDriverStores @ 0x140A0B5C0 (CmpInitializeDriverStores.c)
 *     CmpCreateExtendedControlSets @ 0x140A0B778 (CmpCreateExtendedControlSets.c)
 *     CmpCreateHardwareProfiles @ 0x140A0B7D8 (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x140A0BD3C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0BE88 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x140A0CF58 (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140A0D17C (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpInitializePreloadedHives @ 0x140A0DB54 (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x140A0EAE8 (CmpCreateRegistryRoot.c)
 *     CmpInitializeRegistryNames @ 0x140A1B238 (CmpInitializeRegistryNames.c)
 *     CmpSetNetworkValue @ 0x140A38D64 (CmpSetNetworkValue.c)
 *     CmpUpdateStateSeparationHiveOptions @ 0x140A38E48 (CmpUpdateStateSeparationHiveOptions.c)
 *     CmpInitCmPrivateAlloc @ 0x140A38EA8 (CmpInitCmPrivateAlloc.c)
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
  __int64 HostSilo; // rax
  int inited; // eax
  ACL *v11; // rdi
  NTSTATUS v12; // eax
  ULONG_PTR v13; // rsi
  NTSTATUS v14; // eax
  ULONG_PTR v15; // rsi
  int v16; // eax
  ULONG_PTR v17; // rsi
  NTSTATUS v18; // eax
  ULONG_PTR v19; // rsi
  int v20; // eax
  int ControlSet; // eax
  int v22; // eax
  ULONG_PTR v23; // rsi
  __int64 v24; // rsi
  int v25; // eax
  NTSTATUS v26; // eax
  int v27; // eax
  int ExtendedControlSets; // eax
  __int64 v29; // rcx
  NTSTATUS v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v38[56]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v39[38]; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter4[44]; // [rsp+210h] [rbp+110h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v39, 0, 0x128uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  memset(v38, 0, 0x30uLL);
  CmpInitializeParseContext(v39);
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
  qword_140463888 = (__int64)&CmpAppHiveLoadList;
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
  CmpPostLock.Owner = 0LL;
  CmpPostLock.Contention = 0;
  LOWORD(CmpPostLock.Event.Header.Lock) = 1;
  CmpPostLock.Event.Header.Size = 6;
  CmpPostLock.Event.Header.SignalState = 0;
  CmpWorkerEngineWorkItem.Parameter = 0LL;
  CmpWorkerEngineWorkItem.List.Flink = 0LL;
  KeInitializeGuardedMutex(&CmpWorkerEngineLock);
  CmpWorkerEngineFinishedEvent = 0LL;
  qword_140463908 = (__int64)&CmpWorkerEngineListHead;
  CmpWorkerEngineListHead = &CmpWorkerEngineListHead;
  CmpInitializeNameCache();
  CmpInitCmPrivateAlloc();
  CmpInitSIDToHiveMapping();
  CmpAdminSystemFileSecurityDescriptor = CmpAdminSystemSecurityDescriptor();
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
  HostSilo = PsGetHostSilo();
  inited = CmpInitSiloSupport(HostSilo);
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v11 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v11;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v12 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v13, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v11;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v14 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v15, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v11;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  LODWORD(v39[0]) = 65;
  v16 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          0x2001Fu,
          (__int64)v39,
          &KeyHandle);
  v17 = v16;
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    CmpCleanupParseContext((__int64)v39, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v17, 0LL);
  }
  CmpCleanupParseContext((__int64)v39, 0);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v11;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v18 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v19 = v18;
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v19, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v20 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v20 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v20, 0LL);
  ControlSet = CmpCreateControlSet((__int64)L"SYSTEM", 0);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  if ( CmStateSeparationEnabled )
    CmpUpdateStateSeparationHiveOptions();
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v22 = CmpCreateHive(
          (ULONG_PTR *)&DestinationString.Length,
          0,
          1u,
          0,
          0LL,
          0LL,
          0LL,
          0,
          0LL,
          0LL,
          0LL,
          (__int64)BugCheckParameter4);
  v23 = v22;
  if ( v22 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v23, (ULONG_PTR)BugCheckParameter4);
  }
  v24 = *(_QWORD *)&DestinationString.Length;
  v25 = CmpLinkHiveToMaster(
          (__int64)&CmRegistryMachineHardwareName,
          0LL,
          *(__int64 *)&DestinationString.Length,
          1,
          dword_140424E38,
          0,
          0LL,
          (__int64)v11,
          0LL,
          0LL,
          1);
  if ( v25 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v25, 0LL);
  CmpAddToHiveFileList(v24);
  ExFreePoolWithTag(v11, 0);
  qword_140424E28 = v24;
  v26 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v26 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v26, 0LL);
  v27 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v27 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v27, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v29);
  v30 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v30 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v30, 0LL);
  v31 = CmpSetSystemValues(BugCheckParameter3);
  if ( v31 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v31, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v32 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v32 >= 0x58u )
  {
    if ( *(_QWORD *)(v32 + 80) )
    {
      v33 = CmpSetNetworkValue();
      if ( v33 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v33, 0LL);
    }
  }
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v38);
  return 1;
}
