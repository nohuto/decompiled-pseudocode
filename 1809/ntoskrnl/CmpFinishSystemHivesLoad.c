/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x140733770
 * Callers:
 *     <none>
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x14000EDFC (CmpRecheckHiveVolumePolicy.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x14015D890 (RtlUnicodeStringValidateDestWorker.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     CmpAddToHiveFileList @ 0x1406CE220 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406CEEC8 (CmRmFinalizeRecovery.c)
 *     CmpLinkKeyToHive @ 0x140733F1C (CmpLinkKeyToHive.c)
 *     CmpCreatePerfKeys @ 0x140733FFC (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x140734268 (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140734770 (CmpHiveRootSecurityDescriptor.c)
 *     PsBootPhaseComplete @ 0x140734C1C (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x140735390 (ExpRefreshSystemTime.c)
 *     CmpInterlockedFunction @ 0x1407368A8 (CmpInterlockedFunction.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 */

PVOID __fastcall CmpFinishSystemHivesLoad(PRKEVENT Event)
{
  size_t *v2; // r9
  size_t v3; // r9
  const WCHAR *v4; // rcx
  __int16 v5; // r15
  __int64 v6; // rdx
  signed __int64 v7; // r8
  unsigned __int16 Length; // r15
  struct _KWAIT_BLOCK *WaitBlockArray; // rdi
  PPRIVILEGE_SET v10; // rbx
  __int64 v11; // r12
  char v12; // r13
  char *v13; // rbx
  unsigned int i; // edi
  const WCHAR *v15; // rdx
  char v16; // si
  int v17; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  PVOID v20; // rcx
  const WCHAR *v21; // rdx
  const WCHAR *v22; // rcx
  char *v23; // rbx
  struct _KEVENT *v24; // rbx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-88h]
  PPRIVILEGE_SET TransientPoolWithTag; // [rsp+80h] [rbp-80h]
  size_t pcchDest; // [rsp+88h] [rbp-78h] BYREF
  wchar_t *ppszDest; // [rsp+90h] [rbp-70h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp-68h] BYREF
  PVOID v35[2]; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v37[48]; // [rsp+E0h] [rbp-20h] BYREF
  char v38; // [rsp+110h] [rbp+10h] BYREF

  CmpInitializeThreadInfo(v35);
  CmpMountThread = (__int64)KeGetCurrentThread();
  CmpNoWrite = 0;
  *(_QWORD *)&DestinationString.Length = 0x800000LL;
  DestinationString.Buffer = (wchar_t *)&v38;
  if ( RtlUnicodeStringValidateDestWorker(
         &DestinationString,
         &ppszDest,
         &pcchDest,
         v2,
         (const size_t)Timeout,
         *(ULONG *)Alertable) < 0 )
  {
    Length = DestinationString.Length;
  }
  else
  {
    v3 = pcchDest;
    v4 = L"\\REGISTRY\\";
    v5 = 0;
    v6 = 0x7FFFLL;
    if ( pcchDest )
    {
      v7 = (char *)ppszDest - (char *)L"\\REGISTRY\\";
      do
      {
        if ( !v6 )
          break;
        if ( !*v4 )
          break;
        *(const WCHAR *)((char *)v4 + v7) = *v4;
        --v6;
        ++v4;
        ++v5;
      }
      while ( v6 + v3 - 0x7FFF );
    }
    Length = 2 * v5;
    DestinationString.Length = Length;
  }
  Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x150uLL, 0x20204D43u);
  WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
  if ( !Privileges )
    KeBugCheckEx(0x74u, 2uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  TransientPoolWithTag = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x38uLL, 0x20204D43u);
  v10 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 6uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  P = (PVOID)CmpHiveRootSecurityDescriptor();
  *(_QWORD *)&v10->PrivilegeCount = &unk_1403FFE68;
  v10->Privilege[0].Luid = (LUID)&unk_1403FFF00;
  *(_QWORD *)&v10->Privilege[0].Attributes = &unk_1403FFF98;
  *(_QWORD *)&v10[1].Privilege[0].Luid.HighPart = &unk_1404000C8;
  *(_QWORD *)&v10[2].PrivilegeCount = &unk_140400160;
  v10[2].Privilege[0].Luid = (LUID)&unk_1404001F8;
  *(_QWORD *)&v10[1].Control = &stru_140400030;
  if ( !Event )
  {
    KeWaitForSingleObject(&stru_140400030, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_140400030, 0, 0);
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v37);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess((__int64)v37, 0LL);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
  }
  v11 = 7LL;
  while ( 2 )
  {
    KeWaitForMultipleObjects(7u, (PVOID *)v10, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v12 = 0;
    v13 = (char *)&unk_1403FFE40;
    for ( i = 0; i < 7; ++i )
    {
      if ( v13[8] )
        goto LABEL_52;
      if ( !v13[9] )
      {
        v12 = 1;
        goto LABEL_52;
      }
      v15 = (const WCHAR *)*((_QWORD *)v13 - 5);
      v16 = 0;
      DestinationString.Length = Length;
      RtlAppendUnicodeToString(&DestinationString, v15);
      RtlAppendUnicodeToString(&DestinationString, *((PCWSTR *)v13 - 4));
      CmpLockRegistryExclusive();
      if ( !*((_QWORD *)v13 - 3) )
      {
        if ( !*(_QWORD *)v13 )
          goto LABEL_31;
        v17 = CmpLinkHiveToMaster(
                (__int64)&DestinationString,
                0LL,
                *(_QWORD *)v13,
                v13[11],
                *((_DWORD *)v13 - 2),
                0,
                0LL,
                (__int64)P,
                0LL,
                0LL,
                1);
        if ( v17 < 0 )
        {
          if ( (CmpShutdownRundown & 1) == 0 )
            KeBugCheckEx(0x73u, 1uLL, v17, i, (ULONG_PTR)&DestinationString);
          CmpLoadingSystemHivesActive = 0;
          CmpMountThread = 0LL;
          CmpUnlockRegistry();
          v23 = (char *)&unk_1403FFE48;
          do
          {
            if ( *((_DWORD *)v23 + 3) && !*v23 )
            {
              if ( !v23[1] )
                KeWaitForSingleObject(v23 + 32, Executive, 0, 0, 0LL);
              KeSetEvent((PRKEVENT)(v23 + 56), 0, 0);
            }
            v23 += 152;
            --v11;
          }
          while ( v11 );
          goto LABEL_78;
        }
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        v18 = (_QWORD *)qword_14096F7D0;
        v19 = (_QWORD *)(*(_QWORD *)v13 + 1600LL);
        if ( *(__int64 **)qword_14096F7D0 != &CmpHiveListHead )
          __fastfail(3u);
        *v19 = &CmpHiveListHead;
        v19[1] = v18;
        *v18 = v19;
        qword_14096F7D0 = (__int64)v19;
        ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        CmpRecheckHiveVolumePolicy(*(_QWORD *)v13);
        if ( v13[11] )
        {
          *(_DWORD *)(*(_QWORD *)v13 + 160LL) |= 0x20u;
          *(_QWORD *)(*(_QWORD *)v13 + 4208LL) = KeGetCurrentThread();
          CmpUnlockRegistry();
          CmpFlushHive(*(_QWORD *)v13, 4u);
          CmpLockRegistryExclusive();
          *(_DWORD *)(*(_QWORD *)v13 + 160LL) &= ~0x20u;
          *(_QWORD *)(*(_QWORD *)v13 + 4208LL) = 0LL;
        }
        v20 = CmRmSystem;
        if ( CmRmSystem && (*(_DWORD *)(*(_QWORD *)v13 + 160LL) & 2) == 0 && !*(_QWORD *)(*(_QWORD *)v13 + 4192LL) )
        {
          ++*((_DWORD *)CmRmSystem + 16);
          *(_QWORD *)(*(_QWORD *)v13 + 4192LL) = v20;
        }
      }
      if ( *(_QWORD *)v13 )
        CmpAddToHiveFileList(*(_QWORD *)v13);
LABEL_31:
      v13[8] = 1;
      switch ( i )
      {
        case 3u:
          if ( !Event )
          {
            CmpMountPreloadedHives();
            CmpInterlockedFunction();
            KeSetEvent((PRKEVENT)(v13 + 64), 0, 0);
            v16 = 1;
            if ( byte_1403FFF78 )
            {
              if ( CmFastBoot )
              {
                CmpUnlockRegistry();
                ExpRefreshSystemTime();
                PsBootPhaseComplete();
                goto LABEL_52;
              }
            }
          }
          break;
        case 2u:
          CmpUnlockRegistry();
          if ( !Event )
          {
            KeSetEvent((PRKEVENT)(v13 + 64), 0, 0);
            v16 = 1;
            if ( byte_140400010 && CmFastBoot )
            {
              ExpRefreshSystemTime();
              PsBootPhaseComplete();
            }
            CmpSetVersionData();
          }
          CmpCreatePerfKeys();
          goto LABEL_49;
        case 1u:
          v21 = L"\\Registry\\Machine\\SAM\\SAM";
          v22 = L"\\Registry\\Machine\\Security\\SAM";
LABEL_47:
          CmpLinkKeyToHive(v22, v21);
          break;
        case 4u:
          v21 = L"\\Registry\\User\\.Default";
          v22 = L"\\Registry\\User\\S-1-5-18";
          goto LABEL_47;
      }
      CmpUnlockRegistry();
LABEL_49:
      if ( !Event && !v16 )
        KeSetEvent((PRKEVENT)(v13 + 64), 0, 0);
LABEL_52:
      v13 += 152;
    }
    if ( v12 )
    {
      v10 = TransientPoolWithTag;
      WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
      continue;
    }
    break;
  }
  CmpLockRegistryExclusive();
  CmpSpecialBootCondition = 0;
  if ( CmpShareSystemHives || (CmpVEEnabled = 1, CmVEEnabled != 1) )
    CmpVEEnabled = 0;
  CmpUnlockRegistry();
  if ( Event )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v37);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess((__int64)v37, 0LL);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
    CmpLockRegistryExclusive();
    CmpMountPreloadedHives();
    CmpInterlockedFunction();
    CmpUnlockRegistry();
    v24 = &stru_1403FFE80;
    do
    {
      KeSetEvent(v24, 0, 0);
      v24 = (struct _KEVENT *)((char *)v24 + 152);
      --v11;
    }
    while ( v11 );
    if ( CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
    }
    CmpSetVersionData();
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpConfigurationManagerKeyName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
    ZwClose(KeyHandle);
LABEL_78:
  CmpSpecialBootCondition = 0;
  CmpLoadingSystemHivesActive = 0;
  CmpMountThread = 0LL;
  if ( Event )
    KeSetEvent(Event, 0, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmSiFreeMemory(Privileges);
  CmSiFreeMemory(TransientPoolWithTag);
  return CmCleanupThreadInfo(v35);
}
