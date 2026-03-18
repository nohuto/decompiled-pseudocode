/*
 * XREFs of CmpCreateHiveRootCell @ 0x140785F80
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     HvUnlockHiveFlusherShared @ 0x14062D480 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14062D4B4 (HvLockHiveFlusherShared.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     CmpCopyName @ 0x14062E02C (CmpCopyName.c)
 *     HvAllocateCell @ 0x14062E37C (HvAllocateCell.c)
 *     CmUnlockHiveSecurity @ 0x140631104 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x140631124 (CmLockHiveSecurityExclusive.c)
 *     SeAssignSecurity @ 0x140631550 (SeAssignSecurity.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14065EEFC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpRecordParseFailure @ 0x1406BD8F0 (CmpRecordParseFailure.c)
 *     CmpNameSize @ 0x1406C6CB8 (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x1406D1F90 (SeDeassignSecurity.c)
 *     HvUnlockHiveWriter @ 0x1406E8798 (HvUnlockHiveWriter.c)
 *     HvMarkBaseBlockDirty @ 0x1406EAC04 (HvMarkBaseBlockDirty.c)
 *     HvLockHiveWriter @ 0x1406EC398 (HvLockHiveWriter.c)
 *     CmpAssignSecurityDescriptor @ 0x14082D780 (CmpAssignSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14082DFC0 (CmpGenerateAppHiveSecurityDescriptor.c)
 */

__int64 __fastcall CmpCreateHiveRootCell(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v9; // ebx
  unsigned int Cell; // r15d
  size_t v11; // r8
  _WORD *v12; // rbx
  _DWORD *v13; // r13
  unsigned __int16 v14; // ax
  NTSTATUS v15; // eax
  int v16; // ebx
  PSECURITY_DESCRIPTOR v17; // r14
  __int64 v18; // rsi
  void *v19; // rcx
  int v21; // edx
  void *v22; // [rsp+40h] [rbp-10h] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+80h] [rbp+30h] BYREF

  v22 = 0LL;
  NewDescriptor = 0LL;
  v23 = 0xFFFFFFFFLL;
  HvLockHiveFlusherShared(BugCheckParameter2);
  v9 = (unsigned __int16)CmpNameSize(a3) + 76;
  Cell = HvAllocateCell(BugCheckParameter2, v9, 0LL, (__int64)&v22, (__int64)&v23);
  if ( Cell == -1 )
  {
    v16 = -1073741670;
    CmpRecordParseFailure(a4, 196864, -1073741670);
    v13 = v22;
    goto LABEL_17;
  }
  v11 = v9;
  v12 = v22;
  memset(v22, 0, v11);
  *(_DWORD *)v12 = 813934;
  v13 = v22;
  *(_QWORD *)((char *)v22 + 4) = MEMORY[0xFFFFF78000000014];
  v13[4] = -1;
  v13[7] = -1;
  v13[8] = -1;
  v13[10] = -1;
  v13[11] = -1;
  v13[12] = -1;
  v14 = CmpCopyName((_BYTE *)v13 + 76, a3);
  *((_WORD *)v13 + 36) = v14;
  if ( v14 < *a3 )
    v12[1] |= 0x20u;
  if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) != 0 )
  {
    NewDescriptor = (PSECURITY_DESCRIPTOR)CmpGenerateAppHiveSecurityDescriptor(a2 + 32);
    v17 = NewDescriptor;
    if ( !NewDescriptor )
    {
      v16 = -1073741670;
      CmpRecordParseFailure(a4, 197120, -1073741670);
      goto LABEL_17;
    }
  }
  else
  {
    v15 = SeAssignSecurity(
            0LL,
            *(PSECURITY_DESCRIPTOR *)(a2 + 64),
            &NewDescriptor,
            1u,
            (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            *((POOL_TYPE *)CmKeyObjectType + 25));
    v16 = v15;
    if ( v15 < 0 )
    {
      CmpRecordParseFailure(a4, 197376, v15);
      v17 = NewDescriptor;
      goto LABEL_10;
    }
    v17 = NewDescriptor;
  }
  CmLockHiveSecurityExclusive(BugCheckParameter2);
  v16 = CmpAssignSecurityDescriptor(BugCheckParameter2, Cell, (_DWORD)v13, (_DWORD)v17, 0);
  CmUnlockHiveSecurity(BugCheckParameter2);
  if ( v16 < 0 )
  {
    v21 = 197632;
  }
  else
  {
    HvLockHiveWriter(*(_QWORD *)(a4 + 48));
    HvMarkBaseBlockDirty(*(_QWORD *)(a4 + 48));
    v16 = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(a4 + 48));
    HvUnlockHiveWriter(*(_QWORD *)(a4 + 48));
    if ( v16 >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) = Cell;
      *a5 = Cell;
      Cell = -1;
      v16 = 0;
      goto LABEL_10;
    }
    v21 = 197888;
  }
  CmpRecordParseFailure(a4, v21, v16);
LABEL_10:
  if ( v17 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) != 0 )
    {
      ExFreePoolWithTag(v17, 0);
    }
    else if ( (*(_DWORD *)a4 & 1) != 0 && (*(_DWORD *)(a4 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v18 = *(_QWORD *)(a2 + 72);
      v19 = *(void **)(v18 + 48);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(v18 + 48) = v17;
    }
  }
LABEL_17:
  if ( v13 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
  if ( Cell != -1 )
    HvFreeCell(BugCheckParameter2, Cell);
  HvUnlockHiveFlusherShared(BugCheckParameter2);
  return (unsigned int)v16;
}
