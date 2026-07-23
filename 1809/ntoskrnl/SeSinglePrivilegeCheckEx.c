/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x1406131AC
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x140013054 (SepCheckForCriticalAceRemoval.c)
 *     SepValidLabelSubjectContext @ 0x14060A6D0 (SepValidLabelSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SepValidOwnerSubjectContext @ 0x1406A656C (SepValidOwnerSubjectContext.c)
 *     CmpSetAccessStateForBackupRestore @ 0x140706890 (CmpSetAccessStateForBackupRestore.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SePrivilegeCheck @ 0x14062B1F0 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14062DE88 (SePrivilegedServiceAuditAlarm.c)
 */

BOOLEAN __fastcall SeSinglePrivilegeCheckEx(LUID a1, struct _SECURITY_SUBJECT_CONTEXT *a2, KPROCESSOR_MODE a3)
{
  BOOLEAN v5; // al
  __int64 v6; // r9
  BOOLEAN v7; // di
  struct _PRIVILEGE_SET v9; // [rsp+20h] [rbp-28h] BYREF

  v9.PrivilegeCount = 1;
  v9.Control = 1;
  v9.Privilege[0].Luid = a1;
  v9.Privilege[0].Attributes = 0;
  v5 = SePrivilegeCheck(&v9, a2, a3);
  v7 = v5;
  if ( a3 )
  {
    LOBYTE(v6) = v5;
    SePrivilegedServiceAuditAlarm(0LL, a2, &v9, v6);
  }
  return v7;
}
