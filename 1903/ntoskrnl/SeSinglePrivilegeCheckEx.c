/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x140672D8C
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x14008BDB4 (SepCheckForCriticalAceRemoval.c)
 *     SepValidLabelSubjectContext @ 0x140671EE0 (SepValidLabelSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     SepValidOwnerSubjectContext @ 0x1406CDA50 (SepValidOwnerSubjectContext.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1406D5424 (CmpSetAccessStateForBackupRestore.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     SePrivilegeCheck @ 0x1405CED00 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405CF3DC (SePrivilegedServiceAuditAlarm.c)
 */

BOOLEAN __fastcall SeSinglePrivilegeCheckEx(LUID a1, struct _SECURITY_SUBJECT_CONTEXT *a2, KPROCESSOR_MODE a3)
{
  BOOLEAN v5; // al
  BOOLEAN v6; // di
  struct _PRIVILEGE_SET v8; // [rsp+20h] [rbp-28h] BYREF

  v8.PrivilegeCount = 1;
  v8.Control = 1;
  v8.Privilege[0].Luid = a1;
  v8.Privilege[0].Attributes = 0;
  v5 = SePrivilegeCheck(&v8, a2, a3);
  v6 = v5;
  if ( a3 )
    SePrivilegedServiceAuditAlarm(0, (__int64 *)a2, (__int64)&v8, v5);
  return v6;
}
