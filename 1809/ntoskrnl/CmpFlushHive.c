/*
 * XREFs of CmpFlushHive @ 0x1405B3F54
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x140157B08 (CmpDoFlushAll.c)
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmpDoReconcileNextHive @ 0x1405B1F90 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x1405B2330 (CmpDoFlushNextHive.c)
 *     CmpInitHiveFromFile @ 0x1405B4D68 (CmpInitHiveFromFile.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     CmpTransMgrPrepare @ 0x1406FE07C (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1406FE3B4 (CmpTransMgrSyncHive.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x1407F033C (CmReplaceKey.c)
 *     CmFreezeRegistry @ 0x1407F6A24 (CmFreezeRegistry.c)
 * Callees:
 *     HvUnCOWReconciledPages @ 0x14000EEC0 (HvUnCOWReconciledPages.c)
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x14000FA94 (RtlMergeBitMaps.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     CmpArmLazyWriter @ 0x14008CC94 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpGenerateFlushControlData @ 0x1405A6D78 (CmpGenerateFlushControlData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1405A705C (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1405A72AC (HvpLogTypeToLogArrayIndex.c)
 *     HvStoreModifiedData @ 0x1405A8438 (HvStoreModifiedData.c)
 *     HvFreeDirtyData @ 0x1405B0F14 (HvFreeDirtyData.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     CmpTraceHiveFlushStop @ 0x1405B4838 (CmpTraceHiveFlushStop.c)
 *     CmpLogFlushPhaseEnd @ 0x1405B5C20 (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x1405B5CBC (CmpLogFlushPhaseStart.c)
 *     CmpWakeWriteQueueWaiters @ 0x1405B5D38 (CmpWakeWriteQueueWaiters.c)
 *     HvpMarkDirty @ 0x1405FBD2C (HvpMarkDirty.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406B94E8 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1406B95D8 (HvWriteHivePrimaryFile.c)
 *     HvWriteLogFile @ 0x1406B987C (HvWriteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B9A2C (CmpFileFlushAndPurge.c)
 *     HvFreeUnreconciledData @ 0x1406C4FE4 (HvFreeUnreconciledData.c)
 *     CmpReleaseWriteQueue @ 0x1406C8CE0 (CmpReleaseWriteQueue.c)
 *     HvSwapLogFiles @ 0x1406CA8DC (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1406CE44C (HvIsCurrentLogSwappable.c)
 *     CmpBoostActiveHiveWriter @ 0x1406D0458 (CmpBoostActiveHiveWriter.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406D0A74 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406D0CAC (HvResetLogFileStatusAll.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1407F6F8C (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x1407FBDE8 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x1407FBE68 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x1407FBF28 (HvFoldBackUnreconciledData.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 valid; // r15
  REGHANDLE v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // r13d
  unsigned int v9; // ebx
  volatile signed __int64 *v10; // r12
  int v11; // eax
  int v12; // esi
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rcx
  char v16; // al
  int v17; // r13d
  volatile signed __int64 *v18; // rsi
  char v19; // al
  int v20; // eax
  __int64 v21; // rcx
  int v22; // esi
  unsigned int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // rdi
  bool v33; // cf
  unsigned int v34; // esi
  char v35; // bl
  int v37; // eax
  char v38; // bl
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  ULONGLONG v47; // rax
  unsigned int v48; // r9d
  __int64 v49; // rax
  unsigned int v50; // r9d
  ULONGLONG v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // r9d
  __int64 v55; // rax
  int v56; // esi
  int v57; // eax
  unsigned int v58; // eax
  __int64 v59; // rcx
  _WORD v60[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v61; // [rsp+38h] [rbp-C8h] BYREF
  int v62; // [rsp+3Ch] [rbp-C4h]
  unsigned int v63; // [rsp+40h] [rbp-C0h]
  int v64; // [rsp+48h] [rbp-B8h]
  unsigned int v65; // [rsp+4Ch] [rbp-B4h]
  int v66; // [rsp+58h] [rbp-A8h] BYREF
  int v67; // [rsp+5Ch] [rbp-A4h]
  __int64 v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v70; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v71; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v72; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v73; // [rsp+7Ch] [rbp-84h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD *v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+108h] [rbp+8h]
  __int64 v79; // [rsp+110h] [rbp+10h]
  _DWORD v80[2]; // [rsp+118h] [rbp+18h] BYREF
  _DWORD *v81; // [rsp+120h] [rbp+20h]
  __int64 v82; // [rsp+128h] [rbp+28h]
  __int64 v83; // [rsp+130h] [rbp+30h]
  _DWORD v84[2]; // [rsp+138h] [rbp+38h] BYREF
  unsigned int *v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR v87; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v88; // [rsp+170h] [rbp+70h]
  int v89; // [rsp+178h] [rbp+78h]
  int v90; // [rsp+17Ch] [rbp+7Ch]
  int *v91; // [rsp+180h] [rbp+80h]
  int v92; // [rsp+188h] [rbp+88h]
  int v93; // [rsp+18Ch] [rbp+8Ch]
  EVENT_DATA_DESCRIPTOR v94; // [rsp+190h] [rbp+90h] BYREF
  int *v95; // [rsp+1B0h] [rbp+B0h]
  int v96; // [rsp+1B8h] [rbp+B8h]
  int v97; // [rsp+1BCh] [rbp+BCh]

  v69 = 0;
  LODWORD(valid) = 0;
  if ( stru_140400AA0.LevelPlus1 > 4 )
  {
    v70 = a2;
    v77 = v80;
    v79 = *(_QWORD *)(BugCheckParameter2 + 1856);
    v80[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
    v81 = v84;
    v83 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v84[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
    v85 = &v70;
    v78 = 2LL;
    v80[1] = 0;
    v82 = 2LL;
    v84[1] = 0;
    v86 = 4LL;
    TlgWrite(&stru_140400AA0, &unk_14036CF45, 0LL, 0LL, 7u, &pData);
  }
  v5 = EtwpRegTraceHandle;
  v71 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v47 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v48 = 0;
    v60[0] = 0;
    if ( v47 )
    {
      UserData[0].Ptr = v47;
      v48 = 1;
      UserData[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
      UserData[0].Reserved = 0;
    }
    v49 = v48;
    v50 = v48 + 1;
    UserData[v49].Ptr = (ULONGLONG)v60;
    *(_QWORD *)&UserData[v49].Size = 2LL;
    v51 = *(_QWORD *)(BugCheckParameter2 + 1856);
    if ( v51 )
    {
      v52 = v50++;
      UserData[v52].Ptr = v51;
      UserData[v52].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
      *(&UserData[0].Reserved + 1 * v52) = 0;
    }
    v53 = v50;
    v54 = v50 + 1;
    UserData[v53].Ptr = (ULONGLONG)v60;
    *(_QWORD *)&UserData[v53].Size = 2LL;
    v55 = v54;
    UserData[v55].Ptr = (ULONGLONG)&v71;
    *(_QWORD *)&UserData[v55].Size = 4LL;
    EtwWrite(v5, &EventDescriptor, 0LL, v54 + 1, UserData);
  }
  v7 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v7 & 0x8001) != 0 )
    goto LABEL_77;
  if ( !*(_QWORD *)(BugCheckParameter2 + 1536) )
  {
    LODWORD(valid) = -1073741811;
    goto LABEL_77;
  }
  v8 = 0;
  v9 = a2 | 0xC;
  v10 = (volatile signed __int64 *)(BugCheckParameter2 + 72);
  if ( (v7 & 2) == 0 )
    v9 = a2;
  LODWORD(v68) = (v9 >> 4) & 1;
  v11 = v9 & 1;
  v12 = v9 & 2;
  v66 = v11;
  v67 = v12;
  while ( 1 )
  {
    if ( v11 )
      CmpLockRegistry(v6);
    else
      CmpLockRegistryFreezeAware(0);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 72, 0LL);
    if ( v12 )
    {
      v13 = *(_DWORD *)(BugCheckParameter2 + 4280);
      if ( (v13 & 2) != 0 || (v13 & 1) != 0 && (v9 & 4) == 0 )
      {
        if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          goto LABEL_118;
        goto LABEL_119;
      }
    }
    if ( (v9 & 4) != 0 && (*(_DWORD *)(BugCheckParameter2 + 4280) & 2) != 0 )
      goto LABEL_81;
    if ( (*(_DWORD *)(BugCheckParameter2 + 4280) & 1) == 0 )
      break;
    if ( (v9 & 4) != 0 )
    {
      v56 = 0;
    }
    else if ( *(_DWORD *)(BugCheckParameter2 + 104) || (v56 = 2, *(_BYTE *)(BugCheckParameter2 + 191)) )
    {
      v56 = 1;
    }
    LODWORD(valid) = CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 4232, v9);
    if ( (int)valid >= 0 )
      v8 += v56;
    v12 = v67;
LABEL_128:
    if ( v8 >= 2 )
      goto LABEL_77;
    v11 = v66;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v9, (int *)&v61);
  v14 = v61;
  v15 = 4LL;
  if ( stru_140400AA0.LevelPlus1 > 4 )
  {
    v90 = 0;
    v93 = 0;
    v73 = v63;
    v88 = &v72;
    v91 = (int *)&v73;
    v72 = v61;
    v89 = 4;
    v92 = 4;
    TlgWrite(&stru_140400AA0, &unk_14036CEFA, 0LL, 0LL, 4u, &v87);
    v15 = 4LL;
  }
  if ( (v14 & 0x358) == 0 )
  {
    v38 = _InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v38 & 2) != 0 && (v38 & 4) == 0 )
LABEL_118:
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 72));
LABEL_119:
    KeAbPostRelease(BugCheckParameter2 + 72);
    CmpUnlockRegistry();
    LODWORD(valid) = 0;
    goto LABEL_77;
  }
  if ( (v14 & 2) != 0 )
  {
    v37 = *(_DWORD *)(BugCheckParameter2 + 4280);
    v15 = BugCheckParameter2 + 4256;
    if ( (v37 & 2) == 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 4280) = v37 | 2;
      v14 = v61;
      *(_QWORD *)v15 = KeGetCurrentThread();
      goto LABEL_22;
    }
LABEL_81:
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 4256, v9);
    goto LABEL_128;
  }
  if ( (v14 & 0x2000) != 0 )
    CmpBoostActiveHiveWriter(4LL, BugCheckParameter2 + 4256);
LABEL_22:
  if ( (v14 & 1) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 4280) |= 1u;
    v14 = v61;
    *(_QWORD *)(BugCheckParameter2 + 4232) = KeGetCurrentThread();
  }
  v16 = (v14 & 0x110) != 0;
  v17 = (v14 >> 6) & 1;
  if ( (v14 & 8) == 0 )
  {
LABEL_28:
    if ( (v14 & 0x158) != 0 )
      v20 = HvStoreModifiedData(BugCheckParameter2, v16, v17);
    else
      v20 = 0;
    if ( v20 )
    {
      v57 = v20 - 1;
      if ( !v57 )
      {
        LODWORD(valid) = 0;
        LOBYTE(v22) = v62 | 2;
        v62 |= 2u;
        goto LABEL_68;
      }
      LODWORD(valid) = -1073741823;
      if ( v57 == 1 )
      {
        LOBYTE(v22) = v62;
        goto LABEL_68;
      }
    }
    if ( (v14 & 0x80u) != 0 )
    {
      v58 = *(_DWORD *)(BugCheckParameter2 + 272);
      if ( v58 > *(_DWORD *)(BugCheckParameter2 + 4284) )
      {
        v64 = *(_DWORD *)(BugCheckParameter2 + 4284);
        *(_DWORD *)(BugCheckParameter2 + 4284) = 0;
        v65 = v58 + 4096;
      }
      else
      {
        v61 = v14 & 0xFFFFFF7F;
      }
    }
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 72));
    KeAbPostRelease(BugCheckParameter2 + 72);
    CmpUnlockRegistry();
    v14 = v61;
    if ( (v61 & 0x80u) != 0 )
    {
      CmpLogFlushPhaseStart(v21, 1LL);
      v23 = v68;
      valid = (unsigned int)HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, v65, (unsigned int)v68);
      CmpLogFlushPhaseEnd(v59, 1LL, valid);
      v22 = v62;
      if ( (int)valid < 0 )
        goto LABEL_53;
      v22 = v62 | 0x21;
      v62 |= 0x21u;
    }
    else
    {
      v22 = v62;
      v23 = v68;
    }
    if ( (v14 & 8) != 0 )
    {
      CmpLogFlushPhaseStart(v21, 2LL);
      valid = (unsigned int)HvWriteLogFile(BugCheckParameter2, v24, v25, &v69);
      CmpLogFlushPhaseEnd(v26, 2LL, valid);
      if ( (int)valid < 0 )
        goto LABEL_53;
      HvTruncateCurrentLogFileIfRequired(BugCheckParameter2);
      v22 |= 2u;
      v62 = v22;
    }
    if ( (v14 & 0x10) != 0 )
    {
      CmpLogFlushPhaseStart(v21, 3LL);
      LOBYTE(v42) = 1;
      valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, v42, v23);
      CmpLogFlushPhaseEnd(v43, 3LL, valid);
      if ( (int)valid < 0 )
      {
        v14 |= 0x400u;
        v61 = v14;
        goto LABEL_53;
      }
      v22 |= 0x20u;
      v62 = v22;
    }
    CmpLogFlushPhaseStart(v21, 4LL);
    if ( (v14 & 0x448) == 0x48 )
    {
      RtlMergeBitMaps(BugCheckParameter2 + 1728, (unsigned int *)(BugCheckParameter2 + 1680));
      HvFreeDirtyData(BugCheckParameter2);
      v22 |= 4u;
      v62 = v22;
    }
    CmpLogFlushPhaseEnd(v27, 4LL, (unsigned int)valid);
    if ( (v14 & 0x20) != 0 )
    {
      v40 = v63 >> 2;
      LOBYTE(v40) = (v63 & 4) != 0;
      HvSwapLogFiles(BugCheckParameter2, v40);
      v22 |= 8u;
      v62 = v22;
    }
    if ( (v14 & 0x45) == 0x41 )
    {
      CmpLockRegistry(v21);
      ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 72, 0LL);
      v29 = CmpReleaseWriteQueue(v28, BugCheckParameter2 + 4232);
      v30 = 3221225473LL;
      if ( (v62 & 2) != 0 )
        v30 = (unsigned int)valid;
      CmpWakeWriteQueueWaiters(v29, v30);
      *(_DWORD *)(BugCheckParameter2 + 4280) &= ~1u;
      v62 = v22 | 0x10;
      v31 = _InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v31 & 2) != 0 && (v31 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 72));
      KeAbPostRelease(BugCheckParameter2 + 72);
      CmpUnlockRegistry();
      v22 = v62;
      v14 = v61;
    }
    if ( (v14 & 0x40) != 0 )
    {
      CmpLogFlushPhaseStart(v21, 5LL);
      valid = (unsigned int)HvWriteHivePrimaryFile(BugCheckParameter2);
      CmpLogFlushPhaseEnd(v39, 5LL, valid);
      if ( (int)valid < 0 )
        goto LABEL_53;
      v22 |= 0x20u;
      v62 = v22;
    }
    if ( (v14 & 0x100) != 0 )
    {
      CmpLogFlushPhaseStart(v21, 6LL);
      LOBYTE(v44) = 1;
      LOBYTE(v45) = 1;
      valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v45, v44, v23);
      CmpLogFlushPhaseEnd(v46, 6LL, valid);
      if ( (int)valid < 0 )
        goto LABEL_53;
      v22 |= 0x20u;
      v62 = v22;
      HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
    }
    if ( (v14 & 0x200) != 0 && (v22 & 0x20) == 0 )
    {
      CmpLogFlushPhaseStart(v21, 7LL);
      if ( (int)CmpFileFlushAndPurge(BugCheckParameter2, 0LL) >= 0 )
      {
        v22 |= 0x20u;
        v62 = v22;
      }
      CmpLogFlushPhaseEnd(v41, 7LL, (v22 & 0x20) == 0 ? 0xC0000001 : 0);
    }
    LODWORD(valid) = 0;
LABEL_53:
    CmpLockRegistry(v21);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 72, 0LL);
    if ( (int)valid < 0 && (v14 & 0x80u) != 0 && (v22 & 1) == 0 )
      *(_DWORD *)(BugCheckParameter2 + 4284) = v64;
    if ( (v22 & 0x20) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 4284) = 0;
      *(_DWORD *)(BugCheckParameter2 + 4280) |= 4u;
    }
    if ( (int)valid < 0 )
    {
      if ( (v22 & 2) != 0 && (v14 & 0x400) != 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 176) -= v69;
        --*(_DWORD *)(BugCheckParameter2 + 168);
        v22 &= ~2u;
        v62 = v22;
      }
      goto LABEL_59;
    }
    if ( (v14 & 0x800) != 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 4184) = KiQueryUnbiasedInterruptTime();
      if ( (v14 & 0x1000) != 0 )
        goto LABEL_108;
      CmpArmLazyWriter(1LL, 0LL, 0);
    }
    if ( (v14 & 0x1000) == 0 )
    {
LABEL_59:
      v17 = (v14 >> 6) & 1;
      if ( v17 )
      {
        if ( (int)valid < 0 )
        {
          HvFoldBackUnreconciledData(BugCheckParameter2);
        }
        else
        {
          HvUnCOWReconciledPages(BugCheckParameter2);
          HvFreeUnreconciledData(BugCheckParameter2);
          if ( (v14 & 1) != 0 && (v22 & 0x10) == 0 )
          {
            HvResetLogFileStatusAll(BugCheckParameter2);
            *(_DWORD *)(BugCheckParameter2 + 176) = 0;
            if ( (unsigned __int8)HvIsCurrentLogSwappable(BugCheckParameter2) )
              HvSwapLogFiles(BugCheckParameter2, 0LL);
          }
          else
          {
            v15 = *(unsigned int *)(BugCheckParameter2 + 164);
            if ( (unsigned int)(v15 - 4) <= 1 )
            {
              v15 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)((_DWORD)v15 != 4));
              *(_BYTE *)(v15 + BugCheckParameter2 + 188) = 0;
            }
          }
        }
      }
      if ( (v14 & 0x110) != 0 )
        HvFreeUnreconciledData(BugCheckParameter2);
      if ( (v14 & 8) != 0 && (v22 & 4) == 0 )
      {
        if ( (v22 & 2) != 0 )
        {
          if ( !v17 )
          {
            RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)(BugCheckParameter2 + 1680));
            *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
          }
          HvFreeDirtyData(BugCheckParameter2);
        }
        else
        {
          HvFoldBackDirtyData(BugCheckParameter2);
        }
      }
      goto LABEL_68;
    }
LABEL_108:
    CmpArmLazyWriter(1LL, 0LL, 1);
    goto LABEL_59;
  }
  v18 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  if ( (unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
  {
    v19 = _InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
    KeAbPostRelease(BugCheckParameter2 + 80);
    v16 = (v14 & 0x110) != 0;
    v14 = v61;
    goto LABEL_28;
  }
  if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
  KeAbPostRelease(BugCheckParameter2 + 80);
  LOBYTE(v22) = v62;
  LODWORD(valid) = -1073741823;
  LOBYTE(v14) = v61;
LABEL_68:
  if ( (v14 & 1) == 0 || (v22 & 0x10) != 0 )
  {
    v68 = 0LL;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 4280) &= ~1u;
    v68 = CmpReleaseWriteQueue(v15, BugCheckParameter2 + 4232);
  }
  if ( (v14 & 2) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 4280) &= ~2u;
    v32 = CmpReleaseWriteQueue(v15, BugCheckParameter2 + 4256);
  }
  else
  {
    v32 = 0LL;
  }
  v33 = (v22 & 2) != 0;
  v34 = -1073741823;
  CmpWakeWriteQueueWaiters(v68, v33 ? 0 : 0xC0000001);
  if ( v17 )
    v34 = valid;
  CmpWakeWriteQueueWaiters(v32, v34);
  v35 = _InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v35 & 2) != 0 && (v35 & 4) == 0 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  CmpUnlockRegistry();
LABEL_77:
  CmpTraceHiveFlushStop((unsigned int)valid);
  if ( stru_140400AA0.LevelPlus1 > 4 )
  {
    v97 = 0;
    v95 = &v66;
    v66 = valid;
    v96 = 4;
    TlgWrite(&stru_140400AA0, &unk_14036CED7, 0LL, 0LL, 3u, &v94);
  }
  return (unsigned int)valid;
}
