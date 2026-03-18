/*
 * XREFs of CmpCreateHive @ 0x14065E124
 * Callers:
 *     CmpInitHiveFromFile @ 0x1406365F8 (CmpInitHiveFromFile.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x14083BCB8 (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140A0D4C0 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140A0D63C (CmpInitializePreloadedHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14009902C (CmpRecheckHiveVolumePolicy.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwSetInformationObject @ 0x1401C0C50 (ZwSetInformationObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SetFailureLocation @ 0x14027F760 (SetFailureLocation.c)
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmCheckRegistry @ 0x14065CD7C (CmCheckRegistry.c)
 *     CmpReorganizeHive @ 0x14065EAFC (CmpReorganizeHive.c)
 *     CmpHiveInitialize @ 0x14065ECC0 (CmpHiveInitialize.c)
 *     CmpAllocate @ 0x14065EE10 (CmpAllocate.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14065EEFC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvHiveStartFileBacked @ 0x14066102C (HvHiveStartFileBacked.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14066133C (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140661390 (CmpVolumeManagerGetContextForFile.c)
 *     CmpGetVolumeClusterSize @ 0x140663B30 (CmpGetVolumeClusterSize.c)
 *     HvMarkBaseBlockDirty @ 0x1406EAC04 (HvMarkBaseBlockDirty.c)
 *     HvHiveStartMemoryBacked @ 0x140764B90 (HvHiveStartMemoryBacked.c)
 *     CmpLogHiveInitializeEvent @ 0x1408266B4 (CmpLogHiveInitializeEvent.c)
 *     CmpDestroyHive @ 0x14082F4C4 (CmpDestroyHive.c)
 */

__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  ULONG_PTR v15; // r14
  int ContextForFile; // edi
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rax
  int VolumeClusterSize; // eax
  __int64 v21; // rax
  void *v22; // rcx
  void *v23; // rdx
  void *v24; // rcx
  void *v25; // rdx
  HANDLE *v26; // r13
  __int16 *v27; // r8
  void *v28; // rdx
  void *v29; // rcx
  void *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // eax
  int v34; // r12d
  HANDLE v35; // rdx
  int v36; // edx
  __int64 v38; // rax
  unsigned int v39; // edi
  int v40; // r9d
  int v41; // ecx
  int v42; // r8d
  __int64 v43; // rax
  int v44; // eax
  _QWORD *v45; // rbx
  _QWORD *v46; // rax
  ULONG_PTR *v47; // rax
  int cData; // [rsp+20h] [rbp-E0h]
  int v49; // [rsp+30h] [rbp-D0h]
  BOOLEAN v50; // [rsp+70h] [rbp-90h]
  char v51; // [rsp+71h] [rbp-8Fh]
  __int16 ObjectInformation; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v53[2]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v54; // [rsp+7Ch] [rbp-84h] BYREF
  __int16 v55[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v56; // [rsp+84h] [rbp-7Ch] BYREF
  int v57; // [rsp+88h] [rbp-78h]
  unsigned int v58; // [rsp+8Ch] [rbp-74h]
  __int16 v59; // [rsp+90h] [rbp-70h] BYREF
  __int16 v60; // [rsp+94h] [rbp-6Ch] BYREF
  int v61; // [rsp+98h] [rbp-68h]
  int v62; // [rsp+9Ch] [rbp-64h]
  unsigned int v63; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-58h]
  int v65; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  ULONG_PTR *v70; // [rsp+D8h] [rbp-28h]
  _QWORD v71[5]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v72[56]; // [rsp+108h] [rbp+8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  int *v74; // [rsp+160h] [rbp+60h]
  __int64 v75; // [rsp+168h] [rbp+68h]
  __int16 *v76; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  __int16 *v78; // [rsp+180h] [rbp+80h]
  __int64 v79; // [rsp+188h] [rbp+88h]
  __int64 v80; // [rsp+190h] [rbp+90h]
  __int64 v81; // [rsp+198h] [rbp+98h]
  __int64 v82; // [rsp+1A0h] [rbp+A0h]
  int v83; // [rsp+1A8h] [rbp+A8h]
  int v84; // [rsp+1ACh] [rbp+ACh]
  __int64 v85; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]
  __int64 v87; // [rsp+1C0h] [rbp+C0h]
  int v88; // [rsp+1C8h] [rbp+C8h]
  int v89; // [rsp+1CCh] [rbp+CCh]

  v67 = a5;
  v64 = a7;
  v15 = 0LL;
  v66 = a9;
  v69 = a10;
  v58 = a2;
  v70 = a1;
  v68 = a11;
  v62 = a4;
  v57 = a3;
  v71[2] = 0LL;
  v50 = 0;
  v51 = 0;
  memset(v72, 0, 0x30uLL);
  if ( a2 > 2 && a2 != 5 )
  {
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, 0);
    goto LABEL_75;
  }
  if ( (a3 & 0xFF617CEC) != 0 )
  {
    cData = 16;
LABEL_6:
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, cData);
    return (unsigned int)ContextForFile;
  }
  if ( a4 > 2 )
  {
    cData = 32;
    goto LABEL_6;
  }
  if ( !v67 && a2 == 1 )
  {
    cData = 48;
    goto LABEL_6;
  }
  if ( a6 )
  {
    if ( (a3 & 0x8001) == 1 )
    {
      cData = 64;
      goto LABEL_6;
    }
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      cData = 80;
      goto LABEL_6;
    }
    v17 = *(_QWORD *)(a6 + 8);
    if ( v17 && !a4 )
    {
      cData = 96;
      goto LABEL_6;
    }
    v18 = *(_QWORD *)(a6 + 16);
    if ( v18 && a4 != 2 )
    {
      cData = 112;
      goto LABEL_6;
    }
    if ( *(_QWORD *)(a6 + 24) && (*(_QWORD *)a6 || v17 || v18) )
    {
      cData = 128;
      goto LABEL_6;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v50 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v50 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ContextForFile = -1073741431;
    goto LABEL_79;
  }
  v61 = 1;
  if ( a6 )
  {
    if ( *(_QWORD *)a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6);
      ContextForFile = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        SetFailureLocation(a12, 0, 1, VolumeClusterSize, 160);
        goto LABEL_79;
      }
    }
  }
  v21 = CmpAllocate(0x12E8uLL);
  v15 = v21;
  if ( !v21 )
  {
    ContextForFile = -1073741670;
    SetFailureLocation(a12, 0, 1, -1073741670, 176);
    goto LABEL_79;
  }
  CmpHiveInitialize(v21);
  if ( a6 )
  {
    if ( *(_QWORD *)a6 )
    {
      ContextForFile = ObDuplicateObject(
                         PsInitialSystemProcess,
                         *(void **)a6,
                         0LL,
                         (__int64 *)(v15 + 1536),
                         0,
                         512,
                         2,
                         0);
      if ( ContextForFile < 0 )
        goto LABEL_75;
      v22 = *(void **)(v15 + 1536);
      ObjectInformation = 256;
      ZwSetInformationObject(v22, ObjectHandleFlagInformation, &ObjectInformation, 2u);
    }
    v23 = *(void **)(a6 + 24);
    if ( v23 )
    {
      ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v23, 0LL, (__int64 *)(v15 + 1552), 0, 512, 2, 0);
      if ( ContextForFile < 0 )
        goto LABEL_75;
      v24 = *(void **)(v15 + 1552);
      v53[0] = 256;
      ZwSetInformationObject(v24, ObjectHandleFlagInformation, v53, 2u);
    }
    if ( v62 == 1 )
    {
      v25 = *(void **)(a6 + 8);
      if ( !v25 )
        goto LABEL_57;
      v26 = (HANDLE *)(v15 + 1544);
      ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v25, 0LL, (__int64 *)(v15 + 1544), 0, 512, 2, 0);
      if ( ContextForFile < 0 )
        goto LABEL_75;
      v54 = 256;
      v27 = &v54;
      goto LABEL_49;
    }
    if ( v62 == 2 )
    {
      v28 = *(void **)(a6 + 8);
      if ( v28 )
      {
        ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v28, 0LL, (__int64 *)(v15 + 1568), 0, 512, v62, 0);
        if ( ContextForFile < 0 )
          goto LABEL_75;
        v29 = *(void **)(v15 + 1568);
        v55[0] = 256;
        ZwSetInformationObject(v29, ObjectHandleFlagInformation, v55, 2u);
      }
      v30 = *(void **)(a6 + 16);
      if ( v30 )
      {
        v26 = (HANDLE *)(v15 + 1576);
        ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v30, 0LL, (__int64 *)(v15 + 1576), 0, 512, 2, 0);
        if ( ContextForFile < 0 )
          goto LABEL_75;
        v56 = 256;
        v27 = &v56;
LABEL_49:
        ZwSetInformationObject(*v26, ObjectHandleFlagInformation, v27, 2u);
      }
    }
  }
LABEL_57:
  if ( (a8 & 0x8000000) != 0 )
    *(_DWORD *)(v15 + 4152) |= 0x80u;
  if ( a8 < 0 )
    *(_DWORD *)(v15 + 4152) |= 0x800u;
  CmpAttachToRegistryProcess((__int64)v72);
  *(_QWORD *)(v15 + 56) = a12;
  v71[0] = CmpAllocate;
  v71[1] = CmpFree;
  v71[3] = CmpFileWrite;
  v71[4] = CmpFileRead;
  v33 = v58;
  v51 = 1;
  *(_QWORD *)a12 = v15;
  v63 = 0;
  if ( v33 == 2 || v33 == 5 || !v33 && a6 && *(_QWORD *)a6 )
  {
    v35 = *(HANDLE *)a6;
    v57 |= 0x20000u;
    ContextForFile = CmpVolumeManagerGetContextForFile(v31, v35, v32, v15 + 4832);
    if ( ContextForFile < 0 )
      goto LABEL_75;
    if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v15 + 4832)) || (a8 & 0x2000000) != 0 )
      v34 = v57 | 0x800000;
    else
      v34 = v57;
    LOBYTE(v36) = v58 == 0;
    ContextForFile = HvHiveStartFileBacked(
                       v15,
                       v36,
                       v34,
                       v62,
                       (__int64)v71,
                       v61,
                       v49,
                       v64,
                       v66,
                       v69,
                       v68,
                       (__int64)&v63,
                       a12);
    if ( ContextForFile < 0 )
    {
      SetFailureLocation(a12, 0, 1, ContextForFile, 228);
      goto LABEL_75;
    }
  }
  else
  {
    v34 = v57;
    ContextForFile = HvHiveStartMemoryBacked(v15, v67, (__int64)v71, v61, v64, v66, v69, v68, (__int64)&v63, a12);
    if ( ContextForFile < 0 )
    {
      SetFailureLocation(a12, 0, 1, ContextForFile, 232);
      goto LABEL_75;
    }
  }
  if ( (v34 & 0x180000) == 0x80000 && (a8 & 0x800000) == 0 )
  {
    v38 = *(_QWORD *)(v15 + 64);
    if ( *(_DWORD *)(v38 + 24) < 6u || (*(_DWORD *)(v38 + 144) & 2) == 0 )
    {
      ContextForFile = -1073741811;
      goto LABEL_75;
    }
  }
  v39 = v58;
  if ( ((v58 - 1) & 0xFFFFFFFA) == 0 && v58 != 6 )
  {
    ContextForFile = CmCheckRegistry(v15, a8, a12);
    if ( ContextForFile == -2147483606 )
    {
      if ( stru_140425BC0.LevelPlus1 <= 5 )
      {
        ContextForFile = 0;
      }
      else
      {
        ContextForFile = 0;
        if ( TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
        {
          v65 = v40;
          v41 = *(unsigned __int16 *)(a12 + 8);
          v42 = *(unsigned __int16 *)(a12 + 10);
          v80 = a12 + 8;
          v82 = a12 + 12;
          v74 = &v65;
          v83 = 12 * v41;
          v87 = a12 + 108;
          v76 = &v59;
          v88 = 12 * v42;
          v59 = v41;
          v60 = v42;
          v75 = 4LL;
          v77 = 2LL;
          v78 = &v60;
          v79 = 2LL;
          v81 = 2LL;
          v84 = 0;
          v85 = a12 + 10;
          v86 = 2LL;
          v89 = 0;
          TlgWrite(&stru_140425BC0, &unk_14038BBB1, 0LL, 0LL, 9u, &pData);
        }
      }
    }
    if ( ContextForFile < 0 )
    {
      SetFailureLocation(a12, 0, 1, ContextForFile, 240);
      goto LABEL_75;
    }
    v39 = v58;
  }
  if ( (a8 & 0x800000) != 0 )
  {
    v43 = *(_QWORD *)(v15 + 64);
    if ( *(_DWORD *)(v43 + 24) < 6u || (*(_DWORD *)(v43 + 144) & 2) == 0 )
    {
      HvMarkBaseBlockDirty(v15);
      *(_DWORD *)(*(_QWORD *)(v15 + 64) + 24LL) = 6;
      *(_DWORD *)(*(_QWORD *)(v15 + 64) + 144LL) |= 2u;
    }
  }
  CmpReorganizeHive(v15);
  CmpLockRegistry();
  ExAcquirePushLockSharedEx(v15 + 72, 0LL);
  ExAcquirePushLockExclusiveEx(v15 + 80, 0LL);
  v44 = 0;
  if ( v39 )
    v44 = HvCheckAndUpdateHiveBackupTimeStamp(v15);
  else
    *(_BYTE *)(v15 + 191) = 1;
  ContextForFile = v44;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 80));
  KeAbPostRelease(v15 + 80);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v15 + 72));
  KeAbPostRelease(v15 + 72);
  CmpUnlockRegistry();
  if ( ContextForFile < 0 )
  {
    SetFailureLocation(a12, 0, 1, ContextForFile, 256);
LABEL_75:
    if ( v15 )
      CmpDestroyHive((PVOID)v15);
    if ( !v51 )
      goto LABEL_79;
    goto LABEL_78;
  }
  v45 = (_QWORD *)(v15 + 1600);
  if ( (a8 & 0x1000000) != 0 )
  {
    *(_QWORD *)(v15 + 1608) = v15 + 1600;
    *v45 = v45;
  }
  else
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v46 = (_QWORD *)qword_1409AE898;
    if ( *(__int64 **)qword_1409AE898 != &CmpHiveListHead )
      __fastfail(3u);
    *v45 = &CmpHiveListHead;
    *(_QWORD *)(v15 + 1608) = v46;
    *v46 = v45;
    qword_1409AE898 = v15 + 1600;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    CmpRecheckHiveVolumePolicy(v15);
  }
  v47 = v70;
  *(_QWORD *)(v15 + 56) = 0LL;
  *v47 = v15;
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v50 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveInitializeEvent(v15, v58, v64, v63);
  ContextForFile = 0;
LABEL_78:
  KiUnstackDetachProcess((struct _KTHREAD *)v72, 0);
LABEL_79:
  if ( v50 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ContextForFile;
}
