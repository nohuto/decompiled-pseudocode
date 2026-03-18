/*
 * XREFs of ObCheckCreateObjectAccess @ 0x1405C5B00
 * Callers:
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x1405C6D90 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405C7180 (ObpGetObjectSecurity.c)
 *     SeLockSubjectContext @ 0x1405F5DB0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F5E10 (SeUnlockSubjectContext.c)
 *     SeAppendPrivileges @ 0x1406BEF60 (SeAppendPrivileges.c)
 */

char __fastcall ObCheckCreateObjectAccess(
        __int64 a1,
        ACCESS_MASK a2,
        struct _ACCESS_STATE *a3,
        __int64 a4,
        __int64 a5,
        KPROCESSOR_MODE a6,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // si
  __int64 v10; // r15
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v12; // al
  struct _PRIVILEGE_SET *v13; // rbp
  char v14; // si
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-30h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-28h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+90h] [rbp+8h] BYREF

  AccessMode = a6;
  GrantedAccess = 0;
  Privileges = 0LL;
  LOBYTE(a4) = a6;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, a4);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext(&a3->SubjectSecurityContext);
    if ( SecurityDescriptor )
    {
      v12 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              a2,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v10 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      v13 = Privileges;
      v14 = v12;
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        CmSiFreeMemory(v13);
      }
    }
    else
    {
      v14 = 1;
    }
    SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return v14;
  }
}
