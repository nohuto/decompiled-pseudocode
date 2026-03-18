/*
 * XREFs of CmpFlushHive @ 0x1406344A4
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x140168D30 (CmpDoFlushAll.c)
 *     CmpTransMgrPrepare @ 0x14063302C (CmpTransMgrPrepare.c)
 *     CmpInitHiveFromFile @ 0x1406365F8 (CmpInitHiveFromFile.c)
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     CmpDoReconcileNextHive @ 0x140661C00 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x140661D20 (CmpDoFlushNextHive.c)
 *     NtFlushKey @ 0x1406E4CD0 (NtFlushKey.c)
 *     CmpTransMgrSyncHive @ 0x1406ED340 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140760BCC (CmpMountPreloadedHives.c)
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x140829994 (CmReplaceKey.c)
 *     CmFreezeRegistry @ 0x14082E618 (CmFreezeRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140007890 (CmpArmLazyWriter.c)
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     RtlNumberOfSetBits @ 0x1400839F0 (RtlNumberOfSetBits.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     PoIsInitializedStopWatch @ 0x14008BB20 (PoIsInitializedStopWatch.c)
 *     KeQueryUnbiasedInterruptTime @ 0x1400E5020 (KeQueryUnbiasedInterruptTime.c)
 *     HvUnCOWReconciledPages @ 0x14011BA7C (HvUnCOWReconciledPages.c)
 *     RtlMergeBitMaps @ 0x14011BD88 (RtlMergeBitMaps.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     HvStoreModifiedData @ 0x14065D6F0 (HvStoreModifiedData.c)
 *     CmpGenerateFlushControlData @ 0x140660898 (CmpGenerateFlushControlData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140660B48 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140660DB4 (HvpLogTypeToLogArrayIndex.c)
 *     HvUnlockHiveFlusherExclusive @ 0x1406612E8 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140661320 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     HvFreeDirtyData @ 0x140662AF8 (HvFreeDirtyData.c)
 *     HvWriteHivePrimaryFile @ 0x140662F68 (HvWriteHivePrimaryFile.c)
 *     HvWriteLogFile @ 0x1406637BC (HvWriteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x140663994 (CmpFileFlushAndPurge.c)
 *     CmpLogFlushPhaseEnd @ 0x1406E0D14 (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x1406E16A8 (CmpLogFlushPhaseStart.c)
 *     HvFreeUnreconciledData @ 0x1406E38A0 (HvFreeUnreconciledData.c)
 *     CmpTraceHiveFlushStop @ 0x1406E4148 (CmpTraceHiveFlushStop.c)
 *     CmpAcquireReconcilerQueue @ 0x1406E60B8 (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1406E60D4 (CmpAcquireFlusherQueue.c)
 *     HvSwapLogFiles @ 0x1406E822C (HvSwapLogFiles.c)
 *     HvUnlockHiveWriter @ 0x1406E8798 (HvUnlockHiveWriter.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406E9484 (CmpWakeWriteQueueWaiters.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406E98B4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvLockHiveWriter @ 0x1406EC398 (HvLockHiveWriter.c)
 *     HvIsCurrentLogSwappable @ 0x1406EC91C (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406EE4DC (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406EE7E0 (HvResetLogFileStatusAll.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14082EB74 (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140833F9C (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x14083401C (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x1408340DC (HvFoldBackUnreconciledData.c)
 *     HvMarkDirty @ 0x14083A510 (HvMarkDirty.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 valid; // r14
  REGHANDLE v5; // rbx
  int v6; // eax
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // edx
  __int64 v11; // rcx
  unsigned int Ptr; // esi
  char v13; // bl
  int v14; // eax
  unsigned int v15; // r15d
  unsigned int Ptr_high; // ebx
  __int64 v17; // rcx
  unsigned int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct _KEVENT *v24; // rdx
  int v25; // r12d
  char v26; // al
  bool v27; // si
  struct _KEVENT *v29; // rax
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  ULONGLONG v39; // rax
  unsigned int v40; // r9d
  __int64 v41; // rax
  unsigned int v42; // r9d
  ULONGLONG v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // r9d
  __int64 v47; // rax
  int v48; // esi
  int v49; // eax
  unsigned int v50; // ebx
  __int64 v51; // rcx
  unsigned int v52; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v53; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+48h] [rbp-C0h] BYREF
  PRKEVENT EventDescriptor[3]; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+78h] [rbp-90h]
  int v58; // [rsp+80h] [rbp-88h]
  PRKEVENT *v59; // [rsp+88h] [rbp-80h]
  __int64 v60; // [rsp+90h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR UserData[2]; // [rsp+98h] [rbp-70h] BYREF
  int *v62; // [rsp+B8h] [rbp-50h]
  __int64 v63; // [rsp+C0h] [rbp-48h]
  PRKEVENT *v64; // [rsp+C8h] [rbp-40h]
  int v65; // [rsp+D0h] [rbp-38h] BYREF
  int v66; // [rsp+D4h] [rbp-34h]
  _DWORD *v67; // [rsp+D8h] [rbp-30h]
  __int64 v68; // [rsp+E0h] [rbp-28h]
  __int64 v69; // [rsp+E8h] [rbp-20h]
  _DWORD v70[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int *v71; // [rsp+F8h] [rbp-10h]
  __int64 v72; // [rsp+100h] [rbp-8h]

  pData.Ptr = 0LL;
  *(_QWORD *)&pData.Size = 0LL;
  LODWORD(valid) = 0;
  v57 = 0LL;
  v58 = 0;
  LODWORD(v54) = 0;
  if ( stru_140425BC0.LevelPlus1 > 4 )
  {
    v52 = a2;
    v62 = &v65;
    v64 = *(PRKEVENT **)(BugCheckParameter2 + 1856);
    v65 = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
    v67 = v70;
    v69 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v70[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
    v71 = &v52;
    v63 = 2LL;
    v66 = 0;
    v68 = 2LL;
    v70[1] = 0;
    v72 = 4LL;
    TlgWrite(&stru_140425BC0, &unk_14038B9A3, 0LL, 0LL, 7u, UserData);
  }
  v5 = EtwpRegTraceHandle;
  v53 = a2;
  *(_OWORD *)&EventDescriptor[1] = REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, (PCEVENT_DESCRIPTOR)&EventDescriptor[1]) )
  {
    v39 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v40 = 0;
    LOWORD(v52) = 0;
    if ( v39 )
    {
      UserData[0].Ptr = v39;
      v40 = 1;
      UserData[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
      UserData[0].Reserved = 0;
    }
    v41 = v40;
    v42 = v40 + 1;
    UserData[v41].Ptr = (ULONGLONG)&v52;
    *(_QWORD *)&UserData[v41].Size = 2LL;
    v43 = *(_QWORD *)(BugCheckParameter2 + 1856);
    if ( v43 )
    {
      v44 = v42++;
      UserData[v44].Ptr = v43;
      UserData[v44].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
      *(&UserData[0].Reserved + 1 * v44) = 0;
    }
    v45 = v42;
    v46 = v42 + 1;
    UserData[v45].Ptr = (ULONGLONG)&v52;
    *(_QWORD *)&UserData[v45].Size = 2LL;
    v47 = v46;
    UserData[v47].Ptr = (ULONGLONG)&v53;
    *(_QWORD *)&UserData[v47].Size = 4LL;
    EtwWrite(v5, (PCEVENT_DESCRIPTOR)&EventDescriptor[1], 0LL, v46 + 1, UserData);
  }
  v6 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v6 & 0x8001) != 0 )
    goto LABEL_70;
  if ( !*(_QWORD *)(BugCheckParameter2 + 1536) )
  {
    LODWORD(valid) = -1073741811;
    goto LABEL_70;
  }
  v7 = 0;
  v8 = a2 | 0xC;
  if ( (v6 & 2) == 0 )
    v8 = a2;
  v52 = (v8 >> 4) & 1;
  v9 = v8 & 1;
  for ( LODWORD(EventDescriptor[1]) = v9; ; v9 = (int)EventDescriptor[1] )
  {
    if ( v9 )
      CmpLockRegistry();
    else
      CmpLockRegistryFreezeAware(0LL);
    HvLockHiveFlusherExclusive(BugCheckParameter2);
    if ( (v8 & 2) != 0
      && (PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4248))
       || PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4232)) && (v8 & 4) == 0) )
    {
LABEL_87:
      HvUnlockHiveFlusherExclusive(BugCheckParameter2);
      CmpUnlockRegistry();
      LODWORD(valid) = 0;
      goto LABEL_70;
    }
    if ( (v8 & 4) != 0 && PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4248)) )
      goto LABEL_117;
    if ( !PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4232)) )
      break;
    if ( v10 )
    {
      v48 = 0;
    }
    else if ( *(_DWORD *)(BugCheckParameter2 + 104) || (v48 = 2, *(_BYTE *)(BugCheckParameter2 + 191)) )
    {
      v48 = 1;
    }
    LODWORD(valid) = CmpWaitOnHiveWriteQueue(BugCheckParameter2, v11);
    if ( (int)valid >= 0 )
      v7 += v48;
LABEL_118:
    if ( v7 >= 2 )
      goto LABEL_70;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v8, &pData);
  Ptr = pData.Ptr;
  if ( stru_140425BC0.LevelPlus1 > 4 )
  {
    v66 = 0;
    LODWORD(EventDescriptor[0]) = pData.Size;
    v62 = (int *)&v53;
    v64 = EventDescriptor;
    v53 = pData.Ptr;
    v63 = 4LL;
    v65 = 4;
    TlgWrite(&stru_140425BC0, &unk_14038B958, 0LL, 0LL, 4u, UserData);
  }
  if ( (Ptr & 0x358) == 0 )
    goto LABEL_87;
  if ( (Ptr & 2) == 0 )
    goto LABEL_20;
  if ( PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4248)) )
  {
LABEL_117:
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 4248);
    goto LABEL_118;
  }
  CmpAcquireReconcilerQueue(BugCheckParameter2);
LABEL_20:
  if ( (Ptr & 1) != 0 )
    CmpAcquireFlusherQueue(BugCheckParameter2);
  if ( (Ptr & 8) != 0 )
  {
    HvLockHiveWriter(BugCheckParameter2);
    v13 = HvMarkDirty(BugCheckParameter2, 0LL, 4096LL);
    HvUnlockHiveWriter(BugCheckParameter2);
    if ( !v13 )
    {
      LODWORD(valid) = -1073741823;
LABEL_121:
      LOBYTE(Ptr_high) = BYTE4(pData.Ptr);
      goto LABEL_60;
    }
  }
  if ( (Ptr & 0x158) != 0 )
    v14 = HvStoreModifiedData(BugCheckParameter2);
  else
    v14 = 0;
  if ( v14 )
  {
    v49 = v14 - 1;
    if ( !v49 )
    {
      LODWORD(valid) = 0;
      LOBYTE(Ptr_high) = BYTE4(pData.Ptr) | 2;
      goto LABEL_60;
    }
    LODWORD(valid) = -1073741823;
    if ( v49 != 1 )
      goto LABEL_27;
    goto LABEL_121;
  }
LABEL_27:
  if ( (Ptr & 0x80u) == 0 )
    goto LABEL_28;
  v50 = *(_DWORD *)(BugCheckParameter2 + 272);
  v15 = *(_DWORD *)(BugCheckParameter2 + 4268);
  if ( v50 > v15 )
  {
    Ptr_high = v50 + 4096;
    *(_DWORD *)(BugCheckParameter2 + 4268) = 0;
  }
  else
  {
    Ptr &= ~0x80u;
LABEL_28:
    v15 = v57;
    Ptr_high = HIDWORD(v57);
  }
  HvUnlockHiveFlusherExclusive(BugCheckParameter2);
  CmpUnlockRegistry();
  if ( (Ptr & 0x80u) == 0 )
  {
    Ptr_high = HIDWORD(pData.Ptr);
    v18 = v52;
    goto LABEL_31;
  }
  CmpLogFlushPhaseStart(v17, 1LL);
  v18 = v52;
  valid = (unsigned int)HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, Ptr_high, v52);
  CmpLogFlushPhaseEnd(v51, 1LL, valid);
  LOBYTE(Ptr_high) = BYTE4(pData.Ptr);
  if ( (int)valid >= 0 )
  {
    Ptr_high = HIDWORD(pData.Ptr) | 0x21;
    HIDWORD(pData.Ptr) |= 0x21u;
LABEL_31:
    if ( (Ptr & 8) != 0 )
    {
      CmpLogFlushPhaseStart(v17, 2LL);
      valid = (unsigned int)HvWriteLogFile(BugCheckParameter2, v19, v20, &v54);
      CmpLogFlushPhaseEnd(v21, 2LL, valid);
      if ( (int)valid >= 0 )
      {
        HvTruncateCurrentLogFileIfRequired(BugCheckParameter2);
        Ptr_high |= 2u;
        HIDWORD(pData.Ptr) = Ptr_high;
        goto LABEL_34;
      }
    }
    else
    {
LABEL_34:
      if ( (Ptr & 0x10) != 0 )
      {
        CmpLogFlushPhaseStart(v17, 3LL);
        LOBYTE(v34) = 1;
        valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, v34, v18);
        CmpLogFlushPhaseEnd(v35, 3LL, valid);
        if ( (int)valid < 0 )
        {
          Ptr |= 0x400u;
          goto LABEL_45;
        }
        Ptr_high |= 0x20u;
        HIDWORD(pData.Ptr) = Ptr_high;
      }
      CmpLogFlushPhaseStart(v17, 4LL);
      if ( (Ptr & 0x448) == 0x48 )
      {
        RtlMergeBitMaps(BugCheckParameter2 + 1728, (unsigned int *)(BugCheckParameter2 + 1680));
        HvFreeDirtyData(BugCheckParameter2);
        Ptr_high |= 4u;
        HIDWORD(pData.Ptr) = Ptr_high;
      }
      CmpLogFlushPhaseEnd(v22, 4LL, (unsigned int)valid);
      if ( (Ptr & 0x20) != 0 )
      {
        v32 = pData.Size >> 2;
        LOBYTE(v32) = (pData.Size & 4) != 0;
        HvSwapLogFiles(BugCheckParameter2, v32);
        Ptr_high |= 8u;
        HIDWORD(pData.Ptr) = Ptr_high;
      }
      if ( (Ptr & 0x45) == 0x41 )
      {
        CmpLockRegistry();
        HvLockHiveFlusherExclusive(BugCheckParameter2);
        v24 = *(struct _KEVENT **)(BugCheckParameter2 + 4240);
        *(_QWORD *)(BugCheckParameter2 + 4240) = 0LL;
        *(_QWORD *)(BugCheckParameter2 + 4232) = 0LL;
        CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4232, v24);
        LOBYTE(Ptr_high) = Ptr_high | 0x10;
        HvUnlockHiveFlusherExclusive(BugCheckParameter2);
        CmpUnlockRegistry();
      }
      if ( (Ptr & 0x40) != 0 )
      {
        CmpLogFlushPhaseStart(v23, 5LL);
        valid = (unsigned int)HvWriteHivePrimaryFile(BugCheckParameter2);
        CmpLogFlushPhaseEnd(v30, 5LL, valid);
        if ( (int)valid < 0 )
          goto LABEL_45;
        LOBYTE(Ptr_high) = Ptr_high | 0x20;
      }
      if ( (Ptr & 0x100) != 0 )
      {
        CmpLogFlushPhaseStart(v23, 6LL);
        LOBYTE(v36) = 1;
        LOBYTE(v37) = 1;
        valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v37, v36, v18);
        CmpLogFlushPhaseEnd(v38, 6LL, valid);
        if ( (int)valid < 0 )
          goto LABEL_45;
        LOBYTE(Ptr_high) = Ptr_high | 0x20;
        HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
      }
      if ( (Ptr & 0x200) != 0 && (Ptr_high & 0x20) == 0 )
      {
        CmpLogFlushPhaseStart(v23, 7LL);
        if ( (int)CmpFileFlushAndPurge(BugCheckParameter2, 0LL) >= 0 )
          LOBYTE(Ptr_high) = Ptr_high | 0x20;
        CmpLogFlushPhaseEnd(v33, 7LL, (Ptr_high & 0x20) == 0 ? 0xC0000001 : 0);
      }
      LODWORD(valid) = 0;
    }
  }
LABEL_45:
  CmpLockRegistry();
  HvLockHiveFlusherExclusive(BugCheckParameter2);
  if ( (int)valid < 0 && (Ptr & 0x80u) != 0 && (Ptr_high & 1) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 4268) = v15;
  if ( (Ptr_high & 0x20) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 4264) |= 1u;
    *(_DWORD *)(BugCheckParameter2 + 4268) = 0;
  }
  if ( (int)valid < 0 )
  {
    if ( (Ptr_high & 2) != 0 && (Ptr & 0x400) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 176) -= v54;
      --*(_DWORD *)(BugCheckParameter2 + 168);
      LOBYTE(Ptr_high) = Ptr_high & 0xFD;
    }
  }
  else
  {
    if ( (Ptr & 0x800) == 0 )
      goto LABEL_50;
    *(_QWORD *)(BugCheckParameter2 + 4184) = KeQueryUnbiasedInterruptTime();
    if ( (Ptr & 0x1000) != 0 )
      goto LABEL_100;
    CmpArmLazyWriter(1, 0LL, 0);
LABEL_50:
    if ( (Ptr & 0x1000) != 0 )
LABEL_100:
      CmpArmLazyWriter(1, 0LL, 1);
  }
  v25 = (Ptr >> 6) & 1;
  if ( v25 )
  {
    if ( (int)valid < 0 )
    {
      HvFoldBackUnreconciledData(BugCheckParameter2);
    }
    else
    {
      HvUnCOWReconciledPages(BugCheckParameter2);
      HvFreeUnreconciledData(BugCheckParameter2);
      if ( (Ptr & 1) != 0 && (Ptr_high & 0x10) == 0 )
      {
        HvResetLogFileStatusAll(BugCheckParameter2);
        *(_DWORD *)(BugCheckParameter2 + 176) = 0;
        if ( (unsigned __int8)HvIsCurrentLogSwappable(BugCheckParameter2) )
          HvSwapLogFiles(BugCheckParameter2, 0LL);
      }
      else
      {
        v31 = *(_DWORD *)(BugCheckParameter2 + 164);
        if ( (unsigned int)(v31 - 4) <= 1 )
          *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)(v31 != 4)) + BugCheckParameter2 + 188) = 0;
      }
    }
  }
  if ( (Ptr & 0x110) != 0 )
    HvFreeUnreconciledData(BugCheckParameter2);
  if ( (Ptr & 8) != 0 && (Ptr_high & 4) == 0 )
  {
    if ( (Ptr_high & 2) != 0 )
    {
      if ( !v25 )
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
LABEL_60:
  EventDescriptor[1] = 0LL;
  EventDescriptor[0] = 0LL;
  if ( (Ptr & 1) == 0 || (v26 = 1, (Ptr_high & 0x10) != 0) )
    v26 = 0;
  v27 = (Ptr & 2) != 0;
  LOBYTE(v52) = v26;
  if ( v26 )
  {
    EventDescriptor[1] = *(PRKEVENT *)(BugCheckParameter2 + 4240);
    *(_QWORD *)(BugCheckParameter2 + 4240) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 4232) = 0LL;
  }
  if ( v27 )
  {
    v29 = *(struct _KEVENT **)(BugCheckParameter2 + 4256);
    *(_QWORD *)(BugCheckParameter2 + 4256) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 4248) = 0LL;
    EventDescriptor[0] = v29;
  }
  HvUnlockHiveFlusherExclusive(BugCheckParameter2);
  CmpUnlockRegistry();
  if ( (_BYTE)v52 )
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4232, EventDescriptor[1]);
  if ( v27 )
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4248, EventDescriptor[0]);
LABEL_70:
  CmpTraceHiveFlushStop((unsigned int)valid);
  if ( stru_140425BC0.LevelPlus1 > 4 )
  {
    LODWORD(EventDescriptor[1]) = valid;
    v59 = &EventDescriptor[1];
    v60 = 4LL;
    TlgWrite(&stru_140425BC0, &unk_14038B935, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)valid;
}
