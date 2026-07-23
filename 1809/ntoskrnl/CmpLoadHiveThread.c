/*
 * XREFs of CmpLoadHiveThread @ 0x140736D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAreBitsClear @ 0x14000F1D0 (RtlAreBitsClear.c)
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1401B2F98 (CmpApplyAdminSdOnHiveFiles.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpGetFileSize @ 0x1405A7250 (CmpGetFileSize.c)
 *     CmpAcquireShutdownRundown @ 0x1405B1138 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x1405B1174 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmpInitHiveFromFile @ 0x1405B4D68 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpDoFileSetSizeEx @ 0x1406B9BE0 (CmpDoFileSetSizeEx.c)
 *     RtlAppendStringToString @ 0x1406CC680 (RtlAppendStringToString.c)
 *     PsTerminateSystemThread @ 0x1406CD810 (PsTerminateSystemThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140737640 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvpDropPagedBins @ 0x140737784 (HvpDropPagedBins.c)
 *     CmpMarkCurrentValueDirty @ 0x1407379A4 (CmpMarkCurrentValueDirty.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140737A70 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpInitBackupHive @ 0x1407F5620 (CmpInitBackupHive.c)
 *     CmpLogFailureToGetFileSize @ 0x1407FBCC0 (CmpLogFailureToGetFileSize.c)
 *     CmpDiskFullWarning @ 0x1407FC264 (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x1408D78A0 (ExRaiseHardError.c)
 */

PVOID __fastcall CmpLoadHiveThread(ULONG_PTR BugCheckParameter3)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 v3; // r15
  ULONG_PTR inited; // r14
  wchar_t *v5; // rsi
  struct _KEVENT *v6; // rbx
  __int64 v7; // r12
  _DWORD *v8; // r13
  int v9; // eax
  unsigned int v10; // r12d
  NTSTATUS FileSize; // eax
  __int64 v12; // rcx
  int v13; // r14d
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  int v16; // r14d
  __int128 v17; // xmm0
  ULONG v18; // ebx
  ULONG i; // r14d
  __int64 v20; // rax
  volatile signed __int64 *v21; // r12
  ULONG_PTR v22; // rcx
  wchar_t *v23; // rcx
  volatile signed __int64 *v24; // rsi
  signed __int64 *v25; // rsi
  int v26; // eax
  wchar_t *v27; // rcx
  int v29; // [rsp+38h] [rbp-D0h]
  int v30; // [rsp+40h] [rbp-C8h]
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR v32; // [rsp+60h] [rbp-A8h] BYREF
  STRING *Source; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  HANDLE v35; // [rsp+78h] [rbp-90h] BYREF
  HANDLE v36; // [rsp+80h] [rbp-88h] BYREF
  HANDLE v37; // [rsp+88h] [rbp-80h] BYREF
  ULONG Length[2]; // [rsp+90h] [rbp-78h] BYREF
  wchar_t *v39; // [rsp+98h] [rbp-70h]
  ULONG_PTR v40; // [rsp+A0h] [rbp-68h]
  __int128 v41; // [rsp+A8h] [rbp-60h] BYREF
  int v42; // [rsp+B8h] [rbp-50h]
  int v43; // [rsp+BCh] [rbp-4Ch] BYREF
  int v44; // [rsp+C0h] [rbp-48h] BYREF
  char v45[4]; // [rsp+C4h] [rbp-44h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-40h] BYREF
  STRING *v47; // [rsp+D0h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+D8h] [rbp-30h]
  PVOID v49[2]; // [rsp+E8h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2[44]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = BugCheckParameter3;
  v40 = BugCheckParameter3;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  CmpInitializeThreadInfo(v49);
  v2 = 0;
  v3 = 19LL * v1;
  v42 = 0;
  BugCheckParameter3a = v1;
  LODWORD(inited) = 0;
  KeWaitForSingleObject(&CmpMachineHiveList[v3 + 8], Executive, 0, 0, 0LL);
  if ( v1 == CmpCheckHiveIndex )
  {
    KeWaitForSingleObject(&CmpLoadWorkerDebugEvent, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v5 = CmpMachineHiveList[v3 + 3];
  BYTE2(CmpMachineHiveList[v3 + 7]) = 1;
  if ( v5 )
  {
    v8 = v5 + 80;
    v32 = (ULONG_PTR)v5;
    v9 = *((_DWORD *)v5 + 40);
    if ( (v9 & 0x8001) != 0 )
    {
      if ( CmpMiniNTBoot || CmpVolatileBoot )
      {
        if ( (v9 & 2) != 0 )
        {
          CmpLockRegistry();
          v24 = (volatile signed __int64 *)(v5 + 36);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)v24, 0LL);
          *v8 &= ~2u;
          if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v24);
          KeAbPostRelease((ULONG_PTR)v24);
          CmpUnlockRegistry();
          v5 = (wchar_t *)v32;
        }
        *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
        SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
        RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v3 + 17]);
      }
    }
    else
    {
      Source = (STRING *)&CmpMachineHiveList[v3 + 17];
      LODWORD(inited) = CmpOpenHiveFile(
                          (UNICODE_STRING *)Source,
                          0,
                          &v35,
                          (int *)&v34,
                          7u,
                          0LL,
                          (int *)Length,
                          0LL,
                          0LL);
      if ( (inited & 0x80000000) != 0LL )
        goto LABEL_92;
      v10 = (16 * ((_DWORD)v34 == 2)) | 2;
      LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)Source, 4u, &v36, &v43, v10, 0LL, 0LL, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
      {
        v2 = 16;
        goto LABEL_92;
      }
      LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)Source, 5u, &v37, &v44, v10, 0LL, 0LL, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
      {
        v2 = 32;
        goto LABEL_92;
      }
      LODWORD(inited) = CmpGetFileSize(v35, &v46);
      if ( (inited & 0x80000000) != 0LL )
      {
        v2 = 40;
        goto LABEL_92;
      }
      FileSize = CmpGetFileSize(v36, &v41);
      v13 = FileSize;
      if ( FileSize < 0 )
      {
        CmpLogFailureToGetFileSize(v12, 4LL, (unsigned int)FileSize);
        *((_QWORD *)v5 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v5;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v13, 43);
        *(_QWORD *)&v41 = 0LL;
      }
      v14 = CmpGetFileSize(v37, (_QWORD *)&v41 + 1);
      v16 = v14;
      if ( v14 < 0 )
      {
        CmpLogFailureToGetFileSize(v15, 5LL, (unsigned int)v14);
        *((_QWORD *)v5 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v5;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v16, 45);
        *((_QWORD *)&v41 + 1) = 0LL;
      }
      CmpBecomeActiveFlusherAndReconciler(v5);
      CmpLockRegistry();
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 36), 0LL);
      v17 = v41;
      *((_QWORD *)v5 + 192) = v35;
      *((_QWORD *)v5 + 196) = v36;
      *((_QWORD *)v5 + 197) = v37;
      *((_QWORD *)v5 + 224) = v46;
      *(_OWORD *)(v5 + 900) = v17;
      *v8 &= ~2u;
      *((_DWORD *)v5 + 1038) = HIDWORD(CmpMachineHiveList[v3 + 4]);
      *((_DWORD *)v5 + 46) = Length[1];
      if ( (int)CmpDoFileSetSizeEx((__int64)v5, 0, (unsigned int)(*((_DWORD *)v5 + 68) + 4096), 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      v18 = Length[0];
      if ( *((_DWORD *)v5 + 34) != Length[0] )
      {
        for ( i = 0; i < *((_DWORD *)v5 + 22); i += v18 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v5 + 44), i, v18) )
            RtlSetBits((PRTL_BITMAP)(v5 + 44), i, v18);
        }
        *((_DWORD *)v5 + 26) = RtlNumberOfSetBits((PRTL_BITMAP)(v5 + 44));
        *((_DWORD *)v5 + 34) = v18;
      }
      v20 = *((_QWORD *)v5 + 8);
      v39 = v5 + 32;
      if ( *(_DWORD *)(v20 + 4092) || (*(_DWORD *)(v20 + 4088) & 4) != 0 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v5 + 44));
        *((_DWORD *)v5 + 26) = *((_DWORD *)v5 + 22);
      }
      v21 = (volatile signed __int64 *)(v5 + 36);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5 + 9);
      KeAbPostRelease((ULONG_PTR)(v5 + 36));
      CmpUnlockRegistry();
      CmpLockRegistryExclusive();
      if ( (_DWORD)v40 == 3 )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)(v5 + 36), 0LL);
        CmpMarkCurrentValueDirty(v32);
        if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v5 + 9);
        KeAbPostRelease((ULONG_PTR)(v5 + 36));
      }
      v5 = (wchar_t *)v32;
      v22 = v32;
      CmpMachineHiveList[v3 + 6] = (wchar_t *)v32;
      LODWORD(inited) = HvpDropPagedBins(v22);
      if ( (inited & 0x80000000) != 0LL )
      {
        v2 = 80;
LABEL_92:
        *((_QWORD *)v5 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v5;
        SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, v2);
        v47 = Source;
        CmpPuntBoot = 1;
        ExRaiseHardError(3221226008LL, 1LL, 1LL, &v47, 1, v45);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3a, (int)inited);
      }
      CmpUnlockRegistry();
      CmpFinishBeingActiveFlusherAndReconciler(v5);
      if ( *(_DWORD *)(*(_QWORD *)v39 + 4092LL) || (*(_DWORD *)(*(_QWORD *)v39 + 4088LL) & 4) != 0 )
      {
        CmpFlushHive((ULONG_PTR)v5, 0xCu);
        CmpLockRegistry();
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v21, 0LL);
        v23 = v39;
        *(_DWORD *)(*(_QWORD *)v39 + 4092LL) = 0;
        *(_DWORD *)(*(_QWORD *)v23 + 4088LL) &= ~4u;
        if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v21);
        KeAbPostRelease((ULONG_PTR)v21);
        CmpUnlockRegistry();
        v5 = (wchar_t *)v32;
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
      *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
      RtlAppendStringToString(&SystemHiveFullPathName, Source);
      if ( CmpDoIdleProcessing && (int)CmpInitBackupHive(v5, CmpMachineHiveList[v3]) < 0 )
        CmpDoIdleProcessing = 0;
    }
    *((_DWORD *)v5 + 1038) |= 4u;
    if ( (_DWORD)v40 == 3 )
    {
      CmpLockRegistry();
      v25 = (signed __int64 *)(v5 + 36);
      ExAcquirePushLockSharedEx((ULONG_PTR)v25, 0LL);
      *v8 |= 0x200u;
      if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v25);
      KeAbPostRelease((ULONG_PTR)v25);
      CmpUnlockRegistry();
      v5 = (wchar_t *)v32;
    }
    goto LABEL_78;
  }
  inited = (int)CmpInitHiveFromFile(
                  (PCUNICODE_STRING)&CmpMachineHiveList[v3 + 17],
                  (unsigned int)CmpMachineHiveList[v3 + 4],
                  &v32,
                  (char *)&CmpMachineHiveList[v3 + 7] + 3,
                  0x1190001u,
                  0LL,
                  v29,
                  v30,
                  &v31,
                  BugCheckParameter2);
  if ( v1 == 6 && !BYTE4(CmpMachineHiveList[v3 + 7]) && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
    || ((__int64)CmpMachineHiveList[v3 + 4] & 0x8000) != 0
    && !BYTE4(CmpMachineHiveList[v3 + 7])
    && (_DWORD)inited == -1073741772 )
  {
    LODWORD(inited) = 0;
    goto LABEL_84;
  }
  if ( (_DWORD)inited != -1073741431 || (CmpShutdownRundown & 1) == 0 )
  {
    if ( (inited & 0x80000000) != 0LL
      || (v5 = (wchar_t *)v32, ((__int64)CmpMachineHiveList[v3 + 4] & 0x8000) == 0)
      && (!*(_QWORD *)(v32 + 1568) || !*(_QWORD *)(v32 + 1576)) )
    {
      CmpPuntBoot = 1;
      KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v1, inited);
    }
    *(_DWORD *)(v32 + 4152) = HIDWORD(CmpMachineHiveList[v3 + 4]) | 4;
    CmpMachineHiveList[v3 + 6] = v5;
    if ( (_BYTE)v31 )
    {
      CmpInitRmLogOnLoad = 1;
      v6 = &stru_1403FFE50;
      v7 = 7LL;
      do
      {
        KeSetEvent(v6, 0, 0);
        v6 = (struct _KEVENT *)((char *)v6 + 152);
        --v7;
      }
      while ( v7 );
    }
    v8 = v5 + 80;
    if ( (*((_DWORD *)v5 + 40) & 0x8001) == 0
      && CmpDoIdleProcessing
      && (int)CmpInitBackupHive(v5, CmpMachineHiveList[v3]) < 0 )
    {
      CmpDoIdleProcessing = 0;
    }
LABEL_78:
    if ( CmpAcquireShutdownRundown() )
    {
      if ( (*v8 & 0x8001) == 0 )
      {
        if ( *((_QWORD *)v5 + 192) )
        {
          v26 = CmpApplyAdminSdOnHiveFiles((ULONG_PTR)v5, (ULONG_PTR)CmpMachineHiveList[v3]);
          LODWORD(inited) = v26;
          if ( v26 < 0 )
            KeBugCheckEx(0x51u, 0x13uLL, (ULONG_PTR)v5, (ULONG_PTR)CmpMachineHiveList[v3], v26);
        }
      }
      CmpReleaseShutdownRundown();
    }
    else
    {
      LODWORD(inited) = -1073741431;
    }
  }
LABEL_84:
  BYTE1(CmpMachineHiveList[v3 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v3 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 6 && (unsigned int)CmpCheckHiveIndex < 7 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v27 = CmpMachineHiveList[v3 + 18];
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0);
    CmpMachineHiveList[v3 + 17] = 0LL;
    CmpMachineHiveList[v3 + 18] = 0LL;
  }
  PsTerminateSystemThread(inited);
  return CmCleanupThreadInfo(v49);
}
