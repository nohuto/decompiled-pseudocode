/*
 * XREFs of CmLoadAppKey @ 0x1405D054C
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteAgg @ 0x140012A30 (_TlgWriteAgg.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExBlockOnAddressPushLock @ 0x140111A80 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14026C518 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B2514 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1405B2690 (LOCK_HIVE_LOAD.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     CmpCmdHiveOpen @ 0x1405B594C (CmpCmdHiveOpen.c)
 *     CmpIsThisSameFile @ 0x1405D04CC (CmpIsThisSameFile.c)
 *     CmpGetNextHive @ 0x1405D10F0 (CmpGetNextHive.c)
 *     CmpDetachFromRegistryProcess @ 0x1405D2AE8 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpGetLastHive @ 0x1406C3594 (CmpGetLastHive.c)
 */

__int64 __fastcall CmLoadAppKey(
        __int64 a1,
        UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        struct _KEVENT *a5,
        POBJECT_HANDLE_INFORMATION a6,
        char a7,
        _QWORD *a8,
        __int64 *a9)
{
  __int16 v9; // di
  char v12; // r14
  __int64 LastHive; // rsi
  _QWORD *v14; // r15
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int KeyCommon; // edi
  struct _KTHREAD *v25; // rax
  __int64 v26; // rbx
  UNICODE_STRING *v27; // rdi
  struct _EX_RUNDOWN_REF *v28; // rax
  __int64 v29; // rbx
  struct _EX_RUNDOWN_REF *v30; // rbx
  void *v31; // rbx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  void *i; // rcx
  __int64 NextHive; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  void *v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // rdi
  __int64 v46; // rcx
  __int64 *v47; // rcx
  struct _KTHREAD *v48; // rax
  __int64 *v49; // rcx
  __int64 **v50; // rax
  unsigned __int64 v51; // rax
  struct _EX_RUNDOWN_REF *v52; // r8
  _QWORD *v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int16 v57; // r9
  unsigned __int16 v58; // r10
  __int64 v59; // r8
  __int64 v60; // r9
  __int16 v61; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v62; // [rsp+52h] [rbp-AEh]
  char v63; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v65; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+64h] [rbp-9Ch] BYREF
  int v67; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v70; // [rsp+80h] [rbp-80h] BYREF
  int v71; // [rsp+88h] [rbp-78h]
  int v72; // [rsp+8Ch] [rbp-74h] BYREF
  int v73; // [rsp+90h] [rbp-70h]
  int v74; // [rsp+94h] [rbp-6Ch]
  int v75; // [rsp+98h] [rbp-68h] BYREF
  int v76; // [rsp+9Ch] [rbp-64h] BYREF
  int v77; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v78; // [rsp+B0h] [rbp-50h] BYREF
  __int64 **v79; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v80; // [rsp+C0h] [rbp-40h] BYREF
  struct _EX_RUNDOWN_REF *v81; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING *v82; // [rsp+D0h] [rbp-30h]
  char v83; // [rsp+D8h] [rbp-28h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-20h] BYREF
  KSPIN_LOCK SpinLock; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v86; // [rsp+100h] [rbp+0h] BYREF
  __int64 v87; // [rsp+108h] [rbp+8h]
  __int64 v88; // [rsp+110h] [rbp+10h]
  __int64 *v89; // [rsp+118h] [rbp+18h]
  PVOID Object; // [rsp+120h] [rbp+20h] BYREF
  PVOID v91; // [rsp+128h] [rbp+28h] BYREF
  _QWORD *v92; // [rsp+130h] [rbp+30h]
  struct _KEVENT *v93; // [rsp+138h] [rbp+38h]
  __int64 v94; // [rsp+140h] [rbp+40h]
  __int64 v95; // [rsp+148h] [rbp+48h] BYREF
  __int64 v96; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v97[56]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v98[44]; // [rsp+190h] [rbp+90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v100; // [rsp+310h] [rbp+210h]
  __int64 v101; // [rsp+318h] [rbp+218h]
  char *v102; // [rsp+320h] [rbp+220h]
  __int64 v103; // [rsp+328h] [rbp+228h]
  __int16 *v104; // [rsp+330h] [rbp+230h]
  __int64 v105; // [rsp+338h] [rbp+238h]
  __int64 *v106; // [rsp+340h] [rbp+240h]
  __int64 v107; // [rsp+348h] [rbp+248h]
  char *v108; // [rsp+350h] [rbp+250h]
  int v109; // [rsp+358h] [rbp+258h]
  int v110; // [rsp+35Ch] [rbp+25Ch]
  char *v111; // [rsp+360h] [rbp+260h]
  __int64 v112; // [rsp+368h] [rbp+268h]
  char *v113; // [rsp+370h] [rbp+270h]
  int v114; // [rsp+378h] [rbp+278h]
  int v115; // [rsp+37Ch] [rbp+27Ch]
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+380h] [rbp+280h] BYREF
  __int64 *v117; // [rsp+3A0h] [rbp+2A0h]
  __int64 v118; // [rsp+3A8h] [rbp+2A8h]
  int *v119; // [rsp+3B0h] [rbp+2B0h]
  __int64 v120; // [rsp+3B8h] [rbp+2B8h]
  char *v121; // [rsp+3C0h] [rbp+2C0h]
  __int64 v122; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v123; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 *v124; // [rsp+3F0h] [rbp+2F0h]
  __int64 v125; // [rsp+3F8h] [rbp+2F8h]
  int *v126; // [rsp+400h] [rbp+300h]
  __int64 v127; // [rsp+408h] [rbp+308h]

  v9 = a3;
  v93 = a5;
  v92 = a8;
  v89 = a9;
  v74 = a3;
  v12 = 0;
  v62 = 0;
  LastHive = 0LL;
  P = 0LL;
  v14 = 0LL;
  v87 = 0LL;
  v94 = a4;
  v88 = (__int64)a6;
  memset(v98, 0, sizeof(v98));
  memset(v97, 0, 0x30uLL);
  v15 = **(_WORD **)(a1 + 16);
  if ( v15 >= 2u )
  {
    for ( LODWORD(v16) = v15 >> 1; (_DWORD)v16; *(_WORD *)v17 -= 2 )
    {
      v17 = *(_QWORD *)(a1 + 16);
      v16 = (unsigned int)(v16 - 1);
      if ( *(_WORD *)(*(_QWORD *)(v17 + 8) + 2 * v16) != 92 )
        break;
    }
  }
  if ( **(_WORD **)(a1 + 16) < 2u )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 3221225865LL;
  }
  v71 = v9 & 0x20;
  v20 = (v71 != 0 ? 119078913 : 51970049) | 0x8000000;
  if ( (v9 & 0x80u) == 0 )
    v20 = v71 != 0 ? 119078913 : 51970049;
  v21 = v20 | 0x10000000;
  if ( (v9 & 0x200) == 0 )
    v21 = v20;
  v67 = v21;
  v73 = v9 & 0x2000;
  v22 = (v73 != 0) | 0x20;
  if ( (v9 & 0x8000) == 0 )
    v22 = (v9 & 0x2000) != 0;
  HIDWORD(v66) = v22;
  v23 = CmpOpenHiveFile(a2, 0, &Handle, &v72, 8u, a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v23;
  if ( v23 == -1073741772 )
  {
    LOBYTE(v62) = 1;
    v82 = a2;
    v83 = 1;
  }
  else
  {
    if ( v23 < 0 )
      goto LABEL_90;
    KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
    v14 = Object;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
      goto LABEL_88;
    v82 = (UNICODE_STRING *)v14[5];
    v83 = 0;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ExInitializePushLock(&SpinLock);
  v81 = (struct _EX_RUNDOWN_REF *)&v80;
  v80 = (unsigned __int64)&v80;
  v25 = KeGetCurrentThread();
  --v25->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v26 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_28:
    if ( *(__int64 **)qword_140439198 == &CmpAppHiveLoadList )
    {
      v78 = &CmpAppHiveLoadList;
      v79 = (__int64 **)qword_140439198;
      *(_QWORD *)qword_140439198 = &v78;
      qword_140439198 = (__int64)&v78;
      ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_30;
    }
    goto LABEL_87;
  }
  v27 = v82;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v26 + 40) )
    {
      if ( *(UNICODE_STRING **)(v26 + 32) == v27 )
        break;
      goto LABEL_27;
    }
    if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(v26 + 32), a2, 1u) )
      break;
LABEL_27:
    v26 = *(_QWORD *)v26;
    if ( (__int64 *)v26 == &CmpAppHiveLoadList )
      goto LABEL_28;
  }
  v28 = *(struct _EX_RUNDOWN_REF **)(v26 + 24);
  v29 = v26 + 16;
  if ( v28->Count != v29 )
    goto LABEL_87;
  v81 = v28;
  v80 = v29;
  v28->Count = (unsigned __int64)&v80;
  *(_QWORD *)(v29 + 8) = &v80;
  v30 = v81;
  ExAcquireRundownProtection_0(v81 + 7);
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  KeWaitForSingleObject(&v30[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v30 + 7);
LABEL_30:
  v31 = (void *)v88;
  v70 = 0LL;
  v61 = 256;
  v32 = CmpCmdHiveOpen(a2, 1, (char *)&v61 + 1, &v70, v67, BYTE4(v66), v88, &v61, v98);
  while ( 1 )
  {
    KeyCommon = v32;
    if ( !v32 )
    {
      KeyCommon = CmpLoadKeyCommon(v70, (_QWORD *)a1, v74, v94, 0LL, v93, a7, v89, SHIBYTE(v61), v61);
      goto LABEL_77;
    }
    if ( v32 != -1073741757 || v71 || v12 )
      goto LABEL_77;
    if ( (_BYTE)v62 )
    {
      v33 = CmpOpenHiveFile(a2, 0, &Handle, &v72, 8u, v31, 0LL, 0LL, (__int64)&P);
      KeyCommon = v33;
      if ( v33 < 0 )
      {
        if ( v33 == -1073741772 )
LABEL_69:
          KeyCommon = -1073741757;
        goto LABEL_77;
      }
      KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v91, 0LL);
      v14 = v91;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
        goto LABEL_77;
    }
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LastHive = CmpGetLastHive();
    if ( LastHive )
      break;
LABEL_67:
    CmpUnlockRegistry(v34);
    UNLOCK_HIVE_LOAD();
    v61 = 256;
    v70 = 0LL;
    v32 = CmpCmdHiveOpen(a2, 1, (char *)&v61 + 1, &v70, v67, BYTE4(v66), (__int64)v31, &v61, v98);
    v12 = 1;
  }
LABEL_39:
  v35 = (unsigned int)CmpActiveAppHiveUnloadCount;
  LODWORD(v64) = CmpActiveAppHiveUnloadCount;
  while ( (_DWORD)v64 )
  {
    CmpUnlockRegistry(v35);
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v64, 4uLL, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LODWORD(v64) = CmpActiveAppHiveUnloadCount;
  }
  for ( i = 0LL; ; i = (void *)v38 )
  {
    NextHive = CmpGetNextHive(i);
    v38 = NextHive;
    if ( !NextHive )
      goto LABEL_65;
    v39 = *(unsigned int *)(NextHive + 4824);
    LODWORD(v66) = v39;
    if ( (_DWORD)v39 )
    {
      CmpUnlockRegistry(v39);
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v38 + 4832, (_QWORD *)(v38 + 4824), &v66, 4uLL, 0LL);
      LOCK_HIVE_LOAD();
      CmpLockRegistryFreezeAware(1);
      v34 = 0xFFFFFFFFLL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 4288), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v38);
      if ( v38 == LastHive )
        goto LABEL_65;
      goto LABEL_39;
    }
    v40 = *(void **)(NextHive + 1536);
    if ( v40 )
    {
      if ( CmpIsThisSameFile((__int64)v14, v40) )
        break;
    }
    if ( v38 == LastHive )
      goto LABEL_63;
  }
  v41 = *(unsigned int *)(v38 + 4152);
  v42 = *(_DWORD *)(v38 + 160) & 0x8000;
  if ( (v41 & 0x20) == 0 || (v41 & 0x40) != 0 )
  {
LABEL_57:
    CmpUnlockRegistry(v41);
    UNLOCK_HIVE_LOAD();
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 4288), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v38);
    goto LABEL_69;
  }
  if ( v73 )
  {
    if ( !v42 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
    {
      CmpUnlockRegistry(v43);
      UNLOCK_HIVE_LOAD();
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 4288), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v38);
      KeyCommon = -1073741790;
      goto LABEL_77;
    }
  }
  else if ( v42 )
  {
    goto LABEL_57;
  }
  CmpAttachToRegistryProcess(v97);
  v44 = *(_QWORD *)(v38 + 2928);
  v87 = v38;
  v86 = 0LL;
  CmpConstructNameWithStatus(v44, &v86);
  v45 = v92;
  *v92 = v86;
  CmpDetachFromRegistryProcess(v97);
  if ( !*v45 )
  {
    CmpUnlockRegistry(v46);
    UNLOCK_HIVE_LOAD();
    KeyCommon = -1073741670;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 4288), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v38);
    goto LABEL_77;
  }
  CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v38 + 2928));
  v47 = v89;
  *v89 = *(_QWORD *)(v38 + 2928);
  CmpUnlockRegistry(v47);
  UNLOCK_HIVE_LOAD();
  KeyCommon = 0;
LABEL_63:
  v34 = 0xFFFFFFFFLL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 4288), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)v38);
LABEL_65:
  if ( !v87 )
  {
    v31 = (void *)v88;
    goto LABEL_67;
  }
  HIBYTE(v62) = 1;
LABEL_77:
  v48 = KeGetCurrentThread();
  --v48->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v49 = v78;
  v50 = v79;
  if ( (__int64 **)v78[1] != &v78 || *v79 != (__int64 *)&v78 )
    goto LABEL_87;
  *v79 = v78;
  v49[1] = (__int64)v50;
  v51 = v80;
  if ( (unsigned __int64 *)v80 == &v80 )
    goto LABEL_84;
  v52 = v81;
  v53 = (_QWORD *)(v80 - 16);
  if ( *(unsigned __int64 **)(v80 + 8) != &v80
    || (unsigned __int64 *)v81->Count != &v80
    || (v81->Count = v80,
        *(_QWORD *)(v51 + 8) = v52,
        v54 = (_QWORD *)qword_140439198,
        *(__int64 **)qword_140439198 != &CmpAppHiveLoadList) )
  {
LABEL_87:
    __fastfail(3u);
  }
  *v53 = &CmpAppHiveLoadList;
  v53[1] = v54;
  *v54 = v53;
  qword_140439198 = (__int64)v53;
LABEL_84:
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  KeSetEvent(&Event, 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&SpinLock);
  if ( LastHive && _InterlockedExchangeAdd((volatile signed __int32 *)(LastHive + 4288), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)LastHive);
LABEL_88:
  if ( v14 )
    ObfDereferenceObject(v14);
LABEL_90:
  if ( P )
    ExFreePoolWithTag(P, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( KeyCommon >= 0 )
  {
    if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
    {
      v63 = HIBYTE(v62);
      v117 = &v96;
      v119 = &v77;
      v121 = &v63;
      v96 = 1LL;
      v77 = KeyCommon;
      v118 = 8LL;
      v120 = 4LL;
      v122 = 1LL;
      TlgWriteAgg((__int64)&stru_140400AA0, (unsigned __int8 *)dword_14036CCEE, v59, v60, 5u, &v116);
    }
  }
  else if ( LOWORD(v98[1]) || WORD1(v98[1]) )
  {
    if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
    {
      v76 = KeyCommon;
      v100 = &v76;
      v102 = (char *)&v64 + 4;
      v104 = (__int16 *)&v65;
      v106 = &v98[1];
      v108 = (char *)&v98[1] + 4;
      WORD2(v64) = v58;
      v65 = v57;
      v101 = 4LL;
      v103 = 2LL;
      v111 = (char *)&v98[1] + 2;
      v109 = 12 * v58;
      v113 = (char *)&v98[13] + 4;
      v105 = 2LL;
      v107 = 2LL;
      v110 = 0;
      v112 = 2LL;
      v114 = 12 * v57;
      v115 = 0;
      TlgWrite(&stru_140400AA0, &unk_14036CD48, 0LL, 0LL, 9u, &pData);
    }
  }
  else if ( stru_140400AA0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
    {
      v95 = 1LL;
      v124 = &v95;
      v126 = &v75;
      v75 = KeyCommon;
      v125 = 8LL;
      v127 = 4LL;
      TlgWriteAgg((__int64)&stru_140400AA0, (unsigned __int8 *)dword_14036CE22, v55, v56, 4u, &v123);
    }
  }
  return (unsigned int)KeyCommon;
}
