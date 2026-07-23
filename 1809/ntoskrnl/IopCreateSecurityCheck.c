/*
 * XREFs of IopCreateSecurityCheck @ 0x1401300EC
 * Callers:
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeOpenObjectAuditAlarm @ 0x1405971B0 (SeOpenObjectAuditAlarm.c)
 *     SeUnlockSubjectContext @ 0x1405E72C0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1405E7300 (SeLockSubjectContext.c)
 *     SeAppendPrivileges @ 0x14069ABE0 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall IopCreateSecurityCheck(
        __int64 a1,
        void *a2,
        struct _ACCESS_STATE *a3,
        int a4,
        NTSTATUS AccessStatus,
        PPRIVILEGE_SET Privileges,
        PACCESS_MASK GrantedAccess,
        PUNICODE_STRING AbsoluteObjectName,
        PUNICODE_STRING ObjectTypeName,
        __int64 a10,
        char a11)
{
  int v11; // ebx
  int v16; // eax
  PACCESS_MASK v17; // rsi
  BOOLEAN v18; // al
  PPRIVILEGE_SET v19; // r12
  BOOLEAN v20; // bp

  v11 = 0;
  if ( AccessStatus != 1 )
  {
    v16 = *(_DWORD *)(a1 + 52);
    if ( (v16 & 0x40001) != 0 || IopRequireDeviceAccessCheck && (v16 & 0x100000) != 0 )
      v11 = 2;
  }
  --*(_WORD *)(a10 + 484);
  ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  v17 = GrantedAccess;
  v18 = SeAccessCheck(
          *(PSECURITY_DESCRIPTOR *)(a1 + 272),
          &a3->SubjectSecurityContext,
          1u,
          a4 | v11,
          0,
          &Privileges,
          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
          1,
          GrantedAccess,
          &AccessStatus);
  v19 = Privileges;
  v20 = v18;
  if ( Privileges )
  {
    SeAppendPrivileges(a3, Privileges);
    ExFreePoolWithTag(v19, 0);
  }
  if ( v11 && (v11 & a4) == 0 )
    *v17 &= ~v11;
  if ( a11 && v20 )
  {
    a3->PreviouslyGrantedAccess |= *v17;
    a3->RemainingDesiredAccess &= ~(*v17 | 0x2000000);
  }
  if ( a2 )
    SeOpenObjectAuditAlarm(
      ObjectTypeName,
      a2,
      AbsoluteObjectName,
      *(PSECURITY_DESCRIPTOR *)(a1 + 272),
      a3,
      0,
      v20,
      1,
      &a3->GenerateOnClose);
  SeUnlockSubjectContext(&a3->SubjectSecurityContext);
  ExReleaseResourceLite(&IopSecurityResource);
  KiLeaveCriticalRegionUnsafe(a10);
  return v20;
}
