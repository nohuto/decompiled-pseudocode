/*
 * XREFs of CmpInitCmRM @ 0x1406804A8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x1401B99F0 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x1401B9B30 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x1401BA770 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x1401BAF50 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x1401BAF70 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1405B5B70 (CmpQueryFileSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpUuidCreate @ 0x140681C2C (CmpUuidCreate.c)
 *     CmpQueryNameString @ 0x140684814 (CmpQueryNameString.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     HvMarkBaseBlockDirty @ 0x1406CC1D4 (HvMarkBaseBlockDirty.c)
 *     CmpStartRMLog @ 0x14070F5B4 (CmpStartRMLog.c)
 *     CmpLogTxrInitEvent @ 0x1407F99F4 (CmpLogTxrInitEvent.c)
 */

__int64 __fastcall CmpInitCmRM(ULONG_PTR a1, char a2)
{
  char v4; // si
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  int v7; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r14
  struct _ERESOURCE *v11; // rdx
  __int64 v12; // rcx
  char *v13; // r8
  char *v14; // rdx
  char *v15; // rdx
  UUID v16; // xmm6
  char *v17; // rdx
  void *v18; // r12
  __int64 v19; // rcx
  int v20; // esi
  UNICODE_STRING *p_Source; // rbx
  PSECURITY_DESCRIPTOR v22; // rbx
  struct _CLFS_MGMT_POLICY *v23; // rax
  struct _CLFS_MGMT_POLICY *v24; // r12
  size_t v25; // r8
  ULONG v26; // ebx
  const void *v27; // rdx
  NTSTATUS v28; // eax
  GUID v29; // xmm0
  HANDLE *v30; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v32; // rax
  __int64 *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  PVOID v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  char v43; // [rsp+68h] [rbp-A0h]
  int v44; // [rsp+6Ch] [rbp-9Ch]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  FILE_OBJECT *pplfoLog; // [rsp+80h] [rbp-88h] BYREF
  PVOID ClientCookie; // [rsp+88h] [rbp-80h] BYREF
  ULONG CreateOptions; // [rsp+90h] [rbp-78h]
  UNICODE_STRING GuidString; // [rsp+98h] [rbp-70h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING Source; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING LogFileName; // [rsp+C0h] [rbp-48h] BYREF
  PSECURITY_DESCRIPTOR P; // [rsp+D0h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v55; // [rsp+108h] [rbp+0h] BYREF
  PERESOURCE Resource; // [rsp+110h] [rbp+8h]
  _CLFS_MGMT_CLIENT_REGISTRATION RegistrationData; // [rsp+120h] [rbp+18h] BYREF
  GUID ResourceManagerGuid; // [rsp+158h] [rbp+50h] BYREF
  UUID Uuid; // [rsp+168h] [rbp+60h] BYREF
  UUID v60; // [rsp+178h] [rbp+70h] BYREF
  __int64 v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]

  v43 = a2;
  *(_DWORD *)&GuidString.Length = 0;
  Object = 0LL;
  v61 = 0LL;
  v4 = 0;
  v62 = 0LL;
  *(_QWORD *)&ResourceManagerGuid.Data1 = 0LL;
  *(_QWORD *)ResourceManagerGuid.Data4 = 0LL;
  GuidString.Buffer = 0LL;
  *(_DWORD *)&Source.Length = 0;
  Source.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0LL;
  pplfoLog = 0LL;
  *(_DWORD *)&LogFileName.Length = 0;
  LogFileName.Buffer = 0LL;
  CreateOptions = 0;
  P = 0LL;
  ClientCookie = 0LL;
  v44 = 0;
  if ( CmpMiniNTBoot )
    return 0LL;
  v5 = qword_1403FFFF0;
  if ( a1 )
    v5 = a1;
  if ( (*(_DWORD *)(v5 + 160) & 0x8001) != 0 )
    return 0LL;
  v7 = CmpUuidCreate(&Uuid);
  if ( v7 < 0 || (v7 = CmpUuidCreate(&v60), v7 < 0) )
  {
    *(_DWORD *)(v5 + 4200) = 1;
    *(_DWORD *)(v5 + 4204) = v7;
    CmpLogTxrInitEvent(v6, v5, (unsigned int)v7);
    return (unsigned int)v7;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x6D524D43u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(v5 + 4200) = 1;
LABEL_69:
    v20 = -1073741670;
    *(_DWORD *)(v5 + 4204) = -1073741670;
    CmpLogTxrInitEvent(v9, v5, 3221225626LL);
    return (unsigned int)v20;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  Resource = (PERESOURCE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C724D43u);
  v11 = Resource;
  if ( !Resource )
  {
    ExFreePoolWithTag(v10, 0x6D524D43u);
    *(_DWORD *)(v5 + 4200) = 2;
    goto LABEL_69;
  }
  v10[3] = v10 + 2;
  v10[2] = v10 + 2;
  v10[11] = 0LL;
  v10[12] = 0LL;
  *((_DWORD *)v10 + 26) = a2 != 0 ? 4 : 0;
  *(_QWORD *)((char *)v10 + 108) = 0LL;
  *((_DWORD *)v10 + 17) = 0;
  v10[9] = 0LL;
  v10[16] = v11;
  ExInitializeResourceLite(v11);
  v12 = *(_QWORD *)(v5 + 64);
  if ( *(_DWORD *)(v12 + 164) != 1836346738 )
  {
    v16 = Uuid;
    *(_DWORD *)(v12 + 164) = 1836346738;
    goto LABEL_88;
  }
  v13 = (char *)Object;
  v14 = (char *)Object - *(_QWORD *)(v12 + 148);
  if ( Object == *(PVOID *)(v12 + 148) )
    v14 = (char *)Object - *(_QWORD *)(v12 + 156);
  if ( !v14 )
  {
    v44 = 1;
    v4 = 1;
    *(UUID *)(v12 + 148) = v60;
    v12 = *(_QWORD *)(v5 + 64);
  }
  v15 = &v13[-*(_QWORD *)(v12 + 112)];
  if ( v13 == *(char **)(v12 + 112) )
    v15 = &v13[-*(_QWORD *)(v12 + 120)];
  v16 = Uuid;
  if ( !v15 )
  {
    *(UUID *)(v12 + 112) = Uuid;
    v12 = *(_QWORD *)(v5 + 64);
    v4 = 1;
  }
  v17 = &v13[-*(_QWORD *)(v12 + 128)];
  if ( v13 == *(char **)(v12 + 128) )
    v17 = &v13[-*(_QWORD *)(v12 + 136)];
  if ( !v17 )
  {
    v4 = 1;
    *(_OWORD *)(v12 + 128) = *(_OWORD *)(v12 + 112);
  }
  while ( 1 )
  {
    if ( v4 )
    {
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(v5 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(v5 + 80, 0LL);
      HvMarkBaseBlockDirty(v5);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 80));
      KeAbPostRelease(v5 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v5 + 72));
      KeAbPostRelease(v5 + 72);
      CmpUnlockRegistry();
      v16 = Uuid;
    }
    v18 = *(void **)(v5 + 1536);
    v20 = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(v5 + 64) + 148LL), &GuidString, 1u);
    if ( v20 < 0 )
    {
      *(_DWORD *)(v5 + 4200) = 3;
      goto LABEL_104;
    }
    if ( a1 )
    {
      v20 = CmpQueryNameString(*(_QWORD *)(a1 + 1536), &Source);
      if ( v20 < 0 )
      {
        *(_DWORD *)(v5 + 4200) = 4;
        goto LABEL_104;
      }
      p_Source = &Source;
    }
    else
    {
      p_Source = (UNICODE_STRING *)&CmpLogPath;
      CreateOptions = 52;
    }
    Destination.MaximumLength = GuidString.Length + CmpClfsLogPrefix.Length + TmLogExt.Length + p_Source->Length;
    Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(Destination.MaximumLength);
    if ( !Destination.Buffer )
    {
      v20 = -1073741670;
      *(_DWORD *)(v5 + 4200) = 5;
LABEL_104:
      CmpLogTxrInitEvent(v19, v5, (unsigned int)v20);
      if ( ClientCookie )
      {
        ClfsMgmtDeregisterManagedClient(ClientCookie);
        ClientCookie = 0LL;
      }
      if ( pplfoLog )
        ClfsCloseLogFileObject(pplfoLog);
      if ( GuidString.Buffer )
        RtlFreeAnsiString(&GuidString);
      if ( Source.Buffer )
        RtlFreeAnsiString(&Source);
      if ( Destination.Buffer )
        RtlFreeAnsiString(&Destination);
      if ( v10 )
      {
        v40 = (void *)v10[6];
        if ( v40 )
          ZwClose(v40);
        v41 = (void *)v10[5];
        if ( v41 )
          ObfDereferenceObject(v41);
        v42 = (void *)v10[4];
        if ( v42 )
          ZwClose(v42);
        ExFreePoolWithTag(v10, 0x6D524D43u);
      }
      ExDeleteResourceLite(Resource);
      ExFreePoolWithTag(Resource, 0);
      *(_DWORD *)(v5 + 4204) = v20;
      return (unsigned int)v20;
    }
    RtlAppendUnicodeStringToString(&Destination, &CmpClfsLogPrefix);
    RtlAppendUnicodeStringToString(&Destination, p_Source);
    RtlAppendUnicodeStringToString(&Destination, &GuidString);
    RtlAppendUnicodeStringToString(&Destination, &TmLogExt);
    RtlFreeAnsiString(&GuidString);
    if ( a1 )
      RtlFreeAnsiString(&Source);
    v20 = CmpQueryFileSecurityDescriptor(v18, &P);
    if ( v20 < 0 )
    {
      *(_DWORD *)(v5 + 4200) = 6;
      goto LABEL_104;
    }
    v22 = P;
    v20 = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0000000, 7u, P, 3u, 8u, 0, 0x200u, 0LL, 0);
    ExFreePoolWithTag(v22, 0);
    if ( v20 >= 0 )
      break;
    if ( v44 )
    {
      *(_DWORD *)(v5 + 4200) = 7;
      goto LABEL_104;
    }
    RtlFreeAnsiString(&Destination);
    CmpLogTxrInitEvent(v39, v5, (unsigned int)v20);
LABEL_88:
    v4 = 1;
    v44 = 1;
    *(UUID *)(*(_QWORD *)(v5 + 64) + 148LL) = v60;
    *(UUID *)(*(_QWORD *)(v5 + 64) + 112LL) = v16;
    *(UUID *)(*(_QWORD *)(v5 + 64) + 128LL) = v16;
    if ( !a1 )
      v43 = 1;
  }
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  RegistrationData.Version = 1;
  v20 = ClfsMgmtRegisterManagedClient(pplfoLog, &RegistrationData, &ClientCookie);
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 8;
    goto LABEL_104;
  }
  v23 = (struct _CLFS_MGMT_POLICY *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)TmContainerExt + 24LL,
                                      0x6D524D43u);
  v24 = v23;
  if ( !v23 )
  {
    *(_DWORD *)(v5 + 4200) = 9;
    goto LABEL_104;
  }
  v25 = (unsigned __int16)TmContainerExt;
  *(_QWORD *)&v23->Version = 0LL;
  *(_QWORD *)&v23->PolicyFlags = 0LL;
  v23->PolicyParameters.NewContainerSuffix.NextContainerSuffix = 0LL;
  v26 = v25 + 24;
  v23->PolicyParameters.NewContainerPrefix.PrefixLengthInBytes = v25;
  v27 = off_140401DF8;
  v23->LengthInBytes = v25 + 24;
  v23->Version = 1;
  v23->PolicyType = ClfsMgmtPolicyNewContainerExtension;
  memmove((char *)&v23->PolicyParameters + 2, v27, v25);
  v20 = ClfsMgmtInstallPolicy(pplfoLog, v24, v26);
  ExFreePoolWithTag(v24, 0);
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 10;
    goto LABEL_104;
  }
  LogFileName.Length = Destination.Length - CmpClfsLogPrefix.Length;
  ObjectAttributes.Length = 48;
  LogFileName.MaximumLength = Destination.MaximumLength - CmpClfsLogPrefix.Length;
  LogFileName.Buffer = (wchar_t *)((char *)Destination.Buffer + CmpClfsLogPrefix.Length);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v28 = ZwCreateTransactionManager((PHANDLE)v10 + 4, 0xF003Fu, &ObjectAttributes, &LogFileName, CreateOptions, 0);
  v20 = v28;
  if ( v28 == -1073741771 )
  {
    if ( Destination.Buffer )
      RtlFreeAnsiString(&Destination);
    if ( pplfoLog )
    {
      ClfsCloseLogFileObject(pplfoLog);
      pplfoLog = 0LL;
    }
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( v44 )
      goto LABEL_38;
    goto LABEL_88;
  }
  if ( v28 >= 0 )
    v20 = ZwRecoverTransactionManager((HANDLE)v10[4]);
LABEL_38:
  RtlFreeAnsiString(&Destination);
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 11;
    goto LABEL_104;
  }
  if ( pplfoLog )
  {
    ClfsCloseLogFileObject(pplfoLog);
    pplfoLog = 0LL;
  }
  if ( ClientCookie )
  {
    ClfsMgmtDeregisterManagedClient(ClientCookie);
    ClientCookie = 0LL;
  }
  v20 = ObReferenceObjectByHandle(
          (HANDLE)v10[4],
          0xF003Fu,
          (POBJECT_TYPE)TmTransactionManagerObjectType,
          0,
          &Object,
          0LL);
  v10[5] = Object;
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 12;
    goto LABEL_104;
  }
  v29 = *(GUID *)(*(_QWORD *)(v5 + 64) + 112LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  v30 = (HANDLE *)(v10 + 6);
  ResourceManagerGuid = v29;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v20 = ZwCreateResourceManager(
          (PHANDLE)v10 + 6,
          0x1F007Fu,
          (HANDLE)v10[4],
          &ResourceManagerGuid,
          &ObjectAttributes,
          0,
          0LL);
  if ( v20 == -1073741771 )
    v20 = ZwOpenResourceManager((PHANDLE)v10 + 6, 0x1F007Fu, (HANDLE)v10[4], &ResourceManagerGuid, &ObjectAttributes);
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 13;
    goto LABEL_104;
  }
  v20 = ZwRecoverResourceManager(*v30);
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 14;
    goto LABEL_104;
  }
  v20 = ObReferenceObjectByHandle(*v30, 0x1F007Fu, (POBJECT_TYPE)TmResourceManagerObjectType, 0, &v55, 0LL);
  v10[7] = v55;
  if ( v20 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 15;
    goto LABEL_104;
  }
  if ( a1 )
  {
    *(_QWORD *)(a1 + 4192) = v10;
    *((_DWORD *)v10 + 16) = 1;
    goto LABEL_51;
  }
  CmRmSystem = v10;
  v34 = &qword_1403FFE28;
  v35 = 7LL;
  while ( 2 )
  {
    v36 = v34[3];
    if ( v36 && (*(_DWORD *)(v36 + 160) & 2) == 0 )
    {
      v37 = CmRmSystem;
      ++*((_DWORD *)CmRmSystem + 16);
      v38 = v34[3];
      goto LABEL_62;
    }
    if ( *v34 && (*(_DWORD *)(*v34 + 160) & 2) == 0 )
    {
      v37 = CmRmSystem;
      ++*((_DWORD *)CmRmSystem + 16);
      v38 = *v34;
LABEL_62:
      *(_QWORD *)(v38 + 4192) = v37;
    }
    v34 += 19;
    if ( --v35 )
      continue;
    break;
  }
  *((_QWORD *)CmpMasterHive + 524) = CmRmSystem;
  ++*((_DWORD *)CmRmSystem + 16);
LABEL_51:
  v10[10] = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
  v32 = (_QWORD *)qword_140438B18;
  if ( *(__int64 **)qword_140438B18 != &CmpRmListHead )
    __fastfail(3u);
  *v10 = &CmpRmListHead;
  v10[1] = v32;
  *v32 = v10;
  qword_140438B18 = (__int64)v10;
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v43 )
    CmpStartRMLog(v10, 0LL);
  return 0LL;
}
