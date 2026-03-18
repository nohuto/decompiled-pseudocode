/*
 * XREFs of CmLoadAppKey @ 0x14063A4D4
 * Callers:
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExInitializePushLock @ 0x140082420 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     _TlgWriteAgg @ 0x14008BAEC (_TlgWriteAgg.c)
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     ExBlockOnAddressPushLock @ 0x1400F8900 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FAC0 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     UNLOCK_HIVE_LOAD @ 0x140638630 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140638760 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406387C0 (LOCK_HIVE_LOAD.c)
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 *     CmpGetNextHive @ 0x14063AF48 (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x14063AFEC (CmpIsThisSameFile.c)
 *     CmpUnlockAppHiveLoadList @ 0x14063B06C (CmpUnlockAppHiveLoadList.c)
 *     CmpLockAppHiveLoadList @ 0x14063B098 (CmpLockAppHiveLoadList.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     CmpConstructName @ 0x140668820 (CmpConstructName.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140669828 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpCmdHiveOpen @ 0x14068367C (CmpCmdHiveOpen.c)
 *     CmpDereferenceHive @ 0x1406B9778 (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x1406E448C (CmpGetLastHive.c)
 *     CmpQuitNextHive @ 0x140729768 (CmpQuitNextHive.c)
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
  void *i; // rcx
  __int64 NextHive; // rax
  __int64 v34; // rdi
  int v35; // ecx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int16 v48; // r9
  unsigned __int16 v49; // r10
  __int64 v50; // r8
  __int64 v51; // r9
  __int16 v52; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v53; // [rsp+52h] [rbp-AEh]
  char v54; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v55; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+64h] [rbp-9Ch] BYREF
  int v58; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  char *v60; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+8Ch] [rbp-74h] BYREF
  int v64; // [rsp+90h] [rbp-70h]
  int v65; // [rsp+94h] [rbp-6Ch]
  int v66; // [rsp+98h] [rbp-68h] BYREF
  int v67; // [rsp+9Ch] [rbp-64h] BYREF
  int v68; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v69[80]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  ULONG_PTR *v72; // [rsp+110h] [rbp+10h]
  PVOID Object; // [rsp+118h] [rbp+18h] BYREF
  PVOID v74; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v75; // [rsp+128h] [rbp+28h]
  struct _KEVENT *v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  __int64 v78; // [rsp+140h] [rbp+40h] BYREF
  __int64 v79; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v80[48]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v81[44]; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2E0h] [rbp+1E0h] BYREF
  int *v83; // [rsp+300h] [rbp+200h]
  __int64 v84; // [rsp+308h] [rbp+208h]
  char *v85; // [rsp+310h] [rbp+210h]
  __int64 v86; // [rsp+318h] [rbp+218h]
  __int16 *v87; // [rsp+320h] [rbp+220h]
  __int64 v88; // [rsp+328h] [rbp+228h]
  __int64 *v89; // [rsp+330h] [rbp+230h]
  __int64 v90; // [rsp+338h] [rbp+238h]
  char *v91; // [rsp+340h] [rbp+240h]
  int v92; // [rsp+348h] [rbp+248h]
  int v93; // [rsp+34Ch] [rbp+24Ch]
  char *v94; // [rsp+350h] [rbp+250h]
  __int64 v95; // [rsp+358h] [rbp+258h]
  char *v96; // [rsp+360h] [rbp+260h]
  int v97; // [rsp+368h] [rbp+268h]
  int v98; // [rsp+36Ch] [rbp+26Ch]
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+370h] [rbp+270h] BYREF
  __int64 *v100; // [rsp+390h] [rbp+290h]
  __int64 v101; // [rsp+398h] [rbp+298h]
  int *v102; // [rsp+3A0h] [rbp+2A0h]
  __int64 v103; // [rsp+3A8h] [rbp+2A8h]
  char *v104; // [rsp+3B0h] [rbp+2B0h]
  __int64 v105; // [rsp+3B8h] [rbp+2B8h]
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 *v107; // [rsp+3E0h] [rbp+2E0h]
  __int64 v108; // [rsp+3E8h] [rbp+2E8h]
  int *v109; // [rsp+3F0h] [rbp+2F0h]
  __int64 v110; // [rsp+3F8h] [rbp+2F8h]

  v76 = a5;
  v10 = a3;
  v75 = a8;
  v65 = a3;
  v72 = a9;
  v77 = a4;
  v71 = (__int64)a6;
  memset(v69, 0, sizeof(v69));
  v53 = 0;
  P = 0LL;
  v12 = 0;
  LastHive = 0LL;
  v70 = 0LL;
  v14 = 0LL;
  memset(v81, 0, sizeof(v81));
  memset(v80, 0, sizeof(v80));
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
  v62 = v10 & 0x20;
  v19 = (v62 != 0 ? 118030337 : 50921473) | 0x8000000;
  if ( (v10 & 0x80u) == 0 )
    v19 = v62 != 0 ? 118030337 : 50921473;
  v20 = v19 | 0x10000000;
  if ( (v10 & 0x200) == 0 )
    v20 = v19;
  v58 = v20;
  v64 = v10 & 0x2000;
  v21 = (v64 != 0) | 0x20;
  if ( (v10 & 0x8000) == 0 )
    v21 = (v10 & 0x2000) != 0;
  HIDWORD(v57) = v21;
  v22 = CmpOpenHiveFile(a2, 0, &Handle, &v63, 8u, a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v22;
  if ( v22 == -1073741772 )
  {
    LOBYTE(v53) = 1;
    *(_QWORD *)&v69[32] = a2;
    v69[40] = 1;
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
    *(_QWORD *)&v69[32] = v14[5];
    v69[40] = 0;
  }
  KeInitializeEvent((PRKEVENT)&v69[48], NotificationEvent, 0);
  ExInitializePushLock((PKSPIN_LOCK)&v69[72]);
  *(_QWORD *)&v69[24] = &v69[16];
  *(_QWORD *)&v69[16] = &v69[16];
  CmpLockAppHiveLoadList();
  v24 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_28:
    if ( *(__int64 **)qword_140463888 == &CmpAppHiveLoadList )
    {
      *(_QWORD *)v69 = &CmpAppHiveLoadList;
      *(_QWORD *)&v69[8] = qword_140463888;
      *(_QWORD *)qword_140463888 = v69;
      qword_140463888 = (__int64)v69;
      CmpUnlockAppHiveLoadList();
      goto LABEL_30;
    }
    goto LABEL_79;
  }
  v25 = *(_QWORD *)&v69[32];
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
  *(_QWORD *)&v69[24] = v26;
  *(_QWORD *)&v69[16] = v27;
  *v26 = &v69[16];
  *(_QWORD *)(v27 + 8) = &v69[16];
  v28 = *(struct _EX_RUNDOWN_REF **)&v69[24];
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&v69[24] + 56LL));
  CmpUnlockAppHiveLoadList();
  KeWaitForSingleObject(&v28[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v28 + 7);
LABEL_30:
  v29 = (void *)v71;
  v60 = 0LL;
  v52 = 256;
  v30 = CmpCmdHiveOpen(a2, v58, SHIDWORD(v57), v71, (__int64)&v52, (__int64)v81);
  while ( 1 )
  {
    KeyCommon = v30;
    if ( !v30 )
    {
      KeyCommon = CmpLoadKeyCommon(v60, (_QWORD *)a1, v65, v77, 0LL, v76, a7, v72, SHIBYTE(v52), v52);
      goto LABEL_70;
    }
    if ( v30 != -1073741757 || v62 || v12 )
      goto LABEL_70;
    if ( (_BYTE)v53 )
    {
      v31 = CmpOpenHiveFile(a2, 0, &Handle, &v63, 8u, v29, 0LL, 0LL, (__int64)&P);
      KeyCommon = v31;
      if ( v31 < 0 )
      {
        if ( v31 == -1073741772 )
LABEL_65:
          KeyCommon = -1073741757;
        goto LABEL_70;
      }
      KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v74, 0LL);
      v14 = v74;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
        goto LABEL_70;
    }
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LastHive = CmpGetLastHive();
    if ( LastHive )
      break;
LABEL_63:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v52 = 256;
    v60 = 0LL;
    v30 = CmpCmdHiveOpen(a2, v58, SHIDWORD(v57), (__int64)v29, (__int64)&v52, (__int64)v81);
    v12 = 1;
  }
LABEL_39:
  LODWORD(v55) = CmpActiveAppHiveUnloadCount;
  while ( (_DWORD)v55 )
  {
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v55, 4uLL, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LODWORD(v55) = CmpActiveAppHiveUnloadCount;
  }
  for ( i = 0LL; ; i = (void *)v34 )
  {
    NextHive = CmpGetNextHive(i);
    v34 = NextHive;
    if ( !NextHive )
      goto LABEL_61;
    LODWORD(v57) = *(_DWORD *)(NextHive + 4808);
    if ( (_DWORD)v57 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v34 + 4816, (_QWORD *)(v34 + 4808), &v57, 4uLL, 0LL);
      LOCK_HIVE_LOAD();
      CmpLockRegistryFreezeAware(1);
      CmpQuitNextHive(v34);
      if ( v34 != LastHive )
        goto LABEL_39;
      goto LABEL_61;
    }
    if ( *(_QWORD *)(NextHive + 1536) && (unsigned __int8)CmpIsThisSameFile(v14) )
      break;
    if ( v34 == LastHive )
      goto LABEL_60;
  }
  v35 = *(_DWORD *)(v34 + 4152);
  v36 = *(_DWORD *)(v34 + 160) & 0x8000;
  if ( (v35 & 0x20) == 0 || (v35 & 0x40) != 0 )
    goto LABEL_55;
  if ( v64 )
  {
    if ( !v36 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      CmpQuitNextHive(v34);
      KeyCommon = -1073741790;
      goto LABEL_70;
    }
  }
  else if ( v36 )
  {
LABEL_55:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    CmpQuitNextHive(v34);
    goto LABEL_65;
  }
  CmpAttachToRegistryProcess((__int64)v80);
  v37 = *(_QWORD *)(v34 + 2928);
  v70 = v34;
  v38 = CmpConstructName(v37);
  v39 = v75;
  *v75 = v38;
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v80);
  if ( !*v39 )
  {
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    KeyCommon = -1073741670;
    CmpQuitNextHive(v34);
    goto LABEL_70;
  }
  CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v34 + 2928));
  *v72 = *(_QWORD *)(v34 + 2928);
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  KeyCommon = 0;
LABEL_60:
  CmpQuitNextHive(v34);
LABEL_61:
  if ( !v70 )
  {
    v29 = (void *)v71;
    goto LABEL_63;
  }
  HIBYTE(v53) = 1;
LABEL_70:
  CmpLockAppHiveLoadList();
  v40 = *(_QWORD *)v69;
  v41 = *(_QWORD *)&v69[8];
  if ( *(_BYTE **)(*(_QWORD *)v69 + 8LL) != v69 || **(_BYTE ***)&v69[8] != v69 )
    goto LABEL_79;
  **(_QWORD **)&v69[8] = *(_QWORD *)v69;
  *(_QWORD *)(v40 + 8) = v41;
  v42 = *(_QWORD *)&v69[16];
  if ( *(_BYTE **)&v69[16] != &v69[16] )
  {
    v43 = *(_QWORD *)&v69[24];
    v44 = (_QWORD *)(*(_QWORD *)&v69[16] - 16LL);
    if ( *(_BYTE **)(*(_QWORD *)&v69[16] + 8LL) == &v69[16] && **(_BYTE ***)&v69[24] == &v69[16] )
    {
      **(_QWORD **)&v69[24] = *(_QWORD *)&v69[16];
      *(_QWORD *)(v42 + 8) = v43;
      v45 = (_QWORD *)qword_140463888;
      if ( *(__int64 **)qword_140463888 == &CmpAppHiveLoadList )
      {
        *v44 = &CmpAppHiveLoadList;
        v44[1] = v45;
        *v45 = v44;
        qword_140463888 = (__int64)v44;
        goto LABEL_77;
      }
    }
LABEL_79:
    __fastfail(3u);
  }
LABEL_77:
  CmpUnlockAppHiveLoadList();
  KeSetEvent((PRKEVENT)&v69[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v69[72]);
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
      v54 = HIBYTE(v53);
      v100 = &v79;
      v102 = &v68;
      v104 = &v54;
      v79 = 1LL;
      v68 = KeyCommon;
      v101 = 8LL;
      v103 = 4LL;
      v105 = 1LL;
      TlgWriteAgg((__int64)&stru_140425BC0, (unsigned __int8 *)dword_14038BA15, v50, v51, 5u, &v99);
    }
  }
  else if ( LODWORD(v81[1]) )
  {
    if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
    {
      v67 = KeyCommon;
      v83 = &v67;
      v85 = (char *)&v55 + 4;
      v87 = (__int16 *)&v56;
      v89 = &v81[1];
      v91 = (char *)&v81[1] + 4;
      WORD2(v55) = v49;
      v56 = v48;
      v84 = 4LL;
      v86 = 2LL;
      v94 = (char *)&v81[1] + 2;
      v92 = 12 * v49;
      v96 = (char *)&v81[13] + 4;
      v88 = 2LL;
      v90 = 2LL;
      v93 = 0;
      v95 = 2LL;
      v97 = 12 * v48;
      v98 = 0;
      TlgWrite(&stru_140425BC0, &unk_14038BA6F, 0LL, 0LL, 9u, &pData);
    }
  }
  else if ( stru_140425BC0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
    {
      v78 = 1LL;
      v107 = &v78;
      v109 = &v66;
      v66 = KeyCommon;
      v108 = 8LL;
      v110 = 4LL;
      TlgWriteAgg((__int64)&stru_140425BC0, (unsigned __int8 *)dword_14038BB49, v46, v47, 4u, &v106);
    }
  }
  return (unsigned int)KeyCommon;
}
