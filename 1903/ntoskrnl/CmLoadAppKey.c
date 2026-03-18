/*
 * XREFs of CmLoadAppKey @ 0x14063744C
 * Callers:
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExInitializePushLock @ 0x140082020 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     _TlgWriteAgg @ 0x14008A7EC (_TlgWriteAgg.c)
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     ExBlockOnAddressPushLock @ 0x14010B950 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FD60 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     CmpGetNextHive @ 0x140637EC0 (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x140637F64 (CmpIsThisSameFile.c)
 *     CmpUnlockAppHiveLoadList @ 0x140637FE4 (CmpUnlockAppHiveLoadList.c)
 *     CmpLockAppHiveLoadList @ 0x140638010 (CmpLockAppHiveLoadList.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     CmpConstructName @ 0x140655720 (CmpConstructName.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140656728 (CmpReferenceKeyControlBlockUnsafe.c)
 *     UNLOCK_HIVE_LOAD @ 0x140661F00 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140662090 (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceHive @ 0x1406629A8 (CmpDereferenceHive.c)
 *     CmpCmdHiveOpen @ 0x14069010C (CmpCmdHiveOpen.c)
 *     CmpGetLastHive @ 0x1406E3030 (CmpGetLastHive.c)
 *     CmpQuitNextHive @ 0x1407283F8 (CmpQuitNextHive.c)
 */

__int64 __fastcall CmLoadAppKey(
        __int64 a1,
        UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        struct _KEVENT *a5,
        POBJECT_HANDLE_INFORMATION a6,
        char a7,
        __int64 *a8,
        ULONG_PTR *a9)
{
  __int16 v10; // di
  char v12; // r14
  __int64 LastHive; // rsi
  _QWORD *v14; // r15
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int KeyCommon; // ebx
  __int64 v24; // rbx
  __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rbx
  struct _EX_RUNDOWN_REF *v28; // rbx
  void *v29; // rdi
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  void *i; // rcx
  __int64 NextHive; // rax
  __int64 v36; // rdi
  __int64 v37; // rcx
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 *v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int16 v51; // r9
  unsigned __int16 v52; // r10
  __int64 v53; // r8
  __int64 v54; // r9
  __int16 v55; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v56; // [rsp+52h] [rbp-AEh]
  char v57; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v58; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v59; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+64h] [rbp-9Ch] BYREF
  int v61; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  char *v63; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+8Ch] [rbp-74h] BYREF
  int v67; // [rsp+90h] [rbp-70h]
  int v68; // [rsp+94h] [rbp-6Ch]
  int v69; // [rsp+98h] [rbp-68h] BYREF
  int v70; // [rsp+9Ch] [rbp-64h] BYREF
  int v71; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v72[80]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  ULONG_PTR *v75; // [rsp+110h] [rbp+10h]
  PVOID Object; // [rsp+118h] [rbp+18h] BYREF
  PVOID v77; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v78; // [rsp+128h] [rbp+28h]
  struct _KEVENT *v79; // [rsp+130h] [rbp+30h]
  __int64 v80; // [rsp+138h] [rbp+38h]
  __int64 v81; // [rsp+140h] [rbp+40h] BYREF
  __int64 v82; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v83[48]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v84[44]; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2E0h] [rbp+1E0h] BYREF
  int *v86; // [rsp+300h] [rbp+200h]
  __int64 v87; // [rsp+308h] [rbp+208h]
  char *v88; // [rsp+310h] [rbp+210h]
  __int64 v89; // [rsp+318h] [rbp+218h]
  __int16 *v90; // [rsp+320h] [rbp+220h]
  __int64 v91; // [rsp+328h] [rbp+228h]
  __int64 *v92; // [rsp+330h] [rbp+230h]
  __int64 v93; // [rsp+338h] [rbp+238h]
  char *v94; // [rsp+340h] [rbp+240h]
  int v95; // [rsp+348h] [rbp+248h]
  int v96; // [rsp+34Ch] [rbp+24Ch]
  char *v97; // [rsp+350h] [rbp+250h]
  __int64 v98; // [rsp+358h] [rbp+258h]
  char *v99; // [rsp+360h] [rbp+260h]
  int v100; // [rsp+368h] [rbp+268h]
  int v101; // [rsp+36Ch] [rbp+26Ch]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+370h] [rbp+270h] BYREF
  __int64 *v103; // [rsp+390h] [rbp+290h]
  __int64 v104; // [rsp+398h] [rbp+298h]
  int *v105; // [rsp+3A0h] [rbp+2A0h]
  __int64 v106; // [rsp+3A8h] [rbp+2A8h]
  char *v107; // [rsp+3B0h] [rbp+2B0h]
  __int64 v108; // [rsp+3B8h] [rbp+2B8h]
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 *v110; // [rsp+3E0h] [rbp+2E0h]
  __int64 v111; // [rsp+3E8h] [rbp+2E8h]
  int *v112; // [rsp+3F0h] [rbp+2F0h]
  __int64 v113; // [rsp+3F8h] [rbp+2F8h]

  v79 = a5;
  v10 = a3;
  v78 = a8;
  v68 = a3;
  v75 = a9;
  v80 = a4;
  v74 = (__int64)a6;
  memset(v72, 0, sizeof(v72));
  v56 = 0;
  P = 0LL;
  v12 = 0;
  LastHive = 0LL;
  v73 = 0LL;
  v14 = 0LL;
  memset(v84, 0, sizeof(v84));
  memset(v83, 0, sizeof(v83));
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
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
    return 3221225865LL;
  v65 = v10 & 0x20;
  v19 = (v65 != 0 ? 118030337 : 50921473) | 0x8000000;
  if ( (v10 & 0x80u) == 0 )
    v19 = v65 != 0 ? 118030337 : 50921473;
  v20 = v19 | 0x10000000;
  if ( (v10 & 0x200) == 0 )
    v20 = v19;
  v61 = v20;
  v67 = v10 & 0x2000;
  v21 = (v67 != 0) | 0x20;
  if ( (v10 & 0x8000) == 0 )
    v21 = (v10 & 0x2000) != 0;
  HIDWORD(v60) = v21;
  v22 = CmpOpenHiveFile(a2, 0, &Handle, &v66, 8u, a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v22;
  if ( v22 == -1073741772 )
  {
    LOBYTE(v56) = 1;
    *(_QWORD *)&v72[32] = a2;
    v72[40] = 1;
  }
  else
  {
    if ( v22 < 0 )
      goto LABEL_82;
    KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
    v14 = Object;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
      goto LABEL_80;
    *(_QWORD *)&v72[32] = v14[5];
    v72[40] = 0;
  }
  KeInitializeEvent((PRKEVENT)&v72[48], NotificationEvent, 0);
  ExInitializePushLock((PKSPIN_LOCK)&v72[72]);
  *(_QWORD *)&v72[24] = &v72[16];
  *(_QWORD *)&v72[16] = &v72[16];
  CmpLockAppHiveLoadList();
  v24 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_28:
    if ( *(__int64 **)qword_140463BA8 == &CmpAppHiveLoadList )
    {
      *(_QWORD *)v72 = &CmpAppHiveLoadList;
      *(_QWORD *)&v72[8] = qword_140463BA8;
      *(_QWORD *)qword_140463BA8 = v72;
      qword_140463BA8 = (__int64)v72;
      CmpUnlockAppHiveLoadList();
      goto LABEL_30;
    }
    goto LABEL_79;
  }
  v25 = *(_QWORD *)&v72[32];
  while ( 1 )
  {
    if ( !*(_BYTE *)(v24 + 40) )
    {
      if ( *(_QWORD *)(v24 + 32) == v25 )
        break;
      goto LABEL_27;
    }
    if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(v24 + 32), a2, 1u) )
      break;
LABEL_27:
    v24 = *(_QWORD *)v24;
    if ( (__int64 *)v24 == &CmpAppHiveLoadList )
      goto LABEL_28;
  }
  v26 = *(_QWORD **)(v24 + 24);
  v27 = v24 + 16;
  if ( *v26 != v27 )
    goto LABEL_79;
  *(_QWORD *)&v72[24] = v26;
  *(_QWORD *)&v72[16] = v27;
  *v26 = &v72[16];
  *(_QWORD *)(v27 + 8) = &v72[16];
  v28 = *(struct _EX_RUNDOWN_REF **)&v72[24];
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&v72[24] + 56LL));
  CmpUnlockAppHiveLoadList();
  KeWaitForSingleObject(&v28[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v28 + 7);
LABEL_30:
  v29 = (void *)v74;
  v63 = 0LL;
  v55 = 256;
  v30 = CmpCmdHiveOpen(a2, v61, SHIDWORD(v60), v74, (__int64)&v55, (__int64)v84);
  while ( 1 )
  {
    KeyCommon = v30;
    if ( !v30 )
    {
      KeyCommon = CmpLoadKeyCommon(v63, (_QWORD *)a1, v68, v80, 0LL, v79, a7, v75, SHIBYTE(v55), v55);
      goto LABEL_70;
    }
    if ( v30 != -1073741757 || v65 || v12 )
      goto LABEL_70;
    if ( (_BYTE)v56 )
    {
      v31 = CmpOpenHiveFile(a2, 0, &Handle, &v66, 8u, v29, 0LL, 0LL, (__int64)&P);
      KeyCommon = v31;
      if ( v31 < 0 )
      {
        if ( v31 == -1073741772 )
LABEL_65:
          KeyCommon = -1073741757;
        goto LABEL_70;
      }
      KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v77, 0LL);
      v14 = v77;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
        goto LABEL_70;
    }
    LOCK_HIVE_LOAD();
    LOBYTE(v32) = 1;
    CmpLockRegistryFreezeAware(v32);
    LastHive = CmpGetLastHive();
    if ( LastHive )
      break;
LABEL_63:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v55 = 256;
    v63 = 0LL;
    v30 = CmpCmdHiveOpen(a2, v61, SHIDWORD(v60), (__int64)v29, (__int64)&v55, (__int64)v84);
    v12 = 1;
  }
LABEL_39:
  LODWORD(v58) = CmpActiveAppHiveUnloadCount;
  while ( (_DWORD)v58 )
  {
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v58, 4uLL, 0LL);
    LOCK_HIVE_LOAD();
    LOBYTE(v33) = 1;
    CmpLockRegistryFreezeAware(v33);
    LODWORD(v58) = CmpActiveAppHiveUnloadCount;
  }
  for ( i = 0LL; ; i = (void *)v36 )
  {
    NextHive = CmpGetNextHive(i);
    v36 = NextHive;
    if ( !NextHive )
      goto LABEL_61;
    LODWORD(v60) = *(_DWORD *)(NextHive + 4808);
    if ( (_DWORD)v60 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v36 + 4816, (_QWORD *)(v36 + 4808), &v60, 4uLL, 0LL);
      LOCK_HIVE_LOAD();
      LOBYTE(v37) = 1;
      CmpLockRegistryFreezeAware(v37);
      CmpQuitNextHive(v36);
      if ( v36 != LastHive )
        goto LABEL_39;
      goto LABEL_61;
    }
    if ( *(_QWORD *)(NextHive + 1536) && (unsigned __int8)CmpIsThisSameFile(v14) )
      break;
    if ( v36 == LastHive )
      goto LABEL_60;
  }
  v38 = *(_DWORD *)(v36 + 4152);
  v39 = *(_DWORD *)(v36 + 160) & 0x8000;
  if ( (v38 & 0x20) == 0 || (v38 & 0x40) != 0 )
    goto LABEL_55;
  if ( v67 )
  {
    if ( !v39 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      CmpQuitNextHive(v36);
      KeyCommon = -1073741790;
      goto LABEL_70;
    }
  }
  else if ( v39 )
  {
LABEL_55:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    CmpQuitNextHive(v36);
    goto LABEL_65;
  }
  CmpAttachToRegistryProcess((__int64)v83);
  v40 = *(_QWORD *)(v36 + 2928);
  v73 = v36;
  v41 = CmpConstructName(v40);
  v42 = v78;
  *v78 = v41;
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v83);
  if ( !*v42 )
  {
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    KeyCommon = -1073741670;
    CmpQuitNextHive(v36);
    goto LABEL_70;
  }
  CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v36 + 2928));
  *v75 = *(_QWORD *)(v36 + 2928);
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  KeyCommon = 0;
LABEL_60:
  CmpQuitNextHive(v36);
LABEL_61:
  if ( !v73 )
  {
    v29 = (void *)v74;
    goto LABEL_63;
  }
  HIBYTE(v56) = 1;
LABEL_70:
  CmpLockAppHiveLoadList();
  v43 = *(_QWORD *)v72;
  v44 = *(_QWORD *)&v72[8];
  if ( *(_BYTE **)(*(_QWORD *)v72 + 8LL) != v72 || **(_BYTE ***)&v72[8] != v72 )
    goto LABEL_79;
  **(_QWORD **)&v72[8] = *(_QWORD *)v72;
  *(_QWORD *)(v43 + 8) = v44;
  v45 = *(_QWORD *)&v72[16];
  if ( *(_BYTE **)&v72[16] != &v72[16] )
  {
    v46 = *(_QWORD *)&v72[24];
    v47 = (_QWORD *)(*(_QWORD *)&v72[16] - 16LL);
    if ( *(_BYTE **)(*(_QWORD *)&v72[16] + 8LL) == &v72[16] && **(_BYTE ***)&v72[24] == &v72[16] )
    {
      **(_QWORD **)&v72[24] = *(_QWORD *)&v72[16];
      *(_QWORD *)(v45 + 8) = v46;
      v48 = (_QWORD *)qword_140463BA8;
      if ( *(__int64 **)qword_140463BA8 == &CmpAppHiveLoadList )
      {
        *v47 = &CmpAppHiveLoadList;
        v47[1] = v48;
        *v48 = v47;
        qword_140463BA8 = (__int64)v47;
        goto LABEL_77;
      }
    }
LABEL_79:
    __fastfail(3u);
  }
LABEL_77:
  CmpUnlockAppHiveLoadList();
  KeSetEvent((PRKEVENT)&v72[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v72[72]);
  if ( LastHive )
    CmpDereferenceHive(LastHive);
LABEL_80:
  if ( v14 )
    ObfDereferenceObject(v14);
LABEL_82:
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmpReleaseShutdownRundown();
  if ( KeyCommon >= 0 )
  {
    if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
    {
      v57 = HIBYTE(v56);
      v103 = &v82;
      v105 = &v71;
      v107 = &v57;
      v82 = 1LL;
      v71 = KeyCommon;
      v104 = 8LL;
      v106 = 4LL;
      v108 = 1LL;
      TlgWriteAgg((__int64)&stru_140425BC0, (unsigned __int8 *)dword_14038B74C, v53, v54, 5u, &v102);
    }
  }
  else if ( LODWORD(v84[1]) )
  {
    if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
    {
      v70 = KeyCommon;
      v86 = &v70;
      v88 = (char *)&v58 + 4;
      v90 = (__int16 *)&v59;
      v92 = &v84[1];
      v94 = (char *)&v84[1] + 4;
      WORD2(v58) = v52;
      v59 = v51;
      v87 = 4LL;
      v89 = 2LL;
      v97 = (char *)&v84[1] + 2;
      v95 = 12 * v52;
      v99 = (char *)&v84[13] + 4;
      v91 = 2LL;
      v93 = 2LL;
      v96 = 0;
      v98 = 2LL;
      v100 = 12 * v51;
      v101 = 0;
      TlgWrite(&stru_140425BC0, &unk_14038B7A6, 0LL, 0LL, 9u, &pData);
    }
  }
  else if ( stru_140425BC0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
    {
      v81 = 1LL;
      v110 = &v81;
      v112 = &v69;
      v69 = KeyCommon;
      v111 = 8LL;
      v113 = 4LL;
      TlgWriteAgg((__int64)&stru_140425BC0, (unsigned __int8 *)dword_14038B880, v49, v50, 4u, &v109);
    }
  }
  return (unsigned int)KeyCommon;
}
