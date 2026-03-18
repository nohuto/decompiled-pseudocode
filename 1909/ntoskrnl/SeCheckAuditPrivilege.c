/*
 * XREFs of SeCheckAuditPrivilege @ 0x1406236B8
 * Callers:
 *     NtPrivilegedServiceAuditAlarm @ 0x140621BE0 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtCloseObjectAuditAlarm @ 0x1406CE580 (NtCloseObjectAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140714AA0 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1407454A0 (NtPrivilegeObjectAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1408DE600 (NtDeleteObjectAuditAlarm.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1400053D0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405CF8DC (SePrivilegedServiceAuditAlarm.c)
 */

char __fastcall SeCheckAuditPrivilege(__int64 *a1, char a2)
{
  __int64 v4; // rcx
  char v5; // al
  char v6; // di
  _DWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+40h] [rbp-18h]

  v8[0] = 1;
  v4 = a1[2];
  v8[1] = 1;
  v9 = SeAuditPrivilege;
  v10 = 0;
  v5 = SepPrivilegeCheck(v4, (__int64)&v9, 1u, 1, a2);
  v6 = v5;
  if ( a2 )
    SePrivilegedServiceAuditAlarm(0, a1, (__int64)v8, v5);
  return v6;
}
