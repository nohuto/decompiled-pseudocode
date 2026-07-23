/*
 * XREFs of CmpCreateHive @ 0x1405A7574
 * Callers:
 *     CmpInitHiveFromFile @ 0x1405B4D68 (CmpInitHiveFromFile.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x140803A40 (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x1409C4B30 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x1409C4CAC (CmpInitializePreloadedHive.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x14000EDFC (CmpRecheckHiveVolumePolicy.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpAdjustFileCFSafety @ 0x1401B33B4 (CmpAdjustFileCFSafety.c)
 *     ZwSetInformationObject @ 0x1401B8E70 (ZwSetInformationObject.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     CmpGetVolumeClusterSize @ 0x1405A5094 (CmpGetVolumeClusterSize.c)
 *     CmpVolumeManagerGetContextForFile @ 0x1405A5298 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1405A59F0 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvHiveStartFileBacked @ 0x1405A5A3C (HvHiveStartFileBacked.c)
 *     CmpReorganizeHive @ 0x1405A7F70 (CmpReorganizeHive.c)
 *     CmpHiveInitialize @ 0x1405A817C (CmpHiveInitialize.c)
 *     CmpAllocate @ 0x1405A82D0 (CmpAllocate.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1405A83BC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x1405A948C (CmCheckRegistry.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x1406CC1D4 (HvMarkBaseBlockDirty.c)
 *     HvHiveStartMemoryBacked @ 0x14073DCFC (HvHiveStartMemoryBacked.c)
 *     CmpLogHiveInitializeEvent @ 0x1407ECD3C (CmpLogHiveInitializeEvent.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 */

__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        int a8,
        _OWORD *a9,
        _OWORD *a10,
        _BYTE *a11,
        __int64 a12)
{
  ULONG_PTR v15; // r14
  int started; // edi
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS VolumeClusterSize; // eax
  __int64 v21; // rax
  void *v22; // rcx
  __int64 v23; // rdx
  void *v24; // rcx
  __int64 v25; // rdx
  void *v26; // rcx
  __int16 *v27; // r8
  __int64 v28; // rdx
  void *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v36; // rax
  unsigned int v37; // edi
  int v38; // r9d
  int v39; // ecx
  int v40; // r8d
  __int64 v41; // rax
  int v42; // eax
  _QWORD *v43; // rbx
  _QWORD *v44; // rax
  ULONG_PTR *v45; // rax
  int cData; // [rsp+20h] [rbp-E0h]
  int v47; // [rsp+30h] [rbp-D0h]
  BOOLEAN v48; // [rsp+70h] [rbp-90h]
  char v49; // [rsp+71h] [rbp-8Fh]
  __int16 ObjectInformation; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v51[2]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v52; // [rsp+7Ch] [rbp-84h] BYREF
  __int16 v53[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v54; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v55; // [rsp+88h] [rbp-78h]
  __int16 v56; // [rsp+8Ch] [rbp-74h] BYREF
  __int16 v57; // [rsp+90h] [rbp-70h] BYREF
  int v58; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v59; // [rsp+98h] [rbp-68h]
  unsigned int v60; // [rsp+9Ch] [rbp-64h] BYREF
  int v61; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-58h]
  _OWORD *v63; // [rsp+B0h] [rbp-50h]
  __int64 v64; // [rsp+B8h] [rbp-48h]
  _BYTE *v65; // [rsp+C0h] [rbp-40h]
  _OWORD *v66; // [rsp+C8h] [rbp-38h]
  ULONG_PTR *v67; // [rsp+D0h] [rbp-30h]
  _QWORD v68[5]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v69[48]; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  int *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  __int16 *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  __int16 *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  __int64 v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  __int64 v79; // [rsp+190h] [rbp+90h]
  int v80; // [rsp+198h] [rbp+98h]
  int v81; // [rsp+19Ch] [rbp+9Ch]
  __int64 v82; // [rsp+1A0h] [rbp+A0h]
  __int64 v83; // [rsp+1A8h] [rbp+A8h]
  __int64 v84; // [rsp+1B0h] [rbp+B0h]
  int v85; // [rsp+1B8h] [rbp+B8h]
  int v86; // [rsp+1BCh] [rbp+BCh]

  v64 = a5;
  v62 = a7;
  v15 = 0LL;
  v63 = a9;
  v66 = a10;
  v55 = a2;
  v67 = a1;
  v65 = a11;
  v59 = a4;
  v48 = 0;
  v49 = 0;
  memset(v69, 0, sizeof(v69));
  if ( a2 > 2 && a2 != 5 )
  {
    started = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, 0);
    goto LABEL_80;
  }
  if ( (a3 & 0xFF617CEC) != 0 )
  {
    cData = 16;
LABEL_6:
    started = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, cData);
    return (unsigned int)started;
  }
  if ( a4 > 2 )
  {
    cData = 32;
    goto LABEL_6;
  }
  if ( !v64 && a2 == 1 )
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
    if ( !*a6 && (a6[1] || a6[2]) )
    {
      cData = 80;
      goto LABEL_6;
    }
    v17 = a6[1];
    if ( v17 && !a4 )
    {
      cData = 96;
      goto LABEL_6;
    }
    v18 = a6[2];
    if ( v18 && a4 != 2 )
    {
      cData = 112;
      goto LABEL_6;
    }
    if ( a6[3] && (*a6 || v17 || v18) )
    {
      cData = 128;
      goto LABEL_6;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v48 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v48 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    started = -1073741431;
    goto LABEL_84;
  }
  v58 = 1;
  if ( a6 )
  {
    if ( *a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize((HANDLE)*a6, &v58);
      started = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        SetFailureLocation(a12, 0, 1, VolumeClusterSize, 160);
        goto LABEL_84;
      }
    }
  }
  v21 = CmpAllocate(0x12F8uLL);
  v15 = v21;
  if ( !v21 )
  {
    started = -1073741670;
    SetFailureLocation(a12, 0, 1, -1073741670, 176);
    goto LABEL_84;
  }
  CmpHiveInitialize(v21);
  if ( !a6 )
    goto LABEL_57;
  if ( *a6 )
  {
    v47 = 2;
    started = ObDuplicateObject(PsInitialSystemProcess, *a6, 0LL, v15 + 1536, 0, 512);
    if ( started < 0 )
      goto LABEL_80;
    v22 = *(void **)(v15 + 1536);
    ObjectInformation = 256;
    ZwSetInformationObject(v22, ObjectHandleFlagInformation, &ObjectInformation, 2u);
  }
  v23 = a6[3];
  if ( v23 )
  {
    v47 = 2;
    started = ObDuplicateObject(PsInitialSystemProcess, v23, 0LL, v15 + 1552, 0, 512);
    if ( started < 0 )
      goto LABEL_80;
    v24 = *(void **)(v15 + 1552);
    v51[0] = 256;
    ZwSetInformationObject(v24, ObjectHandleFlagInformation, v51, 2u);
  }
  if ( v59 != 1 )
  {
    if ( v59 != 2 )
      goto LABEL_57;
    v28 = a6[1];
    if ( v28 )
    {
      v47 = v59;
      started = ObDuplicateObject(PsInitialSystemProcess, v28, 0LL, v15 + 1568, 0, 512);
      if ( started < 0 )
        goto LABEL_80;
      v29 = *(void **)(v15 + 1568);
      v53[0] = 256;
      ZwSetInformationObject(v29, ObjectHandleFlagInformation, v53, 2u);
    }
    v30 = a6[2];
    if ( !v30 )
      goto LABEL_57;
    v47 = 2;
    started = ObDuplicateObject(PsInitialSystemProcess, v30, 0LL, v15 + 1576, 0, 512);
    if ( started < 0 )
      goto LABEL_80;
    v26 = *(void **)(v15 + 1576);
    v27 = &v54;
    v54 = 256;
    goto LABEL_49;
  }
  v25 = a6[1];
  if ( v25 )
  {
    v47 = 2;
    started = ObDuplicateObject(PsInitialSystemProcess, v25, 0LL, v15 + 1544, 0, 512);
    if ( started < 0 )
      goto LABEL_80;
    v26 = *(void **)(v15 + 1544);
    v27 = &v52;
    v52 = 256;
LABEL_49:
    ZwSetInformationObject(v26, ObjectHandleFlagInformation, v27, 2u);
  }
LABEL_57:
  if ( (a8 & 0x8000000) != 0 )
    *(_DWORD *)(v15 + 4152) |= 0x80u;
  if ( a8 < 0 )
    *(_DWORD *)(v15 + 4152) |= 0x800u;
  CmpAttachToRegistryProcess(v69);
  *(_QWORD *)(v15 + 56) = a12;
  v68[0] = CmpAllocate;
  v68[1] = CmpFree;
  v68[3] = CmpFileWrite;
  v68[4] = CmpFileRead;
  v33 = v55;
  v49 = 1;
  *(_QWORD *)a12 = v15;
  v60 = 0;
  if ( v33 != 2 && v33 != 5 && (v33 || !a6 || !*a6) )
  {
    started = HvHiveStartMemoryBacked(
                v15,
                v64,
                (__int64)v68,
                v58,
                v62,
                (__int64)v63,
                (__int64)v66,
                (__int64)v65,
                (__int64)&v60,
                a12);
    if ( started < 0 )
    {
      SetFailureLocation(a12, 0, 1, started, 232);
      goto LABEL_80;
    }
    goto LABEL_87;
  }
  if ( CmpUseSectionBackedHives )
    a3 |= 0x20000u;
  started = CmpVolumeManagerGetContextForFile(v31, (void *)*a6, v32, (PPRIVILEGE_SET *)(v15 + 4848));
  if ( started < 0 )
  {
LABEL_80:
    if ( v15 )
      CmpDestroyHive((PVOID)v15);
    if ( !v49 )
      goto LABEL_84;
    goto LABEL_83;
  }
  if ( CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v15 + 4848)) || (a3 & 0x8000) != 0 || (a8 & 0x40) != 0 )
    goto LABEL_76;
  if ( (a8 & 0x20) != 0 )
    goto LABEL_78;
  if ( (int)CmpAdjustFileCFSafety((HANDLE)*a6, 1) < 0 )
LABEL_76:
    a3 |= 0x800000u;
  else
    *(_DWORD *)(v15 + 4152) |= 0x10000u;
LABEL_78:
  LOBYTE(v34) = v55 == 0;
  started = HvHiveStartFileBacked(v15, v34, a3, v59, v68, v58, v47, v62, v63, v66, v65, &v60, a12);
  if ( started < 0 )
  {
    SetFailureLocation(a12, 0, 1, started, 228);
    goto LABEL_80;
  }
LABEL_87:
  if ( (a3 & 0x180000) == 0x80000 && (a8 & 0x800000) == 0 )
  {
    v36 = *(_QWORD *)(v15 + 64);
    if ( *(_DWORD *)(v36 + 24) < 6u || (*(_DWORD *)(v36 + 144) & 2) == 0 )
    {
      started = -1073741811;
      goto LABEL_80;
    }
  }
  v37 = v55;
  if ( ((v55 - 1) & 0xFFFFFFFA) == 0 && v55 != 6 )
  {
    started = CmCheckRegistry(v15, (unsigned int)a8, a12);
    if ( started == -2147483606 )
    {
      if ( stru_140400AA0.LevelPlus1 <= 5 )
      {
        started = 0;
      }
      else
      {
        started = 0;
        if ( TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
        {
          v61 = v38;
          v39 = *(unsigned __int16 *)(a12 + 8);
          v40 = *(unsigned __int16 *)(a12 + 10);
          v77 = a12 + 8;
          v79 = a12 + 12;
          v71 = &v61;
          v80 = 12 * v39;
          v84 = a12 + 108;
          v73 = &v56;
          v85 = 12 * v40;
          v56 = v39;
          v57 = v40;
          v72 = 4LL;
          v74 = 2LL;
          v75 = &v57;
          v76 = 2LL;
          v78 = 2LL;
          v81 = 0;
          v82 = a12 + 10;
          v83 = 2LL;
          v86 = 0;
          TlgWrite(&stru_140400AA0, &unk_14036D153, 0LL, 0LL, 9u, &pData);
        }
      }
    }
    if ( started < 0 )
    {
      SetFailureLocation(a12, 0, 1, started, 240);
      goto LABEL_80;
    }
    v37 = v55;
  }
  if ( (a8 & 0x800000) != 0 )
  {
    v41 = *(_QWORD *)(v15 + 64);
    if ( *(_DWORD *)(v41 + 24) < 6u || (*(_DWORD *)(v41 + 144) & 2) == 0 )
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
  v42 = 0;
  if ( v37 )
    v42 = HvCheckAndUpdateHiveBackupTimeStamp(v15);
  else
    *(_BYTE *)(v15 + 191) = 1;
  started = v42;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 80));
  KeAbPostRelease(v15 + 80);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v15 + 72));
  KeAbPostRelease(v15 + 72);
  CmpUnlockRegistry();
  if ( started < 0 )
  {
    SetFailureLocation(a12, 0, 1, started, 256);
    goto LABEL_80;
  }
  v43 = (_QWORD *)(v15 + 1600);
  if ( (a8 & 0x1000000) != 0 )
  {
    *(_QWORD *)(v15 + 1608) = v15 + 1600;
    *v43 = v43;
  }
  else
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v44 = (_QWORD *)qword_14096F7D0;
    if ( *(__int64 **)qword_14096F7D0 != &CmpHiveListHead )
      __fastfail(3u);
    *v43 = &CmpHiveListHead;
    *(_QWORD *)(v15 + 1608) = v44;
    *v44 = v43;
    qword_14096F7D0 = v15 + 1600;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    CmpRecheckHiveVolumePolicy(v15);
  }
  v45 = v67;
  *(_QWORD *)(v15 + 56) = 0LL;
  *v45 = v15;
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v48 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveInitializeEvent(v15, v55, v62, v60);
  started = 0;
LABEL_83:
  KiUnstackDetachProcess((__int64)v69, 0LL);
LABEL_84:
  if ( v48 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
