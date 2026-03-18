/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x1406F6808
 * Callers:
 *     CmpVEPerformOpenAccessCheck @ 0x1406AD8A4 (CmpVEPerformOpenAccessCheck.c)
 *     CmpDoAccessCheckOnKCB @ 0x14082C810 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeLockSubjectContext @ 0x1405F5DB0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F5E10 (SeUnlockSubjectContext.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140631AE8 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140687000 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarm @ 0x1406BEF00 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1406BEF60 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall CmpCheckKeyBodyAccess(
        _QWORD *Object,
        __int64 ObjectCreated,
        PACCESS_STATE AccessState,
        KPROCESSOR_MODE AccessMode,
        NTSTATUS *a5)
{
  __int64 v9; // r8
  struct _LOOKASIDE_LIST_EX *v10; // r9
  NTSTATUS v11; // esi
  void *v12; // rsi
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v14; // r14
  ACCESS_MASK v15; // eax
  UNICODE_STRING *v16; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *v17; // rcx
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-1h] BYREF
  NTSTATUS AccessStatus; // [rsp+5Ch] [rbp+3h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp+7h] BYREF
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp+Fh]
  PPRIVILEGE_SET v23[5]; // [rsp+70h] [rbp+17h] BYREF

  memset(v23, 0, 0x20uLL);
  WORD1(v23[0]) = -1;
  if ( CmpIsKeyDeletedForKeyBody((__int64)Object, ObjectCreated) )
  {
    v11 = -1073741444;
    goto LABEL_13;
  }
  AccessStatus = CmpStartKcbStackForTopLayerKcb((__int64)v23, Object[1], v9, v10);
  v11 = AccessStatus;
  if ( AccessStatus < 0 )
  {
LABEL_13:
    v14 = 0;
    goto LABEL_10;
  }
  SubjectContext = &AccessState->SubjectSecurityContext;
  v12 = (void *)(CmpGetSecurityCacheEntryForKcbStack((__int64)v23, ObjectCreated) + 32);
  SeLockSubjectContext(&AccessState->SubjectSecurityContext);
  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  GrantedAccess = 0;
  Privileges = 0LL;
  v14 = SeAccessCheck(
          v12,
          &AccessState->SubjectSecurityContext,
          1u,
          RemainingDesiredAccess,
          AccessState->PreviouslyGrantedAccess,
          &Privileges,
          (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
          AccessMode,
          &GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(AccessState, Privileges);
    CmSiFreeMemory(Privileges);
  }
  if ( v14 )
  {
    v15 = GrantedAccess;
    AccessState->PreviouslyGrantedAccess |= GrantedAccess;
    AccessState->RemainingDesiredAccess &= ~(v15 | 0x2000000);
  }
  *((_WORD *)Object + 24) |= 2u;
  v16 = (UNICODE_STRING *)(CmKeyObjectType + 2);
  if ( ObjectCreated )
    SeOpenObjectAuditAlarmWithTransaction(
      v16,
      Object,
      0LL,
      v12,
      AccessState,
      0,
      v14,
      AccessMode,
      (GUID *)(ObjectCreated + 88),
      &AccessState->GenerateOnClose);
  else
    SeOpenObjectAuditAlarm(v16, Object, 0LL, v12, AccessState, 0, v14, AccessMode, &AccessState->GenerateOnClose);
  v17 = SubjectContext;
  *((_WORD *)Object + 24) &= ~2u;
  SeUnlockSubjectContext(v17);
  v11 = AccessStatus;
LABEL_10:
  if ( v23[3] )
    CmSiFreeMemory(v23[3]);
  *a5 = v11;
  return v14;
}
