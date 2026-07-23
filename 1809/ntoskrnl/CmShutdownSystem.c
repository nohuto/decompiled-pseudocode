/*
 * XREFs of CmShutdownSystem @ 0x1407EDAB4
 * Callers:
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008F7F0 (ExRundownCompleted.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     ExBlockOnAddressPushLock @ 0x140111A80 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B336C (CmpUnJoinClassOfTrust.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     TlgAggregateFlush @ 0x14032BBF4 (TlgAggregateFlush.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140581888 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpCmdHiveClose @ 0x1405B0A08 (CmpCmdHiveClose.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1405B0C04 (CmpVolumeContextDecrementRefCount.c)
 *     CmpGetNextActiveHive @ 0x1405B2474 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B2514 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1405B2690 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     HvHiveCleanup @ 0x1405FC440 (HvHiveCleanup.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpRunDownCmRM @ 0x140694174 (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x14069437C (CmpStopRMLog.c)
 *     CmCloseTmHandle @ 0x140694440 (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x140694464 (CmCloseRmHandle.c)
 *     CmpDoFileSetSizeEx @ 0x1406B9BE0 (CmpDoFileSetSizeEx.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1406C89AC (CmpFlushUnsupportedOperationTelemetry.c)
 *     HvMarkBaseBlockDirty @ 0x1406CC1D4 (HvMarkBaseBlockDirty.c)
 *     CmpTraceShutdownRundownComplete @ 0x1407ED624 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x1407ED690 (CmpTraceShutdownStart.c)
 *     CmpFreeAllMemory @ 0x1407EDFC0 (CmpFreeAllMemory.c)
 *     CmpRecordShutdownStopTime @ 0x1407EE298 (CmpRecordShutdownStopTime.c)
 */

PVOID CmShutdownSystem()
{
  int v0; // r9d
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *i; // rcx
  void *v5; // rdi
  char v6; // dl
  void *v7; // rsi
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  struct _KTIMER *v10; // rdi
  __int64 v11; // rsi
  __int64 *j; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // eax
  struct _EX_RUNDOWN_REF *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // ecx
  REGHANDLE v22; // rbx
  struct _EX_RUNDOWN_REF *k; // rcx
  __int64 *v24; // rax
  struct _EX_RUNDOWN_REF *v25; // rbx
  REGHANDLE v26; // rbx
  struct _KTHREAD *v27; // rax
  struct _EX_RUNDOWN_REF *m; // rcx
  __int64 v29; // rbx
  __int64 *v30; // rax
  struct _EX_RUNDOWN_REF *v31; // rdi
  struct _EX_RUNDOWN_REF *n; // rcx
  unsigned int v33; // edi
  struct _PRIVILEGE_SET *v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rbx
  __int64 **v37; // rax
  int v38; // ebx
  struct _PRIVILEGE_SET *v39; // rcx
  REGHANDLE v40; // rbx
  __int64 v42; // [rsp+38h] [rbp-39h] BYREF
  PVOID v43[2]; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR v45; // [rsp+60h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR v46; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v47[48]; // [rsp+80h] [rbp+Fh] BYREF

  CmpInitializeThreadInfo(v43);
  if ( v0 )
  {
    CmpTraceShutdownStart();
    if ( CmpRegistryRootObject )
      ObfDereferenceObject(CmpRegistryRootObject);
    CmpRecordShutdownStopTime();
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    ExRundownCompleted((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    CmpTraceShutdownRundownComplete();
    CmpFlushUnsupportedOperationTelemetry();
    TlgAggregateFlush(v2, v1);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    LODWORD(v42) = CmpActiveHiveRundownCount;
    if ( CmpActiveHiveRundownCount > 0 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      do
      {
        ExBlockOnAddressPushLock((__int64)&CmpActiveHiveRundownEvent, &CmpActiveHiveRundownCount, &v42, 4uLL, 0LL);
        LODWORD(v42) = CmpActiveHiveRundownCount;
      }
      while ( CmpActiveHiveRundownCount > 0 );
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    for ( i = 0LL; ; i = v9 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v9 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      v5 = (void *)CmCloseRmHandle(NextActiveHive[524], 1);
      v7 = (void *)CmCloseTmHandle(v9[524].Count, v6);
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      if ( v5 )
      {
        ZwClose(v5);
        ZwClose(v7);
      }
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    if ( !(_BYTE)CmFirstTime )
    {
      v10 = &CmpLazyWriterData;
      v11 = 3LL;
      do
      {
        KeCancelTimer(v10);
        v10 += 3;
        --v11;
      }
      while ( v11 );
    }
    for ( j = CmpGetNextActiveHive(0LL); ; j = CmpGetNextActiveHive(v17) )
    {
      v17 = (struct _EX_RUNDOWN_REF *)j;
      if ( !j )
        break;
      v13 = j[524];
      if ( v13 )
      {
        v14 = j[8];
        v15 = *(_DWORD *)(v14 + 144);
        if ( *(_QWORD *)(v13 + 16) == v13 + 16 )
          v16 = v15 & 0xFFFFFFFE;
        else
          v16 = v15 | 1;
        *(_DWORD *)(v14 + 144) = v16;
        HvMarkBaseBlockDirty((__int64)v17);
      }
    }
    v18 = qword_1403FFFF0;
    if ( CmRmSystem )
    {
      v19 = *(_QWORD *)(qword_1403FFFF0 + 64);
      v20 = *(_DWORD *)(v19 + 144);
      if ( *((PVOID *)CmRmSystem + 2) == (char *)CmRmSystem + 16 )
        v21 = v20 & 0xFFFFFFFE;
      else
        v21 = v20 | 1;
      *(_DWORD *)(v19 + 144) = v21;
      HvMarkBaseBlockDirty(v18);
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    CmpAttachToRegistryProcess((__int64)v47);
    v22 = EtwpRegTraceHandle;
    EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_START;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
      EtwWrite(v22, &EventDescriptor, 0LL, 0, 0LL);
    for ( k = 0LL; ; k = v25 )
    {
      v24 = CmpGetNextActiveHive(k);
      v25 = (struct _EX_RUNDOWN_REF *)v24;
      if ( !v24 )
        break;
      if ( !CmpNoWrite && (v24[20] & 2) == 0 )
        *((_BYTE *)v24 + 4840) = (int)CmpFlushHive((ULONG_PTR)v24, 0xCu) >= 0;
    }
    v26 = EtwpRegTraceHandle;
    v45 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v45) )
      EtwWrite(v26, &v45, 0LL, 0, 0LL);
    KiUnstackDetachProcess((__int64)v47, 0LL);
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    for ( m = 0LL; ; m = v31 )
    {
      v30 = CmpGetNextActiveHive(m);
      v31 = (struct _EX_RUNDOWN_REF *)v30;
      if ( !v30 )
        break;
      v29 = v30[524];
      if ( v29 )
      {
        if ( *(_DWORD *)(v29 + 64) )
        {
          _InterlockedAdd((volatile signed __int32 *)(v29 + 64), 0xFFFFFFFF);
          if ( !*(_DWORD *)(v29 + 64) )
            CmpStopRMLog(v29);
        }
      }
      CmpRunDownCmRM((__int64 *)v29, 0);
    }
    for ( n = 0LL; ; n = (struct _EX_RUNDOWN_REF *)v36 )
    {
      v35 = CmpGetNextActiveHive(n);
      v36 = (__int64)v35;
      if ( !v35 )
        break;
      CmpUnJoinClassOfTrust((__int64)v35);
      CmpVERemoveHiveFromSIDMappingTable(v36);
      v33 = *(_DWORD *)(v36 + 272) + 4096;
      CmpAttachToRegistryProcess((__int64)v47);
      HvHiveCleanup(v36);
      KiUnstackDetachProcess((__int64)v47, 0LL);
      if ( *(_BYTE *)(v36 + 4840)
        && (*(_DWORD *)(v36 + 160) & 0x8000) == 0
        && (__int64)(*(_QWORD *)(v36 + 1792) - v33) > 0x100000 )
      {
        CmpDoFileSetSizeEx(v36, 0, v33, 0);
      }
      CmpCmdHiveClose(v36);
      v34 = *(struct _PRIVILEGE_SET **)(v36 + 4848);
      if ( v34 )
        CmpVolumeContextDecrementRefCount(v34);
    }
    HvShutdownComplete = 1;
    if ( (PopShutdownCleanly & 8) != 0 && !(_BYTE)CmFirstTime )
      CmpFreeAllMemory();
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v37 = &CmpWellKnownVolumeList;
    v38 = 0;
    if ( CmpWellKnownVolumeList )
    {
      do
      {
        v39 = (struct _PRIVILEGE_SET *)v37[1];
        if ( v39 )
          CmpVolumeContextDecrementRefCount(v39);
        v37 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v38];
      }
      while ( *v37 );
    }
    v40 = EtwpRegTraceHandle;
    v46 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v46) )
      EtwWrite(v40, &v46, 0LL, 0, 0LL);
  }
  else
  {
    CmpDoIdleProcessing = 0;
    CmpNoMoreTx = 1;
  }
  return CmCleanupThreadInfo(v43);
}
