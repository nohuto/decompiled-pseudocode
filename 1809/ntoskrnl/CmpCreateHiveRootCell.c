/*
 * XREFs of CmpCreateHiveRootCell @ 0x14075CD88
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1405A83BC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpCopyName @ 0x1405ADDB0 (CmpCopyName.c)
 *     SeAssignSecurity @ 0x1405AE0F0 (SeAssignSecurity.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 *     CmpRecordParseFailure @ 0x140699420 (CmpRecordParseFailure.c)
 *     CmpNameSize @ 0x1406A6734 (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x1406AEE30 (SeDeassignSecurity.c)
 *     HvMarkBaseBlockDirty @ 0x1406CC1D4 (HvMarkBaseBlockDirty.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F6418 (CmpGenerateAppHiveSecurityDescriptor.c)
 */

__int64 __fastcall CmpCreateHiveRootCell(
        ULONG_PTR BugCheckParameter2,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  signed __int64 *v6; // rbx
  unsigned int v9; // edi
  unsigned int v10; // r12d
  int SecurityDescriptorNode; // esi
  _DWORD *v12; // r15
  _WORD *v13; // rbx
  unsigned __int16 v14; // ax
  struct _SECURITY_SUBJECT_CONTEXT *v15; // rbx
  PSECURITY_DESCRIPTOR v16; // rdi
  NTSTATUS v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rbx
  void *v21; // rcx
  void *v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+90h] [rbp+40h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *v26; // [rsp+98h] [rbp+48h]

  v26 = a2;
  v23 = 0LL;
  NewDescriptor = 0LL;
  v6 = (signed __int64 *)(BugCheckParameter2 + 72);
  v24 = 0xFFFFFFFFLL;
  ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
  v9 = (unsigned __int16)CmpNameSize(a3) + 76;
  v10 = HvAllocateCell(BugCheckParameter2, v9, 0, &v23, &v24);
  if ( v10 == -1 )
  {
    SecurityDescriptorNode = -1073741670;
    CmpRecordParseFailure(a4, 196864, -1073741670);
    v12 = v23;
    goto LABEL_30;
  }
  v13 = v23;
  memset(v23, 0, v9);
  *(_DWORD *)v13 = 813934;
  v12 = v23;
  *(_QWORD *)((char *)v23 + 4) = MEMORY[0xFFFFF78000000014];
  v12[4] = -1;
  v12[7] = -1;
  v12[8] = -1;
  v12[10] = -1;
  v12[11] = -1;
  v12[12] = -1;
  v14 = CmpCopyName((_BYTE *)v12 + 76, (const void **)a3);
  *((_WORD *)v12 + 36) = v14;
  if ( v14 < *a3 )
    v13[1] |= 0x20u;
  v15 = v26;
  if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) == 0 )
  {
    v17 = SeAssignSecurity(
            0LL,
            v26[2].ClientToken,
            &NewDescriptor,
            1u,
            v26 + 1,
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            *((POOL_TYPE *)CmKeyObjectType + 25));
    SecurityDescriptorNode = v17;
    if ( v17 < 0 )
    {
      CmpRecordParseFailure(a4, 197376, v17);
      goto LABEL_19;
    }
    v16 = NewDescriptor;
LABEL_11:
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 1776, 0LL);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               BugCheckParameter2,
                               v10,
                               (__int64)v12,
                               v10 >> 31,
                               v16,
                               0,
                               v12 + 11);
    ExReleasePushLockEx(BugCheckParameter2 + 1776, 0LL);
    if ( SecurityDescriptorNode < 0 )
    {
      CmpRecordParseFailure(a4, 197632, SecurityDescriptorNode);
      v15 = v26;
      goto LABEL_20;
    }
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a4 + 48) + 80LL, 0LL);
    HvMarkBaseBlockDirty(*(_QWORD *)(a4 + 48));
    v18 = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(a4 + 48));
    v19 = *(_QWORD *)(a4 + 48);
    SecurityDescriptorNode = v18;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v19 + 80));
    KeAbPostRelease(v19 + 80);
    if ( SecurityDescriptorNode >= 0 )
    {
      SecurityDescriptorNode = 0;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) = v10;
      *a5 = v10;
      v10 = -1;
    }
    else
    {
      CmpRecordParseFailure(a4, 197888, SecurityDescriptorNode);
    }
    v15 = v26;
    v12 = v23;
LABEL_19:
    v16 = NewDescriptor;
LABEL_20:
    if ( v16 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) != 0 )
      {
        ExFreePoolWithTag(v16, 0);
      }
      else if ( (*(_DWORD *)a4 & 1) != 0 && (*(_DWORD *)(a4 + 24) & 4) != 0 )
      {
        SeDeassignSecurity(&NewDescriptor);
      }
      else
      {
        v20 = *(_QWORD *)&v15[2].ImpersonationLevel;
        v21 = *(void **)(v20 + 48);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        *(_QWORD *)(v20 + 48) = v16;
      }
    }
    goto LABEL_29;
  }
  NewDescriptor = (PSECURITY_DESCRIPTOR)CmpGenerateAppHiveSecurityDescriptor(&v26[1]);
  v16 = NewDescriptor;
  if ( NewDescriptor )
    goto LABEL_11;
  SecurityDescriptorNode = -1073741670;
  CmpRecordParseFailure(a4, 197120, -1073741670);
LABEL_29:
  v6 = (signed __int64 *)(BugCheckParameter2 + 72);
LABEL_30:
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
  if ( v10 != -1 )
    HvFreeCell(BugCheckParameter2, v10);
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return (unsigned int)SecurityDescriptorNode;
}
