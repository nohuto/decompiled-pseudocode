/*
 * XREFs of MiCreatePagingFile @ 0x140773BF8
 * Callers:
 *     NtManagePartition @ 0x140651090 (NtManagePartition.c)
 *     NtCreatePagingFile @ 0x140773BC0 (NtCreatePagingFile.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     RtlLengthSid @ 0x140004100 (RtlLengthSid.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiIncreaseCommitLimits @ 0x140193294 (MiIncreaseCommitLimits.c)
 *     MiReservePageHash @ 0x1401937DC (MiReservePageHash.c)
 *     MiCheckPageFileMapping @ 0x14019386C (MiCheckPageFileMapping.c)
 *     ZwSetInformationFile @ 0x1401C1130 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x1401C4070 (ZwSetSecurityObject.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x1402CDB00 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x1402CDBA8 (MiExtendPagingFileMaximum.c)
 *     MiIssuePageExtendRequest @ 0x1402CE42C (MiIssuePageExtendRequest.c)
 *     MiReduceCommitLimits @ 0x1402D99A0 (MiReduceCommitLimits.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     IoCreateFile @ 0x140617880 (IoCreateFile.c)
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
 *     MiEnablePartitionMappedWrites @ 0x1406502AC (MiEnablePartitionMappedWrites.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074843C (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x14077459C (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1407747B8 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x140774AAC (MiCreatePageFileSpaceBitmaps.c)
 *     MiZeroPageFileFirstPage @ 0x140774B20 (MiZeroPageFileFirstPage.c)
 *     IoInitializeCrashDump @ 0x140774C60 (IoInitializeCrashDump.c)
 *     PiPagePathSetState @ 0x140783ABC (PiPagePathSetState.c)
 *     SmpSystemStoreCreate @ 0x140787E4C (SmpSystemStoreCreate.c)
 *     MiDeletePagefile @ 0x14088C600 (MiDeletePagefile.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCreatePagingFile(
        _OWORD *a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6)
{
  LARGE_INTEGER v10; // rdi
  unsigned __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  void *v13; // r14
  unsigned __int16 v14; // cx
  char *v15; // r8
  ACL *v16; // r15
  int SecurityDescriptor; // r14d
  ULONG v18; // esi
  ULONG v19; // esi
  ACL *v20; // rax
  char v21; // al
  NTSTATUS v22; // eax
  struct _FILE_OBJECT *v23; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 Pagefile; // rax
  __int64 v28; // rbx
  int inserted; // edi
  NTSTATUS v31; // eax
  __int64 v32; // r15
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v34; // r9d
  unsigned int v35; // r13d
  __int64 v36; // rdx
  __int16 v37; // r8
  __int64 v38; // rbx
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rbx
  volatile signed __int64 *v44; // r15
  char v45; // di
  ULONG_PTR v46; // r13
  __int64 PageFileSpaceBitmaps; // rax
  int v48; // eax
  unsigned int v49; // [rsp+70h] [rbp-118h]
  char v50; // [rsp+74h] [rbp-114h]
  __int64 v51; // [rsp+78h] [rbp-110h]
  HANDLE FileHandle; // [rsp+80h] [rbp-108h] BYREF
  struct _KTHREAD *v53; // [rsp+88h] [rbp-100h]
  void *Src[2]; // [rsp+90h] [rbp-F8h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+A0h] [rbp-E8h] BYREF
  ACL *v56; // [rsp+A8h] [rbp-E0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-D8h] BYREF
  unsigned __int64 FileInformation; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v59[192]; // [rsp+C8h] [rbp-C0h] BYREF

  memset(&v59[56], 0, 0x30uLL);
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  Src[0] = 0LL;
  Src[1] = 0LL;
  FileInformation = 0LL;
  *(_QWORD *)v59 = 0LL;
  memset(&v59[120], 0, 0x28uLL);
  v56 = 0LL;
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
    v10 = *a2;
    AllocationSize = v10;
  }
  else
  {
    v10 = *a2;
    AllocationSize = v10;
  }
  if ( v10.QuadPart > 0xFFFFFFFE000uLL || v10.QuadPart < 0x100000 )
    return 3221225712LL;
  v11 = *a3;
  *(_QWORD *)&v59[16] = v11;
  if ( v11 > 0xFFFFFFFE000LL || v10.QuadPart > (__int64)v11 )
    return 3221225713LL;
  *(_OWORD *)Src = *a1;
  WORD1(Src[0]) = Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0xFFu )
    return 3221225523LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x20206D4Du);
  v13 = PoolWithTag;
  *(_QWORD *)&v59[32] = PoolWithTag;
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
  v16 = 0LL;
  v51 = 0LL;
  FileHandle = 0LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor(&v59[120], 1u);
  if ( SecurityDescriptor < 0 )
    goto LABEL_88;
  v18 = RtlLengthSid(SeAliasAdminsSid);
  v19 = RtlLengthSid(SeLocalSystemSid) + 32 + v18;
  v20 = (ACL *)ExAllocatePoolWithTag(PagedPool, v19, 0x6C636144u);
  v16 = v20;
  v56 = v20;
  if ( !v20 )
  {
    SecurityDescriptor = -1073741670;
    goto LABEL_88;
  }
  SecurityDescriptor = RtlCreateAcl(v20, v19, 2u);
  if ( SecurityDescriptor < 0
    || (SecurityDescriptor = RtlpAddKnownAce(v16, 2u, 0, 2032127, (unsigned __int8 *)SeAliasAdminsSid, 0),
        SecurityDescriptor < 0)
    || (SecurityDescriptor = RtlpAddKnownAce(v16, 2u, 0, 2032127, (unsigned __int8 *)SeLocalSystemSid, 0),
        SecurityDescriptor < 0)
    || (SecurityDescriptor = RtlSetDaclSecurityDescriptor(&v59[120], 1u, v16, 0), SecurityDescriptor < 0) )
  {
LABEL_88:
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    goto LABEL_90;
  }
  if ( a5 < 0 )
  {
    v50 = 3;
  }
  else
  {
    v21 = 0;
    if ( (a5 & 0x2000000) != 0 )
      v21 = 2;
    v50 = v21;
  }
  *(_DWORD *)&v59[56] = 48;
  *(_QWORD *)&v59[64] = 0LL;
  *(_DWORD *)&v59[80] = 576;
  *(_QWORD *)&v59[72] = Src;
  *(_QWORD *)&v59[88] = &v59[120];
  *(_QWORD *)&v59[96] = 0LL;
  FileInformation = (v10.QuadPart + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( IoCreateFile(
         &FileHandle,
         0x140003u,
         (POBJECT_ATTRIBUTES)&v59[56],
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
    SecurityDescriptor = MiEnablePartitionMappedWrites((_QWORD *)a6);
    if ( SecurityDescriptor >= 0 )
    {
      if ( IoStatusBlock.Status < 0
        || (SecurityDescriptor = ZwSetSecurityObject(FileHandle, 4u, &v59[120]), SecurityDescriptor >= 0) )
      {
        ExFreePoolWithTag(v16, 0);
        v16 = 0LL;
        SecurityDescriptor = IoStatusBlock.Status;
        if ( IoStatusBlock.Status >= 0 )
        {
          SecurityDescriptor = ZwSetInformationFile(
                                 FileHandle,
                                 &IoStatusBlock,
                                 &FileInformation,
                                 8u,
                                 FileEndOfFileInformation);
          if ( SecurityDescriptor >= 0 )
          {
            SecurityDescriptor = IoStatusBlock.Status;
            if ( IoStatusBlock.Status >= 0 )
            {
              v22 = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, (PVOID *)&v59[48], 0LL);
              v23 = *(struct _FILE_OBJECT **)&v59[48];
              *(_QWORD *)&v59[24] = *(_QWORD *)&v59[48];
              SecurityDescriptor = v22;
              if ( v22 >= 0 )
              {
                DeviceType = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v59[48])->DeviceType;
                if ( (unsigned int)DeviceType <= 0x36 && (v25 = 0x60000000100100LL, _bittest64(&v25, DeviceType)) )
                {
                  SecurityDescriptor = MiCheckPageFileMapping((__int64)v23);
                  if ( SecurityDescriptor >= 0 )
                  {
                    SecurityDescriptor = IopQueryXxxInformation(v23, 4, 8u, 0, (struct _IRP *)v59, &v59[40], 0);
                    if ( SecurityDescriptor >= 0 )
                    {
                      if ( (v59[4] & 4) != 0 )
                      {
                        SecurityDescriptor = -1073741468;
                      }
                      else
                      {
                        SecurityDescriptor = PiPagePathSetState(v23);
                        if ( SecurityDescriptor >= 0 )
                        {
                          FsRtlIssueFileNotificationFsctl(v23, v26, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE);
                          if ( (ULONG_PTR *)a6 != &MiSystemPartition
                            || (SecurityDescriptor = MiZeroPageFileFirstPage(v23), SecurityDescriptor >= 0) )
                          {
                            Pagefile = MiCreatePagefile(
                                         a6,
                                         (_DWORD)v23,
                                         (_DWORD)FileHandle,
                                         (unsigned __int64)AllocationSize.QuadPart >> 12,
                                         v11 >> 12,
                                         (__int64)Src,
                                         a5,
                                         1);
                            v28 = Pagefile;
                            if ( Pagefile )
                            {
                              inserted = MiInsertPageFileInList(Pagefile);
                              if ( inserted < 0 )
                              {
                                MiDeletePagefile((PVOID)v28);
                                return (unsigned int)inserted;
                              }
                              else
                              {
                                if ( (ULONG_PTR *)a6 == &MiSystemPartition )
                                {
                                  if ( (*(_BYTE *)(v28 + 204) & 0xF) == 0 && (dword_14058C180 & 3) != 0 )
                                    SmpSystemStoreCreate();
                                  if ( !byte_140465F00 && (*(_BYTE *)(v28 + 204) & 0x10) == 0 )
                                  {
                                    *(_OWORD *)&v59[104] = *(_OWORD *)(v28 + 96);
                                    byte_140465F00 = IoInitializeCrashDump(FileHandle);
                                  }
                                }
                                return 0LL;
                              }
                            }
                            return 3221225626LL;
                          }
                          PiPagePathSetState(v23);
                        }
                      }
                    }
                  }
                }
                else
                {
                  SecurityDescriptor = -1073741489;
                }
                goto LABEL_86;
              }
            }
          }
        }
      }
    }
    goto LABEL_88;
  }
  SecurityDescriptor = IoCreateFile(
                         &FileHandle,
                         0x100002u,
                         (POBJECT_ATTRIBUTES)&v59[56],
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
  if ( SecurityDescriptor >= 0 )
  {
    v31 = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, (PVOID *)&v59[8], 0LL);
    *(_QWORD *)&v59[24] = *(_QWORD *)&v59[8];
    SecurityDescriptor = v31;
    if ( v31 < 0 )
      goto LABEL_88;
    v32 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v53 = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a6 + 1032, 0LL);
    v34 = *(_DWORD *)(a6 + 7896);
    v35 = 0;
    v49 = 0;
    if ( v34 )
    {
      while ( 1 )
      {
        v36 = *(_QWORD *)(a6 + 8LL * v35 + 7904);
        v37 = *(_WORD *)(v36 + 204);
        if ( (v37 & 0x40) == 0 && *(_QWORD *)(*(_QWORD *)(v36 + 56) + 40LL) == *(_QWORD *)(*(_QWORD *)&v59[8] + 40LL) )
          break;
        v49 = ++v35;
        if ( v35 >= v34 )
          goto LABEL_72;
      }
      if ( ((~v37 & 0x10) != 0) != ((v50 & 1) == 0) )
      {
        SecurityDescriptor = -1073741811;
        goto LABEL_109;
      }
      v32 = *(_QWORD *)(a6 + 8LL * v35 + 7904);
    }
LABEL_72:
    if ( v32 )
    {
      v38 = *(_QWORD *)&v59[16] >> 12;
      v39 = (unsigned __int64)AllocationSize.QuadPart >> 12;
      v40 = (unsigned int)((unsigned __int64)AllocationSize.QuadPart >> 12);
      if ( *(_QWORD *)(v32 + 16) > v40 )
      {
        SecurityDescriptor = -1073741584;
      }
      else
      {
        v41 = *(_QWORD *)(v32 + 8);
        if ( v41 <= (unsigned int)v38 )
        {
          if ( v41 >= (unsigned int)v38 )
          {
            v42 = a6;
            goto LABEL_77;
          }
          if ( (*(_BYTE *)(v32 + 204) & 0x10) != 0
            || (v51 = (unsigned int)v38 - v41, (unsigned int)MiIncreaseCommitLimits(a6, 0LL, v51, 0, 0LL)) )
          {
            v46 = 0LL;
            if ( *(_QWORD *)(v32 + 216) && (v46 = MiReservePageHash(v38)) == 0
              || (PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps((unsigned int)v38)) == 0 )
            {
              SecurityDescriptor = -1073741670;
LABEL_80:
              v43 = v51;
LABEL_81:
              CurrentThread = v53;
              goto LABEL_82;
            }
            MiExtendPagingFileMaximum((_QWORD *)v32, PageFileSpaceBitmaps, v46);
            v42 = a6;
            if ( (unsigned __int64)(*(_QWORD *)(a6 + 8424) + 100LL) > *(_QWORD *)(a6 + 8552)
              && (unsigned int)MiChargeCommit(a6, 0xC8uLL, 0) == 1 )
            {
              MiReturnCommit(a6, 0xC8uLL);
            }
            v35 = v49;
LABEL_77:
            if ( v40 > *(_QWORD *)(v32 + 16) )
            {
              while ( v40 <= *(_QWORD *)v32 )
              {
                if ( (unsigned int)MiCheckAndUpdatePagingFileMinimum((unsigned __int64 *)v32, v39) == 1 )
                  goto LABEL_78;
              }
              MiIssuePageExtendRequest(v42, v40 - *(_QWORD *)v32, 1, v35);
              v48 = SecurityDescriptor;
              if ( *(_QWORD *)(v32 + 16) < v40 )
                v48 = -1073741670;
              SecurityDescriptor = v48;
            }
LABEL_78:
            if ( (v50 & 2) != 0 )
              *(_WORD *)(v32 + 204) |= 0x80u;
            goto LABEL_80;
          }
        }
        SecurityDescriptor = -1073741583;
      }
      v43 = 0LL;
      goto LABEL_81;
    }
    SecurityDescriptor = -1073741275;
LABEL_109:
    v43 = 0LL;
LABEL_82:
    v44 = (volatile signed __int64 *)(a6 + 1032);
    v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a6 + 1032), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v45 & 2) != 0 && (v45 & 4) == 0 )
      ExfTryToWakePushLock(v44);
    KeAbPostRelease((ULONG_PTR)v44);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v43 )
      MiReduceCommitLimits((_QWORD *)a6, 0LL, v43);
    v16 = v56;
LABEL_86:
    if ( *(_QWORD *)&v59[24] )
      ObfDereferenceObject(*(PVOID *)&v59[24]);
    goto LABEL_88;
  }
LABEL_90:
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  ExFreePoolWithTag(*(PVOID *)&v59[32], 0);
  return (unsigned int)SecurityDescriptor;
}
