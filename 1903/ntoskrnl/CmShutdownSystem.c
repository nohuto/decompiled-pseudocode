/*
 * XREFs of CmShutdownSystem @ 0x1408273C4
 * Callers:
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     CmpUnJoinClassOfTrust @ 0x14008BF44 (CmpUnJoinClassOfTrust.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     ExRundownCompleted @ 0x1400E59B0 (ExRundownCompleted.c)
 *     ExBlockOnAddressPushLock @ 0x14010B950 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     TlgAggregateFlush @ 0x14034D1EC (TlgAggregateFlush.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     HvHiveCleanup @ 0x14062E130 (HvHiveCleanup.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpCmdHiveClose @ 0x14063E098 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14063E1EC (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14063E34C (CmpVolumeContextDecrementRefCount.c)
 *     CmpGetNextActiveHive @ 0x140661E60 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140661F00 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140662090 (LOCK_HIVE_LOAD.c)
 *     UnlockShutdown @ 0x140662174 (UnlockShutdown.c)
 *     CmpDoFileSetSizeEx @ 0x140662D3C (CmpDoFileSetSizeEx.c)
 *     CmShutdownCmRM @ 0x14069B8F8 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x14069BC0C (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14069BC30 (CmCloseRmHandle.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1406E703C (CmpFlushUnsupportedOperationTelemetry.c)
 *     HvMarkBaseBlockDirty @ 0x1406EAC04 (HvMarkBaseBlockDirty.c)
 *     CmpTraceShutdownRundownComplete @ 0x140826F30 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x140826F9C (CmpTraceShutdownStart.c)
 *     CmpFreeAllMemory @ 0x140827840 (CmpFreeAllMemory.c)
 *     CmpRecordShutdownStopTime @ 0x140827B30 (CmpRecordShutdownStopTime.c)
 *     LockShutdownExclusive @ 0x140832AA4 (LockShutdownExclusive.c)
 */

BOOLEAN __fastcall CmShutdownSystem(int a1)
{
  BOOLEAN result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  void *v6; // rdi
  char v7; // dl
  void *v8; // rsi
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  struct _KTIMER *v11; // rdi
  __int64 v12; // rsi
  __int64 *j; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // eax
  struct _EX_RUNDOWN_REF *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  unsigned int v22; // ecx
  REGHANDLE v23; // rbx
  struct _EX_RUNDOWN_REF *k; // rcx
  __int64 *v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rbx
  REGHANDLE v27; // rbx
  struct _EX_RUNDOWN_REF *m; // rcx
  __int64 *v29; // rax
  struct _EX_RUNDOWN_REF *v30; // rbx
  struct _EX_RUNDOWN_REF *n; // rcx
  unsigned int v32; // edi
  struct _PRIVILEGE_SET *v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rbx
  __int64 **v36; // rax
  int v37; // ebx
  struct _PRIVILEGE_SET *v38; // rcx
  REGHANDLE v39; // rbx
  __int64 v40; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR v42; // [rsp+50h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR v43; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v44[48]; // [rsp+70h] [rbp+1Fh] BYREF

  result = (unsigned __int8)memset(v44, 0, sizeof(v44));
  if ( a1 )
  {
    CmpTraceShutdownStart();
    if ( CmpRegistryRootObject )
      ObfDereferenceObject(CmpRegistryRootObject);
    CmpRecordShutdownStopTime();
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    ExRundownCompleted((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    CmpTraceShutdownRundownComplete();
    CmpFlushUnsupportedOperationTelemetry();
    TlgAggregateFlush(v4, v3);
    LockShutdownExclusive();
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    LODWORD(v40) = CmpActiveHiveRundownCount;
    if ( CmpActiveHiveRundownCount > 0 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      do
      {
        ExBlockOnAddressPushLock((__int64)&CmpActiveHiveRundownEvent, &CmpActiveHiveRundownCount, &v40, 4uLL, 0LL);
        LODWORD(v40) = CmpActiveHiveRundownCount;
      }
      while ( CmpActiveHiveRundownCount > 0 );
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    for ( i = 0LL; ; i = v10 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v10 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      v6 = (void *)CmCloseRmHandle(NextActiveHive[524], 1);
      v8 = (void *)CmCloseTmHandle(v10[524].Count, v7);
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      if ( v6 )
      {
        ZwClose(v6);
        ZwClose(v8);
      }
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    if ( !(_BYTE)CmFirstTime )
    {
      v11 = &CmpLazyWriterData;
      v12 = 3LL;
      do
      {
        KeCancelTimer(v11);
        v11 += 3;
        --v12;
      }
      while ( v12 );
    }
    for ( j = CmpGetNextActiveHive(0LL); ; j = CmpGetNextActiveHive(v18) )
    {
      v18 = (struct _EX_RUNDOWN_REF *)j;
      if ( !j )
        break;
      v14 = j[524];
      if ( v14 )
      {
        v15 = j[8];
        v16 = *(_DWORD *)(v15 + 144);
        if ( *(_QWORD *)(v14 + 16) == v14 + 16 )
          v17 = v16 & 0xFFFFFFFE;
        else
          v17 = v16 | 1;
        *(_DWORD *)(v15 + 144) = v17;
        HvMarkBaseBlockDirty((__int64)v18);
      }
    }
    v19 = qword_140424FF0;
    if ( CmRmSystem )
    {
      v20 = *(_QWORD *)(qword_140424FF0 + 64);
      v21 = *(_DWORD *)(v20 + 144);
      if ( *((PVOID *)CmRmSystem + 2) == (char *)CmRmSystem + 16 )
        v22 = v21 & 0xFFFFFFFE;
      else
        v22 = v21 | 1;
      *(_DWORD *)(v20 + 144) = v22;
      HvMarkBaseBlockDirty(v19);
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    CmpAttachToRegistryProcess((__int64)v44);
    v23 = EtwpRegTraceHandle;
    EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_START;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
      EtwWrite(v23, &EventDescriptor, 0LL, 0, 0LL);
    for ( k = 0LL; ; k = v26 )
    {
      v25 = CmpGetNextActiveHive(k);
      v26 = (struct _EX_RUNDOWN_REF *)v25;
      if ( !v25 )
        break;
      if ( !BYTE1(NlsMbCodePageTag) && (v25[20] & 2) == 0 )
        *((_BYTE *)v25 + 4824) = (int)CmpFlushHive((ULONG_PTR)v25, 0xCu) >= 0;
    }
    v27 = EtwpRegTraceHandle;
    v42 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v42) )
      EtwWrite(v27, &v42, 0LL, 0, 0LL);
    CmpDetachFromRegistryProcess((struct _KTHREAD *)v44);
    LockShutdownExclusive();
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    for ( m = 0LL; ; m = v30 )
    {
      v29 = CmpGetNextActiveHive(m);
      v30 = (struct _EX_RUNDOWN_REF *)v29;
      if ( !v29 )
        break;
      CmShutdownCmRM(v29[524], 0LL);
    }
    for ( n = 0LL; ; n = (struct _EX_RUNDOWN_REF *)v35 )
    {
      v34 = CmpGetNextActiveHive(n);
      v35 = (__int64)v34;
      if ( !v34 )
        break;
      CmpUnJoinClassOfTrust((__int64)v34);
      CmpVERemoveHiveFromSIDMappingTable(v35);
      v32 = *(_DWORD *)(v35 + 272) + 4096;
      CmpAttachToRegistryProcess((__int64)v44);
      HvHiveCleanup(v35);
      CmpDetachFromRegistryProcess((struct _KTHREAD *)v44);
      if ( *(_BYTE *)(v35 + 4824)
        && (*(_DWORD *)(v35 + 160) & 0x8000) == 0
        && (__int64)(*(_QWORD *)(v35 + 1792) - v32) > 0x100000 )
      {
        CmpDoFileSetSizeEx(v35, 0, v32, 0);
      }
      CmpCmdHiveClose(v35);
      v33 = *(struct _PRIVILEGE_SET **)(v35 + 4832);
      if ( v33 )
        CmpVolumeContextDecrementRefCount(v33);
    }
    HvShutdownComplete = 1;
    if ( (PopShutdownCleanly & 8) != 0 && !(_BYTE)CmFirstTime )
      CmpFreeAllMemory();
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    v36 = &CmpWellKnownVolumeList;
    v37 = 0;
    if ( CmpWellKnownVolumeList )
    {
      do
      {
        v38 = (struct _PRIVILEGE_SET *)v36[1];
        if ( v38 )
          CmpVolumeContextDecrementRefCount(v38);
        v36 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v37];
      }
      while ( *v36 );
    }
    v39 = EtwpRegTraceHandle;
    v43 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_STOP;
    result = EtwEventEnabled(EtwpRegTraceHandle, &v43);
    if ( result )
      return EtwWrite(v39, &v43, 0LL, 0, 0LL);
  }
  else
  {
    CmpDoIdleProcessing = 0;
    CmpNoMoreTx = 1;
  }
  return result;
}
