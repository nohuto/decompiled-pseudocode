/*
 * XREFs of MiCreatePagingFile @ 0x14074D1A8
 * Callers:
 *     NtManagePartition @ 0x140609170 (NtManagePartition.c)
 *     NtCreatePagingFile @ 0x14074D170 (NtCreatePagingFile.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     MiIncreaseCommitLimits @ 0x140187FC8 (MiIncreaseCommitLimits.c)
 *     MiReservePageHash @ 0x1401884E8 (MiReservePageHash.c)
 *     MiCheckPageFileMapping @ 0x140188578 (MiCheckPageFileMapping.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x1401BB6F0 (ZwSetSecurityObject.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x1402B7B24 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x1402B7BC0 (MiExtendPagingFileMaximum.c)
 *     MiIssuePageExtendRequest @ 0x1402B855C (MiIssuePageExtendRequest.c)
 *     MiReduceCommitLimits @ 0x1402C04F4 (MiReduceCommitLimits.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     IoCreateFile @ 0x14060B8B0 (IoCreateFile.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     MiEnablePartitionMappedWrites @ 0x14061CE6C (MiEnablePartitionMappedWrites.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071F120 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x14074DB00 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x14074DD10 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x14074DFF8 (MiCreatePageFileSpaceBitmaps.c)
 *     MiZeroPageFileFirstPage @ 0x14074E06C (MiZeroPageFileFirstPage.c)
 *     IoInitializeCrashDump @ 0x14074E190 (IoInitializeCrashDump.c)
 *     PiPagePathSetState @ 0x14075D3CC (PiPagePathSetState.c)
 *     SmpSystemStoreCreate @ 0x14075FD18 (SmpSystemStoreCreate.c)
 *     MiDeletePagefile @ 0x140854350 (MiDeletePagefile.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCreatePagingFile(
        _OWORD *a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6)
{
  __int64 QuadPart; // rdi
  unsigned __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  PVOID v13; // r15
  unsigned __int16 v14; // cx
  char *v15; // r8
  int Acl; // r14d
  ULONG v17; // esi
  ULONG v18; // esi
  ACL *v19; // rax
  unsigned int v20; // esi
  __int64 v21; // rdi
  struct _FILE_OBJECT *v22; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 Pagefile; // rax
  __int64 v27; // rbx
  int inserted; // edi
  __int64 v30; // r15
  struct _KTHREAD *CurrentThread; // r13
  __int64 v32; // rcx
  unsigned int v33; // r9d
  unsigned int v34; // r12d
  __int64 v35; // rdx
  __int16 v36; // r8
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // rdx
  volatile signed __int64 *v41; // rsi
  char v42; // al
  ULONG_PTR v43; // r12
  __int64 PageFileSpaceBitmaps; // rax
  int v45; // eax
  unsigned int v46; // [rsp+70h] [rbp-118h]
  __int64 v47; // [rsp+78h] [rbp-110h]
  HANDLE FileHandle; // [rsp+80h] [rbp-108h] BYREF
  struct _KTHREAD *v49; // [rsp+88h] [rbp-100h]
  void *Src[2]; // [rsp+90h] [rbp-F8h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+A0h] [rbp-E8h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp-E0h]
  PVOID P; // [rsp+B0h] [rbp-D8h]
  PVOID v54; // [rsp+B8h] [rbp-D0h] BYREF
  unsigned __int64 v55; // [rsp+C0h] [rbp-C8h]
  PVOID v56; // [rsp+C8h] [rbp-C0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-A8h] BYREF
  unsigned __int64 FileInformation; // [rsp+E8h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-88h] BYREF
  __int128 v63; // [rsp+130h] [rbp-58h]
  _BYTE SecurityDescriptor[48]; // [rsp+140h] [rbp-48h] BYREF

  Dacl = 0LL;
  if ( (ULONG_PTR *)a6 != &MiSystemPartition && a5 || (a5 & 0xFFFFFF) != 0 || a5 < 0 && (a5 & 0x42000000) != 0 )
    return 3221225714LL;
  if ( a4 )
  {
    if ( !SeSinglePrivilegeCheck(SeCreatePagefilePrivilege, a4) || PsIsCurrentThreadInServerSilo() )
      return 3221225569LL;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = a2->QuadPart;
    AllocationSize.QuadPart = QuadPart;
  }
  else
  {
    QuadPart = a2->QuadPart;
    AllocationSize = *a2;
  }
  if ( (unsigned __int64)QuadPart > 0xFFFFFFFE000LL || QuadPart < 0x100000 )
    return 3221225712LL;
  v11 = *a3;
  v55 = v11;
  if ( v11 > 0xFFFFFFFE000LL || QuadPart > (__int64)v11 )
    return 3221225713LL;
  *(_OWORD *)Src = *a1;
  WORD1(Src[0]) = Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0xFFu )
    return 3221225523LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x20206D4Du);
  v13 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( a4 )
  {
    v14 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0]) )
    {
      v15 = (char *)Src[1] + LOWORD(Src[0]);
      if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < Src[1] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v14 = (unsigned __int16)Src[0];
      }
    }
    memmove(PoolWithTag, Src[1], v14);
  }
  else
  {
    memmove(PoolWithTag, Src[1], LOWORD(Src[0]));
  }
  Src[1] = v13;
  v47 = 0LL;
  FileHandle = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl < 0 )
    goto LABEL_86;
  v17 = RtlLengthSid(SeAliasAdminsSid);
  v18 = RtlLengthSid(SeLocalSystemSid) + 32 + v17;
  v19 = (ACL *)ExAllocatePoolWithTag(PagedPool, v18, 0x6C636144u);
  Dacl = v19;
  if ( !v19 )
  {
    Acl = -1073741670;
    goto LABEL_86;
  }
  Acl = RtlCreateAcl(v19, v18, 2u);
  if ( Acl < 0
    || (Acl = RtlpAddKnownAce(Dacl, 2u, 0, 2032127, (unsigned __int8 *)SeAliasAdminsSid, 0), Acl < 0)
    || (Acl = RtlpAddKnownAce(Dacl, 2u, 0, 2032127, (unsigned __int8 *)SeLocalSystemSid, 0), Acl < 0)
    || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0), Acl < 0) )
  {
LABEL_86:
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    goto LABEL_88;
  }
  if ( a5 < 0 )
  {
    v20 = 3;
  }
  else
  {
    v20 = 0;
    if ( (a5 & 0x2000000) != 0 )
      v20 = 2;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)Src;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  FileInformation = (QuadPart + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v21 = 0LL;
  if ( IoCreateFile(
         &FileHandle,
         0x140003u,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
         6u,
         2u,
         0,
         0x9008u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x112u) >= 0 )
  {
    Acl = MiEnablePartitionMappedWrites((_QWORD *)a6);
    if ( Acl >= 0 )
    {
      if ( IoStatusBlock.Status < 0 || (Acl = ZwSetSecurityObject(FileHandle, 4u, SecurityDescriptor), Acl >= 0) )
      {
        ExFreePoolWithTag(Dacl, 0);
        Dacl = 0LL;
        Acl = IoStatusBlock.Status;
        if ( IoStatusBlock.Status >= 0 )
        {
          Acl = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
          if ( Acl >= 0 )
          {
            Acl = IoStatusBlock.Status;
            if ( IoStatusBlock.Status >= 0 )
            {
              Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
              v22 = (struct _FILE_OBJECT *)Object;
              v56 = Object;
              if ( Acl >= 0 )
              {
                DeviceType = IoGetRelatedDeviceObject((PFILE_OBJECT)Object)->DeviceType;
                if ( (unsigned int)DeviceType > 0x36 || (v24 = 0x60000000100100LL, !_bittest64(&v24, DeviceType)) )
                {
                  Acl = -1073741489;
                  goto LABEL_84;
                }
                Acl = MiCheckPageFileMapping((__int64)v22);
                if ( Acl < 0 )
                  goto LABEL_84;
                Acl = IopQueryXxxInformation(v22, 4, 8u, 0, (struct _IRP *)&v61, &v58, 0);
                if ( Acl < 0 )
                  goto LABEL_84;
                if ( (v61 & 0x400000000LL) != 0 )
                {
                  Acl = -1073741468;
                  goto LABEL_84;
                }
                Acl = PiPagePathSetState(v22);
                if ( Acl >= 0 )
                {
                  FsRtlIssueFileNotificationFsctl(v22, v25, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE);
                  if ( (ULONG_PTR *)a6 == &MiSystemPartition )
                  {
                    Acl = MiZeroPageFileFirstPage(v22);
                    if ( Acl < 0 )
                    {
                      PiPagePathSetState(v22);
                      goto LABEL_84;
                    }
                  }
                  Pagefile = MiCreatePagefile(
                               a6,
                               (_DWORD)v22,
                               (_DWORD)FileHandle,
                               (unsigned __int64)AllocationSize.QuadPart >> 12,
                               v11 >> 12,
                               (__int64)Src,
                               a5,
                               1);
                  v27 = Pagefile;
                  if ( Pagefile )
                  {
                    inserted = MiInsertPageFileInList(Pagefile);
                    if ( inserted < 0 )
                    {
                      MiDeletePagefile((PVOID)v27);
                      return (unsigned int)inserted;
                    }
                    else
                    {
                      if ( (ULONG_PTR *)a6 == &MiSystemPartition )
                      {
                        if ( (*(_BYTE *)(v27 + 204) & 0xF) == 0 && (dword_14055C180 & 3) != 0 )
                          SmpSystemStoreCreate();
                        if ( !byte_14043B820 && (*(_BYTE *)(v27 + 204) & 0x10) == 0 )
                        {
                          v63 = *(_OWORD *)(v27 + 96);
                          byte_14043B820 = IoInitializeCrashDump(FileHandle);
                        }
                      }
                      return 0LL;
                    }
                  }
                  return 3221225626LL;
                }
LABEL_84:
                if ( v56 )
                  ObfDereferenceObject(v56);
              }
            }
          }
        }
      }
    }
    goto LABEL_86;
  }
  Acl = IoCreateFile(
          &FileHandle,
          0x100002u,
          &ObjectAttributes,
          &IoStatusBlock,
          &AllocationSize,
          6u,
          3u,
          1u,
          0x8008u,
          0LL,
          0,
          CreateFileTypeNone,
          0LL,
          0x112u);
  if ( Acl >= 0 )
  {
    Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &v54, 0LL);
    v56 = v54;
    if ( Acl >= 0 )
    {
      v30 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v49 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a6 + 1024, 0LL);
      v32 = a6;
      v33 = *(_DWORD *)(a6 + 7128);
      v34 = 0;
      v46 = 0;
      if ( !v33 )
        goto LABEL_71;
      while ( 1 )
      {
        v35 = *(_QWORD *)(v32 + 8LL * v34 + 7136);
        v36 = *(_WORD *)(v35 + 204);
        if ( (v36 & 0x40) == 0 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v35 + 56) + 40LL) == *((_QWORD *)v54 + 5) )
          {
            if ( ((~v36 & 0x10) != 0) != ((v20 & 1) == 0) )
            {
              Acl = -1073741811;
              goto LABEL_80;
            }
            v30 = *(_QWORD *)(v32 + 8LL * v34 + 7136);
LABEL_71:
            if ( !v30 )
            {
              Acl = -1073741275;
              goto LABEL_80;
            }
            v37 = v55 >> 12;
            v38 = (unsigned __int64)AllocationSize.QuadPart >> 12;
            v39 = (unsigned int)((unsigned __int64)AllocationSize.QuadPart >> 12);
            if ( *(_QWORD *)(v30 + 16) > v39 )
            {
              Acl = -1073741584;
            }
            else
            {
              v40 = *(_QWORD *)(v30 + 8);
              if ( (unsigned int)v37 < v40 )
              {
                Acl = -1073741583;
              }
              else
              {
                if ( (unsigned int)v37 <= v40 )
                  goto LABEL_75;
                v43 = 0LL;
                if ( (*(_BYTE *)(v30 + 204) & 0x10) == 0 )
                {
                  v47 = (unsigned int)v37 - v40;
                  if ( !(unsigned int)MiIncreaseCommitLimits(a6, 0LL, v47, 0, 0LL) )
                  {
                    v21 = 0LL;
                    Acl = -1073741583;
LABEL_79:
                    CurrentThread = v49;
LABEL_80:
                    v41 = (volatile signed __int64 *)(a6 + 1024);
                    v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a6 + 1024), 0xFFFFFFFFFFFFFFFFuLL);
                    if ( (v42 & 2) != 0 && (v42 & 4) == 0 )
                      ExfTryToWakePushLock(v41);
                    KeAbPostRelease((ULONG_PTR)v41);
                    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                    if ( v21 )
                      MiReduceCommitLimits((_QWORD *)a6, 0LL, v21);
                    v13 = P;
                    goto LABEL_84;
                  }
                }
                if ( (!*(_QWORD *)(v30 + 216) || (v43 = MiReservePageHash(v37)) != 0)
                  && (PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps((unsigned int)v37)) != 0 )
                {
                  MiExtendPagingFileMaximum((_QWORD *)v30, PageFileSpaceBitmaps, v43);
                  if ( (unsigned __int64)(*(_QWORD *)(a6 + 7656) + 100LL) > *(_QWORD *)(a6 + 7784)
                    && (unsigned int)MiChargeCommit(a6, 0xC8uLL, 0) == 1 )
                  {
                    MiReturnCommit(a6, 0xC8uLL);
                  }
                  v34 = v46;
LABEL_75:
                  if ( v39 > *(_QWORD *)(v30 + 16) )
                  {
                    while ( v39 <= *(_QWORD *)v30 )
                    {
                      if ( (unsigned int)MiCheckAndUpdatePagingFileMinimum((unsigned __int64 *)v30, v38) == 1 )
                        goto LABEL_76;
                    }
                    MiIssuePageExtendRequest(a6, v39 - *(_QWORD *)v30, 1LL, v34);
                    v45 = Acl;
                    if ( *(_QWORD *)(v30 + 16) < v39 )
                      v45 = -1073741670;
                    Acl = v45;
                  }
LABEL_76:
                  if ( v20 >= 2 )
                    *(_WORD *)(v30 + 204) |= 0x80u;
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
            v21 = v47;
            goto LABEL_79;
          }
          v32 = a6;
        }
        v46 = ++v34;
        if ( v34 >= v33 )
          goto LABEL_71;
      }
    }
    goto LABEL_86;
  }
LABEL_88:
  if ( Dacl )
    ExFreePoolWithTag(Dacl, 0);
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)Acl;
}
