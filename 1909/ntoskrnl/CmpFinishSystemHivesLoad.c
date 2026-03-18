/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x140762500
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1400ED6CC (CmpRecheckHiveVolumePolicy.c)
 *     KeReadStateSemaphore @ 0x1400EEF60 (KeReadStateSemaphore.c)
 *     RtlUnicodeStringCopyString @ 0x14018DB00 (RtlUnicodeStringCopyString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     CmRmFinalizeRecovery @ 0x14068BDE4 (CmRmFinalizeRecovery.c)
 *     CmpAddToHiveFileList @ 0x14068C204 (CmpAddToHiveFileList.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     CmpLockHiveListExclusive @ 0x14068CCDC (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x14068CCFC (CmpUnlockHiveList.c)
 *     CmpLinkKeyToHive @ 0x140762BC4 (CmpLinkKeyToHive.c)
 *     CmpInitVirtualEngine @ 0x140762CBC (CmpInitVirtualEngine.c)
 *     CmpCreatePerfKeys @ 0x140762CE0 (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x140762F6C (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14076351C (CmpHiveRootSecurityDescriptor.c)
 *     PsBootPhaseComplete @ 0x1407639C8 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x140763F98 (ExpRefreshSystemTime.c)
 *     CmpInterlockedFunction @ 0x14076549C (CmpInterlockedFunction.c)
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 *     CmpIsShutdownRundownActive @ 0x1408320A8 (CmpIsShutdownRundownActive.c)
 */

void __fastcall CmpFinishSystemHivesLoad(PRKEVENT Event)
{
  char v2; // r15
  PLOOKASIDE_LIST_EX v3; // r9
  struct _LOOKASIDE_LIST_EX *v4; // r9
  struct _KWAIT_BLOCK *WaitBlockArray; // rbx
  PVOID *TransientPoolWithTag; // r12
  __int64 v7; // rsi
  __int64 v8; // r8
  char *v9; // rdx
  PVOID *v10; // rcx
  char v11; // r13
  char *v12; // rbx
  unsigned int i; // edi
  const WCHAR *v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  PVOID v19; // rcx
  const WCHAR *v20; // rdx
  const WCHAR *v21; // rcx
  ULONG_PTR v22; // rcx
  char *v23; // rbx
  struct _KEVENT *v24; // rbx
  unsigned __int16 Length; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-80h]
  HANDLE KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF
  char v32; // [rsp+F0h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x800000LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(&ApcState, 0, sizeof(ApcState));
  CmpMountThread = (__int64)KeGetCurrentThread();
  v2 = 0;
  DestinationString.Buffer = (wchar_t *)&v32;
  BYTE1(NlsMbCodePageTag) = 0;
  RtlUnicodeStringCopyString(&DestinationString, L"\\REGISTRY\\");
  Length = DestinationString.Length;
  Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x150uLL, 0x20204D43u, v3);
  WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
  if ( !Privileges )
    KeBugCheckEx(0x74u, 2uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  TransientPoolWithTag = (PVOID *)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x38uLL, 0x20204D43u, v4);
  if ( !TransientPoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 6uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  v7 = 7LL;
  P = (PVOID)CmpHiveRootSecurityDescriptor();
  v8 = 7LL;
  v9 = (char *)&unk_140424E68;
  v10 = TransientPoolWithTag;
  do
  {
    *v10 = v9;
    v9 += 152;
    ++v10;
    --v8;
  }
  while ( v8 );
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
    KeWaitForMultipleObjects(7u, TransientPoolWithTag, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v11 = 0;
    v12 = (char *)&unk_140424E40;
    for ( i = 0; i < 7; ++i )
    {
      if ( v12[8] )
        goto LABEL_46;
      if ( !v12[9] )
      {
        v11 = 1;
        goto LABEL_46;
      }
      v14 = (const WCHAR *)*((_QWORD *)v12 - 5);
      DestinationString.Length = Length;
      RtlAppendUnicodeToString(&DestinationString, v14);
      RtlAppendUnicodeToString(&DestinationString, *((PCWSTR *)v12 - 4));
      CmpLockRegistryExclusive();
      if ( !*((_QWORD *)v12 - 3) )
      {
        if ( !*(_QWORD *)v12 )
          goto LABEL_24;
        v15 = CmpLinkHiveToMaster(
                (__int64)&DestinationString,
                0LL,
                *(_QWORD *)v12,
                v12[11],
                *((_DWORD *)v12 - 2),
                0,
                0LL,
                (__int64)P,
                0LL,
                0LL,
                1);
        if ( v15 < 0 )
        {
          if ( !(unsigned __int8)CmpIsShutdownRundownActive(v15, v16) )
            KeBugCheckEx(0x73u, 1uLL, v22, i, (ULONG_PTR)&DestinationString);
          CmpLoadingSystemHivesActive = 0;
          CmpMountThread = 0LL;
          CmpUnlockRegistry();
          v23 = (char *)&unk_140424E48;
          do
          {
            if ( KeReadStateSemaphore((PRKSEMAPHORE)(v23 + 8)) && !*v23 )
            {
              if ( !v23[1] )
                KeWaitForSingleObject(v23 + 32, Executive, 0, 0, 0LL);
              KeSetEvent((PRKEVENT)(v23 + 56), 0, 0);
            }
            v23 += 152;
            --v7;
          }
          while ( v7 );
          goto LABEL_69;
        }
        CmpLockHiveListExclusive();
        v17 = (_QWORD *)qword_1409AE898;
        v18 = (_QWORD *)(*(_QWORD *)v12 + 1600LL);
        if ( *(__int64 **)qword_1409AE898 != &CmpHiveListHead )
          __fastfail(3u);
        *v18 = &CmpHiveListHead;
        v18[1] = v17;
        *v17 = v18;
        qword_1409AE898 = (__int64)v18;
        CmpUnlockHiveList();
        CmpRecheckHiveVolumePolicy(*(_QWORD *)v12);
        if ( v12[11] )
        {
          *(_DWORD *)(*(_QWORD *)v12 + 160LL) |= 0x20u;
          *(_QWORD *)(*(_QWORD *)v12 + 4208LL) = KeGetCurrentThread();
          CmpUnlockRegistry();
          CmpFlushHive(*(_QWORD *)v12, 4u);
          CmpLockRegistryExclusive();
          *(_DWORD *)(*(_QWORD *)v12 + 160LL) &= ~0x20u;
          *(_QWORD *)(*(_QWORD *)v12 + 4208LL) = 0LL;
        }
        v19 = CmRmSystem;
        if ( CmRmSystem && (*(_DWORD *)(*(_QWORD *)v12 + 160LL) & 2) == 0 && !*(_QWORD *)(*(_QWORD *)v12 + 4192LL) )
        {
          ++*((_DWORD *)CmRmSystem + 16);
          *(_QWORD *)(*(_QWORD *)v12 + 4192LL) = v19;
        }
      }
      if ( *(_QWORD *)v12 )
        CmpAddToHiveFileList(*(_QWORD *)v12);
LABEL_24:
      v12[8] = 1;
      if ( i != 3 )
      {
        switch ( i )
        {
          case 2u:
            CmpUnlockRegistry();
            if ( !Event )
            {
              KeSetEvent((PRKEVENT)(v12 + 64), 0, 0);
              v2 = 1;
              if ( byte_140425010 && CmFastBoot )
              {
                ExpRefreshSystemTime();
                PsBootPhaseComplete();
              }
              CmpSetVersionData();
            }
            CmpCreatePerfKeys();
            goto LABEL_42;
          case 1u:
            v20 = L"\\Registry\\Machine\\SAM\\SAM";
            v21 = L"\\Registry\\Machine\\Security\\SAM";
            break;
          case 4u:
            v20 = L"\\Registry\\User\\.Default";
            v21 = L"\\Registry\\User\\S-1-5-18";
            break;
          default:
LABEL_41:
            CmpUnlockRegistry();
LABEL_42:
            if ( !Event && !v2 )
              KeSetEvent((PRKEVENT)(v12 + 64), 0, 0);
            goto LABEL_45;
        }
        CmpLinkKeyToHive(v21, v20);
        goto LABEL_41;
      }
      if ( Event )
        goto LABEL_41;
      CmpMountPreloadedHives();
      CmpInterlockedFunction();
      KeSetEvent((PRKEVENT)(v12 + 64), 0, 0);
      v2 = 1;
      if ( !byte_140424F78 || !CmFastBoot )
        goto LABEL_41;
      CmpUnlockRegistry();
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
LABEL_45:
      v2 = 0;
LABEL_46:
      v12 += 152;
    }
    if ( v11 )
    {
      WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
      continue;
    }
    break;
  }
  CmpLockRegistryExclusive();
  CmpSpecialBootCondition = 0;
  CmpInitVirtualEngine();
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
    v24 = &stru_140424E80;
    do
    {
      KeSetEvent(v24, 0, 0);
      v24 = (struct _KEVENT *)((char *)v24 + 152);
      --v7;
    }
    while ( v7 );
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
LABEL_69:
  CmpSpecialBootCondition = 0;
  CmpLoadingSystemHivesActive = 0;
  CmpMountThread = 0LL;
  if ( Event )
    KeSetEvent(Event, 0, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmSiFreeMemory(Privileges);
  CmSiFreeMemory((PPRIVILEGE_SET)TransientPoolWithTag);
}
