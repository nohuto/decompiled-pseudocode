/*
 * XREFs of ObCheckObjectAccess @ 0x1406BE820
 * Callers:
 *     ObpGrantAccess @ 0x1406BE77C (ObpGrantAccess.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x1405C7290 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405C7680 (ObpGetObjectSecurity.c)
 *     SeLockSubjectContext @ 0x1405F6E00 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F6E60 (SeUnlockSubjectContext.c)
 *     SeOpenObjectAuditAlarm @ 0x1406BE9B0 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1406BEA10 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall ObCheckObjectAccess(
        char *Object,
        PACCESS_STATE AccessState,
        __int64 a3,
        char a4,
        PNTSTATUS AccessStatus)
{
  char v5; // di
  unsigned __int64 v7; // r10
  __int64 v10; // rbp
  int ObjectSecurity; // edx
  BOOLEAN v12; // bp
  ACCESS_MASK v13; // eax
  BOOLEAN result; // al
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-30h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-28h] BYREF
  UNICODE_STRING *v18; // [rsp+68h] [rbp-20h]
  BOOLEAN MemoryAllocated; // [rsp+90h] [rbp+8h] BYREF

  v5 = 0;
  v7 = (unsigned __int8)*(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  GrantedAccess = 0;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  v18 = (UNICODE_STRING *)v10;
  ObjectSecurity = ObpGetObjectSecurity((__int64)Object, &SecurityDescriptor, &MemoryAllocated, a4);
  if ( ObjectSecurity < 0 )
    goto LABEL_9;
  if ( !SecurityDescriptor )
  {
    AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
    AccessState->RemainingDesiredAccess = 0;
    v5 = 1;
LABEL_9:
    result = v5;
    *AccessStatus = ObjectSecurity;
    return result;
  }
  SeLockSubjectContext(&AccessState->SubjectSecurityContext);
  v12 = SeAccessCheck(
          SecurityDescriptor,
          &AccessState->SubjectSecurityContext,
          1u,
          AccessState->RemainingDesiredAccess,
          AccessState->PreviouslyGrantedAccess,
          &Privileges,
          (PGENERIC_MAPPING)(v10 + 76),
          a4,
          &GrantedAccess,
          AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(AccessState, Privileges);
    CmSiFreeMemory(Privileges);
  }
  if ( v12 )
  {
    v13 = GrantedAccess;
    AccessState->PreviouslyGrantedAccess |= GrantedAccess;
    AccessState->RemainingDesiredAccess &= ~(v13 | 0x2000000);
  }
  SeOpenObjectAuditAlarm(
    v18 + 1,
    Object,
    0LL,
    SecurityDescriptor,
    AccessState,
    0,
    v12,
    a4,
    &AccessState->GenerateOnClose);
  SeUnlockSubjectContext(&AccessState->SubjectSecurityContext);
  ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
  return v12;
}
