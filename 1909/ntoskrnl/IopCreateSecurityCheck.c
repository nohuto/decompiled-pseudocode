/*
 * XREFs of IopCreateSecurityCheck @ 0x140117380
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeLockSubjectContext @ 0x1405F6E00 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F6E60 (SeUnlockSubjectContext.c)
 *     SeOpenObjectAuditAlarm @ 0x1406BE9B0 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1406BEA10 (SeAppendPrivileges.c)
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
  KeLeaveCriticalRegionThread(a10);
  return v20;
}
