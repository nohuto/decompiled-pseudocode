/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x14075DD80
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14009902C (CmpRecheckHiveVolumePolicy.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x140144B00 (RtlUnicodeStringValidateDestWorker.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpUnlockHiveList @ 0x140662270 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x140662290 (CmpLockHiveListExclusive.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 *     CmpAddToHiveFileList @ 0x1406EC454 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406EEA7C (CmRmFinalizeRecovery.c)
 *     CmpLinkKeyToHive @ 0x14075E2E8 (CmpLinkKeyToHive.c)
 *     CmpCreatePerfKeys @ 0x14075E3E0 (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x14075E648 (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14075EBF8 (CmpHiveRootSecurityDescriptor.c)
 *     PsBootPhaseComplete @ 0x14075F0A4 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x14075F674 (ExpRefreshSystemTime.c)
 *     CmpInterlockedFunction @ 0x140760A94 (CmpInterlockedFunction.c)
 *     CmpMountPreloadedHives @ 0x140760BCC (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140760CC0 (CmpAdminSystemSecurityDescriptor.c)
 */

void __fastcall CmpFinishSystemHivesLoad(PRKEVENT Event)
{
  char v2; // r12
  size_t *v3; // r9
  struct _LOOKASIDE_LIST_EX *v4; // r9
  const WCHAR *v5; // rcx
  __int64 v6; // rdx
  __int16 v7; // si
  signed __int64 v8; // r8
  unsigned __int16 Length; // si
  struct _LOOKASIDE_LIST_EX *v10; // r9
  struct _KWAIT_BLOCK *WaitBlockArray; // rdi
  PVOID *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r8
  char *v15; // rdx
  PVOID *v16; // rcx
  char v17; // r13
  char *v18; // rbx
  unsigned int i; // edi
  const WCHAR *v20; // rdx
  int v21; // eax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  PVOID v24; // rcx
  const WCHAR *v25; // rdx
  const WCHAR *v26; // rcx
  char v27; // al
  char *v28; // rbx
  struct _KEVENT *v29; // rbx
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  ULONG Alertable; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-88h]
  PPRIVILEGE_SET TransientPoolWithTag; // [rsp+88h] [rbp-80h]
  size_t pcchDest; // [rsp+90h] [rbp-78h] BYREF
  wchar_t *ppszDest; // [rsp+98h] [rbp-70h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-30h] BYREF
  char v41; // [rsp+108h] [rbp+0h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x800000LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(&ApcState, 0, sizeof(ApcState));
  CmpMountThread = (__int64)KeGetCurrentThread();
  v2 = 0;
  BYTE1(NlsMbCodePageTag) = 0;
  DestinationString.Buffer = (wchar_t *)&v41;
  if ( RtlUnicodeStringValidateDestWorker(
         &DestinationString,
         &ppszDest,
         &pcchDest,
         v3,
         (const size_t)Timeout,
         Alertable) < 0 )
  {
    Length = DestinationString.Length;
  }
  else
  {
    v4 = (struct _LOOKASIDE_LIST_EX *)pcchDest;
    v5 = L"\\REGISTRY\\";
    v6 = 0x7FFFLL;
    v7 = 0;
    if ( pcchDest )
    {
      v8 = (char *)ppszDest - (char *)L"\\REGISTRY\\";
      do
      {
        if ( !v6 )
          break;
        if ( !*v5 )
          break;
        *(const WCHAR *)((char *)v5 + v8) = *v5;
        --v6;
        ++v5;
        ++v7;
      }
      while ( (struct _LIST_ENTRY **)((char *)&v4[-342].L.ListEntry.Flink + v6 + 1) );
    }
    Length = 2 * v7;
    DestinationString.Length = Length;
  }
  Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x150uLL, 0x20204D43u, v4);
  WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
  if ( !Privileges )
    KeBugCheckEx(0x74u, 2uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  TransientPoolWithTag = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x38uLL, 0x20204D43u, v10);
  v12 = (PVOID *)TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 6uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  P = (PVOID)CmpHiveRootSecurityDescriptor();
  v13 = 7LL;
  CmpAdminSystemFileSecurityDescriptor = (PSECURITY_DESCRIPTOR)CmpAdminSystemSecurityDescriptor();
  v14 = 7LL;
  v15 = (char *)&unk_140424E68;
  v16 = v12;
  do
  {
    *v16 = v15;
    v15 += 152;
    ++v16;
    --v14;
  }
  while ( v14 );
  if ( !Event )
  {
    KeWaitForSingleObject(&stru_140425030, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_140425030, 0, 0);
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KeUnstackDetachProcess(&ApcState);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
  }
  while ( 2 )
  {
    KeWaitForMultipleObjects(7u, v12, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v17 = 0;
    v18 = (char *)&unk_140424E40;
    for ( i = 0; i < 7; ++i )
    {
      if ( v18[8] )
        goto LABEL_19;
      if ( !v18[9] )
      {
        v17 = 1;
        goto LABEL_19;
      }
      v20 = (const WCHAR *)*((_QWORD *)v18 - 5);
      DestinationString.Length = Length;
      RtlAppendUnicodeToString(&DestinationString, v20);
      RtlAppendUnicodeToString(&DestinationString, *((PCWSTR *)v18 - 4));
      CmpLockRegistryExclusive();
      if ( !*((_QWORD *)v18 - 3) )
      {
        if ( !*(_QWORD *)v18 )
          goto LABEL_34;
        v21 = CmpLinkHiveToMaster(
                (__int64)&DestinationString,
                0LL,
                *(_QWORD *)v18,
                v18[11],
                *((_DWORD *)v18 - 2),
                0,
                0LL,
                (__int64)P,
                0LL,
                0LL,
                1);
        if ( v21 < 0 )
        {
          if ( (CmpShutdownRundown & 1) == 0 )
            KeBugCheckEx(0x73u, 1uLL, v21, i, (ULONG_PTR)&DestinationString);
          CmpLoadingSystemHivesActive = 0;
          CmpMountThread = 0LL;
          CmpUnlockRegistry();
          v28 = (char *)&unk_140424E48;
          do
          {
            if ( *((_DWORD *)v28 + 3) && !*v28 )
            {
              if ( !v28[1] )
                KeWaitForSingleObject(v28 + 32, Executive, 0, 0, 0LL);
              KeSetEvent((PRKEVENT)(v28 + 56), 0, 0);
            }
            v28 += 152;
            --v13;
          }
          while ( v13 );
          goto LABEL_60;
        }
        CmpLockHiveListExclusive();
        v22 = (_QWORD *)qword_1409AE898;
        v23 = (_QWORD *)(*(_QWORD *)v18 + 1600LL);
        if ( *(__int64 **)qword_1409AE898 != &CmpHiveListHead )
          __fastfail(3u);
        *v23 = &CmpHiveListHead;
        v23[1] = v22;
        *v22 = v23;
        qword_1409AE898 = (__int64)v23;
        CmpUnlockHiveList();
        CmpRecheckHiveVolumePolicy(*(_QWORD *)v18);
        if ( v18[11] )
        {
          *(_DWORD *)(*(_QWORD *)v18 + 160LL) |= 0x20u;
          *(_QWORD *)(*(_QWORD *)v18 + 4208LL) = KeGetCurrentThread();
          CmpUnlockRegistry();
          CmpFlushHive(*(_QWORD *)v18, 4u);
          CmpLockRegistryExclusive();
          *(_DWORD *)(*(_QWORD *)v18 + 160LL) &= ~0x20u;
          *(_QWORD *)(*(_QWORD *)v18 + 4208LL) = 0LL;
        }
        v24 = CmRmSystem;
        if ( CmRmSystem && (*(_DWORD *)(*(_QWORD *)v18 + 160LL) & 2) == 0 && !*(_QWORD *)(*(_QWORD *)v18 + 4192LL) )
        {
          ++*((_DWORD *)CmRmSystem + 16);
          *(_QWORD *)(*(_QWORD *)v18 + 4192LL) = v24;
        }
      }
      if ( *(_QWORD *)v18 )
        CmpAddToHiveFileList(*(_QWORD *)v18);
LABEL_34:
      v18[8] = 1;
      if ( i != 3 )
      {
        switch ( i )
        {
          case 2u:
            CmpUnlockRegistry();
            if ( !Event )
            {
              KeSetEvent((PRKEVENT)(v18 + 64), 0, 0);
              v2 = 1;
              if ( byte_140425010 && CmFastBoot )
              {
                ExpRefreshSystemTime();
                PsBootPhaseComplete();
              }
              CmpSetVersionData();
            }
            CmpCreatePerfKeys();
            goto LABEL_39;
          case 1u:
            v25 = L"\\Registry\\Machine\\SAM\\SAM";
            v26 = L"\\Registry\\Machine\\Security\\SAM";
            break;
          case 4u:
            v25 = L"\\Registry\\User\\.Default";
            v26 = L"\\Registry\\User\\S-1-5-18";
            break;
          default:
LABEL_38:
            CmpUnlockRegistry();
LABEL_39:
            if ( !Event && !v2 )
              KeSetEvent((PRKEVENT)(v18 + 64), 0, 0);
            goto LABEL_42;
        }
        CmpLinkKeyToHive(v26, v25);
        goto LABEL_38;
      }
      if ( Event )
        goto LABEL_38;
      CmpMountPreloadedHives();
      CmpInterlockedFunction();
      KeSetEvent((PRKEVENT)(v18 + 64), 0, 0);
      v2 = 1;
      if ( !byte_140424F78 || !CmFastBoot )
        goto LABEL_38;
      CmpUnlockRegistry();
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
LABEL_42:
      v2 = 0;
LABEL_19:
      v18 += 152;
    }
    if ( v17 )
    {
      v12 = (PVOID *)TransientPoolWithTag;
      WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
      continue;
    }
    break;
  }
  CmpLockRegistryExclusive();
  CmpSpecialBootCondition = 0;
  if ( CmpShareSystemHives || (v27 = 1, CmVEEnabled != 1) )
    v27 = 0;
  CmpVEEnabled = v27;
  CmpUnlockRegistry();
  if ( Event )
  {
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KeUnstackDetachProcess(&ApcState);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
    CmpLockRegistryExclusive();
    CmpMountPreloadedHives();
    CmpInterlockedFunction();
    CmpUnlockRegistry();
    v29 = &stru_140424E80;
    do
    {
      KeSetEvent(v29, 0, 0);
      v29 = (struct _KEVENT *)((char *)v29 + 152);
      --v13;
    }
    while ( v13 );
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
LABEL_60:
  CmpSpecialBootCondition = 0;
  CmpLoadingSystemHivesActive = 0;
  CmpMountThread = 0LL;
  if ( Event )
    KeSetEvent(Event, 0, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmSiFreeMemory(Privileges);
  CmSiFreeMemory(TransientPoolWithTag);
}
