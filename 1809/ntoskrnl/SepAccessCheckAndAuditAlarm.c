/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x1405BB46C
 * Callers:
 *     NtAccessCheckAndAuditAlarm @ 0x1405BB330 (NtAccessCheckAndAuditAlarm.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x1405BB3C0 (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x1408A1660 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x1408A1710 (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 * Callees:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarm(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        __int64 a13,
        volatile void *a14,
        volatile void *a15,
        __int64 a16,
        char a17)
{
  return SepAccessCheckAndAuditAlarmWithAdminlessChecks(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           0);
}
